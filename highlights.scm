; Keywords
"def" @keyword.function
"defp" @keyword.function
"defx" @keyword.function
"import" @keyword.import

; Import statements
(import_statement
  "import" @keyword.import
  (import_path) @module)

(import_path
  "::" @punctuation.delimiter)

; Keywords
(if_keyword) @keyword.conditional
(else_keyword) @keyword.conditional

; Function definitions
(function_definition
  name: (identifier) @function)

; Function signatures
(function_signature
  "(" @punctuation.bracket
  "->" @operator
  ")" @punctuation.bracket)

; Types
(type (identifier) @type)
(generic_type) @type.parameter

; Built-in types
((identifier) @type.builtin
 (#match? @type.builtin "^(U8|U16|U32|U64|U128|I8|I16|I32|I64|I128|F64|Boolean|String)$"))

; Operators
(operator) @operator

; Boolean literals
(boolean_literal) @constant.builtin.boolean

; Number literals
(number_literal) @number
(typed_number_literal) @number

; String literals
(string_literal) @string
(string_content) @string
(escape_sequence) @string.escape

; Comments
(comment) @comment

; Punctuation
"{" @punctuation.bracket
"}" @punctuation.bracket
"(" @punctuation.bracket
")" @punctuation.bracket

; Stack manipulation functions
((identifier) @function.builtin
 (#match? @function.builtin "^(dup|dup2|swap|drop|drop2|rot|touch)$"))

; IO functions
((identifier) @function.builtin
 (#match? @function.builtin "^(print|println|dbg)$"))

; Math functions
((identifier) @function.builtin
 (#match? @function.builtin "^(abs)$"))

; Comparison operators as functions
((identifier) @operator
 (#match? @operator "^(&&)$"))

; Main function
((identifier) @function.special
 (#eq? @function.special "main"))

; Identifiers (variables and function calls)
(identifier) @variable
