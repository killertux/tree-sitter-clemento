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
 *   - A `def`/`defp` body is a single term: `\{ ... }` / `\name` for a *lazy
 *     function* (referencing the name runs it), or any other term (`{ ... }`,
 *     a literal, ...) for an *eager value binding* (the body runs once and its
 *     result is captured). An eager `def` whose body is a block of nested defs
 *     is a *namespace*, whose members are reached with `::`.
 *   - There is no `main`: a file's top level is the program, so it may contain
 *     executable terms alongside definitions, imports, and type declarations.
 *   - Effects: `effect IO` declares a side effect; signatures annotate them on
 *     the output side with a `!` sigil — `!IO` (named), `!a` (effect variable),
 *     `!*` (the any-effects wildcard), e.g. `def println (String -> !IO)`.
 */

module.exports = grammar({
  name: "clemento",

  extras: ($) => [/\s/, $.comment],

  word: ($) => $.identifier,

  rules: {
    // A file's top level is the program: definitions, imports, type decls, and
    // executable terms, in any order. The same item set fills every block (so a
    // namespace def's body, a function body, and a quotation are uniform).
    source_file: ($) => repeat($._item),

    _item: ($) =>
      choice(
        $.import_statement,
        $.type_definition,
        $.effect_definition,
        $.external_definition,
        $._term,
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

    // ----------------------------------------------------- effect definitions
    // `effect IO` — declares a side effect. It has no value and never reaches
    // codegen; it is referenced in signatures with a `!` sigil (see `effect`).
    effect_definition: ($) => seq("effect", field("name", $.type_identifier)),

    variant: ($) =>
      seq(field("name", $.type_identifier), optional($.variant_fields)),

    variant_fields: ($) => seq("(", repeat($.field), ")"),

    field: ($) => seq(field("name", $.identifier), field("type", $._type)),

    // --------------------------------------------------- function definitions
    // `def name (sig)? body` / `defp ...` — the body is a single term: `\{ ... }`
    // or `\name` for a lazy function, or any other term for an eager value
    // binding (a block of nested defs makes it a namespace).
    function_definition: ($) =>
      seq(
        choice("def", "defp"),
        field("name", choice($.identifier, $.operator)),
        optional($.function_signature),
        field("body", $._term),
      ),

    // `defx name (sig)` — an external (FFI) declaration: a signature, no body.
    external_definition: ($) =>
      seq(
        "defx",
        field("name", choice($.identifier, $.operator)),
        $.function_signature,
      ),

    function_signature: ($) =>
      seq("(", optional($.type_list), "->", optional($.output_list), ")"),

    type_list: ($) => repeat1($._type),

    // The output side of a signature may carry effects (`!IO`, `!a`, `!*`)
    // alongside the pushed types.
    output_list: ($) => repeat1(choice($._type, $.effect)),

    // `!IO` (named), `!std::io::IO` (qualified), `!a` (effect variable), `!*`
    // (the any-effects wildcard). Effects appear only on a signature's output
    // side, so the `!`-led token never collides with the `!=` operator (which
    // only occurs in terms).
    effect: ($) =>
      seq(
        "!",
        field(
          "name",
          choice($.scoped_identifier, $.type_identifier, $.identifier, "*"),
        ),
      ),

    // ------------------------------------------------------------------ types
    _type: ($) => choice($.type_reference, $.function_type),

    // `String`, `Result<a b>`, `result::Result<CStr Error>`, generic `a`.
    type_reference: ($) =>
      seq(
        choice($.type_identifier, $.identifier, $.scoped_identifier),
        optional($.type_arguments),
      ),

    type_arguments: ($) => seq("<", repeat1($._type), ">"),

    // A first-class function type, e.g. `(a -> c)`, `((a -> I64) -> Map)`, or an
    // effectful `(a -> b !e)` parameter.
    function_type: ($) =>
      seq("(", optional($.type_list), "->", optional($.output_list), ")"),

    // --------------------------------------------------------- bodies & terms
    // A block may hold the same items as the top level (so namespace bodies can
    // declare nested defs/types/imports as well as run terms).
    block: ($) => seq("{", repeat($._item), "}"),

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
