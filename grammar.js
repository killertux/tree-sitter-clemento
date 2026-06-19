/**
 * @file Tree-sitter grammar for ClementoLang — a concatenative, stack-based,
 *       statically-typed language that compiles to LLVM IR.
 *
 * Reference: the compiler's lexer (`src/lexer/scanner.rs`) and parser
 * (`src/parser.rs`). Notable lexer facts encoded below:
 *   - Separators are whitespace and `( ) [ ] { } < > \`. Everything else runs
 *     together into a single symbol, so operator words like `&&`, `!=`, `%i8`
 *     are ordinary symbols (function names), and `::` joins a qualified path.
 *   - `<` / `>` are chevrons used for generics; comparisons are named functions
 *     (`lt`, `gt`, ...), never `<`/`>`, which keeps generics unambiguous.
 *   - `'x'` is a character literal; `"..."` a string; `\name` / `\{ ... }` a
 *     function value (reference / quotation); `->` separates a signature's or a
 *     match arm's two sides.
 */

module.exports = grammar({
  name: "clemento",

  extras: ($) => [/\s/, $.comment],

  word: ($) => $.identifier,

  conflicts: ($) => [
    // `def`/`defp` carry a body block while `defx` does not; with nested defs a
    // trailing `{` is ambiguous until reduced. GLR explores both.
    [$.function_definition],
  ],

  rules: {
    source_file: ($) => repeat($._definition),

    _definition: ($) =>
      choice(
        $.import_statement,
        $.type_definition,
        $.function_definition,
        $.comment,
      ),

    // ---------------------------------------------------------------- imports
    // `import std::list`
    // `import std::io(println eprintln)`
    // `import error(Error)`
    // `import std::std::*`
    import_statement: ($) =>
      seq(
        "import",
        field("path", choice($.scoped_identifier, $.identifier)),
        optional($.import_selection),
      ),

    import_selection: ($) => seq("(", repeat($.import_item), ")"),

    import_item: ($) =>
      seq(
        choice($.identifier, $.operator),
        optional(seq("as", field("alias", $.identifier))),
      ),

    // ------------------------------------------------------- type definitions
    // `type Boolean { False True }`
    // `type Result<a b> { Ok(value a) Err(error b) }`
    // `type List<a> { Empty List(next List<a> element a) }`
    type_definition: ($) =>
      seq(
        "type",
        field("name", $.type_identifier),
        optional($.type_parameters),
        "{",
        repeat($.variant),
        "}",
      ),

    type_parameters: ($) => seq("<", repeat1($.identifier), ">"),

    variant: ($) =>
      seq(field("name", $.type_identifier), optional($.variant_fields)),

    variant_fields: ($) => seq("(", repeat($.field), ")"),

    field: ($) => seq(field("name", $.identifier), field("type", $._type)),

    // --------------------------------------------------- function definitions
    // `def name (sig) { body }`  — `defp` (private/nested) and `defx` (external,
    // no body) share the same shape. `defx` omits the body.
    function_definition: ($) =>
      seq(
        choice("def", "defp", "defx"),
        field("name", choice($.identifier, $.operator)),
        optional($.function_signature),
        optional($.block),
      ),

    function_signature: ($) =>
      seq("(", optional($.type_list), "->", optional($.type_list), ")"),

    type_list: ($) => repeat1($._type),

    // ------------------------------------------------------------------ types
    _type: ($) => choice($.type_reference, $.function_type),

    // `String`, `Result<a b>`, `result::Result<CStr Error>`, generic `a`.
    type_reference: ($) =>
      seq(
        choice($.type_identifier, $.identifier, $.scoped_identifier),
        optional($.type_arguments),
      ),

    type_arguments: ($) => seq("<", repeat1($._type), ">"),

    // A first-class function type, e.g. `(a -> c)` or `((a -> I64) -> Map)`.
    function_type: ($) =>
      seq("(", optional($.type_list), "->", optional($.type_list), ")"),

    // --------------------------------------------------------- bodies & terms
    block: ($) => seq("{", repeat($._term), "}"),

    _term: ($) =>
      choice(
        $.function_definition, // nested `defp`
        $.match_expression,
        $.quotation,
        $.function_reference,
        $.list,
        $.block,
        $.string,
        $.char,
        $.number,
        $.operator,
        $.scoped_identifier,
        $.identifier,
      ),

    // `[ a b c ]` — a list literal built on the stack.
    list: ($) => seq("[", repeat($._term), "]"),

    // `\{ ... }` — an anonymous quotation (function value).
    quotation: ($) => seq("\\", $.block),

    // `\name` / `\foo::bar` — a reference to a named function.
    function_reference: ($) =>
      seq("\\", choice($.scoped_identifier, $.identifier, $.operator)),

    // ------------------------------------------------------------------ match
    // `match { pattern -> term  ... }` — matches the top of the stack.
    match_expression: ($) => seq("match", "{", repeat($.match_arm), "}"),

    match_arm: ($) =>
      seq(field("pattern", $._pattern), "->", field("body", $._term)),

    _pattern: ($) =>
      choice(
        $.wildcard_pattern,
        $.list_pattern,
        $.constructor_pattern,
        $.string_pattern,
        $.number,
        $.char,
        $.scoped_identifier,
        $.identifier,
      ),

    // `*` — matches anything; `* as name` also binds it.
    wildcard_pattern: ($) =>
      seq("*", optional(seq("as", field("alias", $.identifier)))),

    // `""`, `"quit"` (exact), `"say " ... rest` (prefix + remainder binding).
    // A `String` is a `List<Char>`, so this is list-pattern sugar over chars.
    string_pattern: ($) =>
      seq($.string, optional(seq($.rest_pattern, field("rest", $.identifier)))),

    // `[]`, `[head ... tail]`, `['?' ... rest]`, `[a b]`. Elements bind (or
    // char/number-match); a trailing `... name` binds the remainder.
    list_pattern: ($) =>
      seq(
        "[",
        repeat(choice($.char, $.number, $.identifier)),
        optional(seq($.rest_pattern, field("rest", $.identifier))),
        "]",
      ),

    rest_pattern: ($) => "...",

    // `Ok(value)`, `Err(error)`, `Some(value as v)` — fields bind by name.
    constructor_pattern: ($) =>
      seq(
        field("name", choice($.scoped_identifier, $.identifier)),
        "(",
        repeat($.field_binding),
        ")",
      ),

    field_binding: ($) =>
      seq(
        field("name", $.identifier),
        optional(seq("as", field("alias", $.identifier))),
      ),

    // ---------------------------------------------------------------- atoms
    string: ($) => seq('"', optional($.string_content), '"'),

    string_content: ($) =>
      repeat1(choice(token.immediate(/[^"\\]+/), $.escape_sequence)),

    escape_sequence: ($) => token.immediate(seq("\\", /[\\/"'nrt0]/)),

    char: ($) =>
      token(seq("'", choice(seq("\\", /[\\'"nrt0]/), /[^'\\]/), "'")),

    number: ($) =>
      token(
        seq(
          optional("-"),
          choice(
            seq("0", /[xX]/, /[0-9a-fA-F_]+/),
            seq("0", /[bB]/, /[01_]+/),
            seq("0", /[oO]/, /[0-7_]+/),
            seq(
              /[0-9][0-9_]*/,
              optional(seq(".", /[0-9][0-9_]*/)),
              optional(seq(/[eE]/, optional(/[+-]/), /[0-9_]+/)),
            ),
          ),
          optional(
            choice(
              "u8",
              "u16",
              "u32",
              "u64",
              "u128",
              "i8",
              "i16",
              "i32",
              "i64",
              "i128",
              "f64",
            ),
          ),
        ),
      ),

    // Symbolic function names: `+`, `-`, `*`, `/`, `%`, `=`, `!=`, `&&`, `||`,
    // `%i8`, ... `<`/`>` are excluded (they are chevrons), so generics stay
    // unambiguous.
    operator: ($) => token(/[-+*/%=!&|][-+*/%=!&|A-Za-z0-9_]*/),

    // A `::`-qualified path: `std::list`, `char::print`, `boolean::True`,
    // `std::std::*`. The final segment may be a name, an operator, or `*`.
    scoped_identifier: ($) =>
      token(
        seq(
          /[A-Za-z_][A-Za-z0-9_]*/,
          repeat1(seq("::", /([A-Za-z_][A-Za-z0-9_]*|\*|[-+*/%=!&|]+)/)),
        ),
      ),

    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    // Distinct token for declaration sites where a name must be a type/variant
    // constructor (uppercase-initial). Elsewhere capitalization is classified
    // in the highlight queries.
    type_identifier: ($) => /[A-Z][a-zA-Z0-9_]*/,

    comment: ($) =>
      token(
        choice(
          seq("//", /[^\n]*/),
          seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"),
        ),
      ),
  },
});
