; ClementoLang syntax highlighting.
; tree-sitter highlight resolves the FIRST matching pattern, so the most
; specific rules come first and the catch-alls come last.

; ------------------------------------------------------------------ keywords
[
  "def"
  "defp"
  "defx"
  "type"
  "effect"
] @keyword.function

"import" @keyword.import
"match" @keyword.conditional
"as" @keyword.operator

; ------------------------------------------------------------------- imports
(import_statement path: (scoped_identifier) @module)
(import_statement path: (identifier) @module)
((import_item (identifier) @constructor)
 (#match? @constructor "^[A-Z]"))
(import_item (identifier) @function)

; ----------------------------------------------------------- type definitions
(type_definition name: (type_identifier) @type)
(type_parameters (identifier) @type.parameter)
(variant name: (type_identifier) @constructor)
(field name: (identifier) @property)

; --------------------------------------------------------------------- effects
; `effect IO` declaration, and `!IO` / `!a` / `!*` annotations in signatures.
; An effect is treated like a type, so its name is highlighted as one.
(effect_definition name: (type_identifier) @type)
(effect "!" @operator)
(effect "*" @character.special)
(effect (type_identifier) @type)
(effect (scoped_identifier) @type)
((effect (identifier) @type.parameter)
 (#match? @type.parameter "^[a-z]"))
((effect (identifier) @type)
 (#match? @type "^[A-Z]"))

; ------------------------------------------------------- types in signatures
; Built-in scalar/collection types.
((type_reference (identifier) @type.builtin)
 (#match? @type.builtin "^(I8|I16|I32|I64|I128|U8|U16|U32|U64|U128|F64|Char|String|CStr|Boolean)$"))

; Lowercase type atoms are generic parameters; uppercase are concrete types.
((type_reference (identifier) @type.parameter)
 (#match? @type.parameter "^[a-z]"))
((type_reference (identifier) @type)
 (#match? @type "^[A-Z]"))
(type_reference (type_identifier) @type)
(type_reference (scoped_identifier) @type)

; ------------------------------------------------------- function definitions
(function_definition name: (identifier) @function)
(function_definition name: (operator) @function)
(external_definition name: (identifier) @function)
(external_definition name: (operator) @function)

; ------------------------------------------------------------------- patterns
(constructor_pattern name: (identifier) @constructor)
(constructor_pattern name: (scoped_identifier) @constructor)
(field_binding name: (identifier) @variable.parameter)
(field_binding alias: (identifier) @variable.parameter)
(wildcard_pattern "*" @character.special)
(rest_pattern) @operator
; A bare lowercase pattern binds a value; uppercase is a nullary constructor.
((match_arm pattern: (identifier) @constructor)
 (#match? @constructor "^[A-Z]"))
((list_pattern (identifier) @constructor)
 (#match? @constructor "^[A-Z]"))

; ----------------------------------------------------- function values (`\`)
(function_reference "\\" @operator)
(function_reference (identifier) @function)
(function_reference (scoped_identifier) @function)
(function_reference (operator) @function)
(quotation "\\" @operator)

; ------------------------------------------------------ words in expressions
; Stack-shuffling builtins.
((identifier) @function.builtin
 (#match? @function.builtin "^(dup|dup2|swap|drop|drop2|rot|touch|apply)$"))

; Qualified calls: `boolean::True` is a constructor, `char::print` a function.
((scoped_identifier) @constructor
 (#match? @constructor "::[A-Z][A-Za-z0-9_]*$"))
(scoped_identifier) @function

; Bare uppercase words are constructors (`True`, `Ok`, `List`, `Empty`, ...).
((identifier) @constructor
 (#match? @constructor "^[A-Z]"))

; ----------------------------------------------------------------- operators
(operator) @operator
"->" @operator

; ------------------------------------------------------------------ literals
(number) @number
(char) @constant.character
(string) @string
(string_content) @string
(escape_sequence) @string.escape
(comment) @comment

; --------------------------------------------------------------- punctuation
[
  "("
  ")"
  "{"
  "}"
  "["
  "]"
  "<"
  ">"
] @punctuation.bracket

; --------------------------------------------------------------- catch-all
; Any remaining bare word is a function call or a bound variable.
(identifier) @variable
