module.exports = grammar({
  name: "clemento",

  rules: {
    source_file: ($) => repeat($._definition),

    _definition: ($) => choice($.function_definition, $.comment),

    function_definition: ($) =>
      seq("def", $.identifier, optional($.function_signature), $.function_body),

    function_signature: ($) =>
      seq("(", optional($.type_list), "->", optional($.type_list), ")"),

    type_list: ($) => repeat1($.type),

    type: ($) => $.identifier,

    function_body: ($) => seq("{", optional($.expression_sequence), "}"),

    expression_sequence: ($) => repeat1($._expression),

    _expression: ($) => choice($.atom, $.if_expression, $.comment),

    atom: ($) =>
      choice($.string_literal, $.number_literal, $.identifier, $.operator),

    if_expression: ($) =>
      seq("if", $.function_body, optional(seq("else", $.function_body))),

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

    operator: ($) =>
      choice(
        "+",
        "-",
        "*",
        "/",
        "%",
        "==",
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
        "dup",
        "drop",
        "swap",
        "over",
        "rot",
      ),

    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    comment: ($) =>
      token(
        choice(seq("//", /.*/), seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")),
      ),

    _whitespace: ($) => /\s+/,
  },

  extras: ($) => [/\s/, $.comment],

  conflicts: ($) => [],

  word: ($) => $.identifier,
});
