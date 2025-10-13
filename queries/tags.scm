; Function definitions for symbol navigation
(function_definition
  name: (identifier) @name) @definition.function

; Function calls for reference finding
(function_call
  function: (identifier) @name) @reference.call
