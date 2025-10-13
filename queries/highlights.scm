; Keywords
"def" @keyword.function
"if" @keyword.control
"else" @keyword.control

; Function names
(function_definition
  name: (identifier) @function)

; Types
(type (identifier) @type)

; String literals
(string_literal) @string
(string_content) @string
(escape_sequence) @string.escape

; Numbers
(number_literal) @number

; Operators
(operator) @operator

; Identifiers (variables and function calls)
(atom (identifier) @variable)

; Punctuation
"(" @punctuation.bracket
")" @punctuation.bracket
"{" @punctuation.bracket
"}" @punctuation.bracket
"->" @punctuation.special

; Comments
(comment) @comment
