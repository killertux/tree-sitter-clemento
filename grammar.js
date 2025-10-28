module.exports = grammar({
  name: "clemento",

  rules: {
    source_file: ($) => repeat($._definition),

    _definition: ($) =>
      choice($.function_definition, $.import_statement, $.comment),

    import_statement: ($) => seq("import", $.import_path),

    import_path: ($) =>
      seq($.identifier, repeat(seq("::", choice($.identifier, "*")))),

    function_definition: ($) =>
      seq(
        choice("def", "defp", "defx"),
        $.identifier,
        optional($.function_signature),
        optional($.function_body),
      ),

    function_signature: ($) =>
      seq("(", optional($.type_list), "->", optional($.type_list), ")"),

    type_list: ($) => repeat1($.type),

    type: ($) => choice($.identifier, $.generic_type),

    generic_type: ($) => /[a-z]/,

    function_body: ($) => seq("{", optional($.expression_sequence), "}"),

    expression_sequence: ($) => repeat1($._expression),

    _expression: ($) => choice($.atom, $.block, $.comment),

    atom: ($) =>
      choice(
        $.string_literal,
        $.typed_number_literal,
        $.number_literal,
        $.boolean_literal,
        $.identifier,
        $.operator,
        $.if_keyword,
        $.else_keyword,
      ),

    if_keyword: ($) => "if",
    else_keyword: ($) => "else",

    block: ($) => seq("{", optional($.expression_sequence), "}"),

    string_literal: ($) => seq('"', optional($.string_content), '"'),

    string_content: ($) => repeat1(choice(/[^"\\]+/, $.escape_sequence)),

    escape_sequence: ($) =>
      token(
        seq(
          "\\",
          choice(
            /[\\/"'nrtbf]/,
            /u[0-9a-fA-F]{4}/,
            /x[0-9a-fA-F]{2}/,
            /[0-7]{1,3}/,
          ),
        ),
      ),

    typed_number_literal: ($) =>
      token(
        seq(
          optional("-"),
          choice(
            seq("0", choice("x", "X"), /[0-9a-fA-F]+/),
            seq("0", choice("b", "B"), /[01]+/),
            seq("0", choice("o", "O"), /[0-7]+/),
            seq(
              /[0-9]+/,
              optional(seq(".", /[0-9]+/)),
              optional(
                seq(choice("e", "E"), optional(choice("+", "-")), /[0-9]+/),
              ),
            ),
          ),
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

    number_literal: ($) =>
      token(
        seq(
          optional("-"),
          choice(
            seq("0", choice("x", "X"), /[0-9a-fA-F]+/),
            seq("0", choice("b", "B"), /[01]+/),
            seq("0", choice("o", "O"), /[0-7]+/),
            seq(
              /[0-9]+/,
              optional(seq(".", /[0-9]+/)),
              optional(
                seq(choice("e", "E"), optional(choice("+", "-")), /[0-9]+/),
              ),
            ),
          ),
        ),
      ),

    boolean_literal: ($) => choice("true", "false"),

    operator: ($) =>
      choice(
        "+",
        "-",
        "*",
        "/",
        "%",
        "=",
        "!=",
        "<",
        "<=",
        ">",
        ">=",
        "&&",
        "||",
        "!",
        "and",
        "or",
        "not",
      ),

    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    comment: ($) =>
      token(
        choice(seq("//", /.*/), seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")),
      ),

    _whitespace: ($) => /\s+/,
  },

  extras: ($) => [/\s/, $.comment],

  conflicts: ($) => [[$.identifier, $.generic_type]],

  word: ($) => $.identifier,
});
