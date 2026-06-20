; Symbol navigation tags.

; Definitions: `def` / `defp` / `defx` and `type`.
(function_definition
  name: (identifier) @name) @definition.function
(function_definition
  name: (operator) @name) @definition.function
(external_definition
  name: (identifier) @name) @definition.function
(external_definition
  name: (operator) @name) @definition.function

(type_definition
  name: (type_identifier) @name) @definition.type

; References: qualified word calls (e.g. `io::println`). Bare words are skipped
; here because they are indistinguishable from pattern bindings without scope.
(block
  (scoped_identifier) @name) @reference.call
