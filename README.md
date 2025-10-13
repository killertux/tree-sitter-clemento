# Tree-sitter Grammar for Clemento

A [tree-sitter](https://tree-sitter.github.io/tree-sitter/) grammar for the Clemento programming language.

## About Clemento

Clemento is a stack-based, postfix programming language with strong typing. It features:

- Function definitions with optional type signatures
- Postfix notation (reverse Polish notation)
- Stack-based operations
- String and numeric literals
- Control flow constructs (`if`/`else`)
- Built-in stack manipulation operators

### Example Code

```clemento
def greet (String -> ) { println }
def dupstring (String -> String String) { dup }

def main {
    "Hello" dupstring greet greet
}

def fibonacci (Int -> Int) {
    dup 2 < if {
        drop 1
    } else {
        dup 1 - fibonacci
        swap 2 - fibonacci
        +
    }
}
```

## Installation

### Node.js

```bash
npm install tree-sitter-clemento
```

### Rust

Add this to your `Cargo.toml`:

```toml
[dependencies]
tree-sitter-clemento = "0.1.0"
```

## Usage

### Node.js

```javascript
const Parser = require('tree-sitter');
const Clemento = require('tree-sitter-clemento');

const parser = new Parser();
parser.setLanguage(Clemento);

const sourceCode = `
def greet { println }
def main { "Hello, World!" greet }
`;

const tree = parser.parse(sourceCode);
console.log(tree.rootNode.toString());
```

### Rust

```rust
use tree_sitter::{Language, Parser};

extern "C" { fn tree_sitter_clemento() -> Language; }

fn main() {
    let mut parser = Parser::new();
    let language = unsafe { tree_sitter_clemento() };
    parser.set_language(language).unwrap();

    let source_code = r#"
def greet { println }
def main { "Hello, World!" greet }
"#;

    let tree = parser.parse(source_code, None).unwrap();
    println!("{}", tree.root_node().to_sexp());
}
```

## Language Features

### Function Definitions

```clemento
# Simple function
def greet { println }

# Function with type signature
def add (Int Int -> Int) { + }

# Function with input types only
def greet (String -> ) { println }

# Function with output types only
def newline (-> String) { "\n" }
```

### Data Types

```clemento
# String literals
"Hello, World!"
"String with \"escaped quotes\""
"String with\nnewlines and\ttabs"

# Number literals
42
-17
3.14
-2.5
1e10
-5E-3
0x1A2B  # Hexadecimal
0b1010  # Binary
0o777   # Octal
```

### Operators

#### Arithmetic
- `+` - Addition
- `-` - Subtraction
- `*` - Multiplication
- `/` - Division
- `%` - Modulo

#### Comparison
- `==` - Equal
- `!=` - Not equal
- `<` - Less than
- `<=` - Less than or equal
- `>` - Greater than
- `>=` - Greater than or equal

#### Logical
- `&&` / `and` - Logical AND
- `||` / `or` - Logical OR
- `!` / `not` - Logical NOT

#### Stack Operations
- `dup` - Duplicate top of stack
- `drop` - Remove top of stack
- `swap` - Swap top two stack items
- `over` - Copy second item to top
- `rot` - Rotate top three items

### Control Flow

```clemento
def test_if {
    true if { "yes" println }
    false if { "no" } else { "yes" }
}
```

### Comments

```clemento
// Single-line comment

/* Multi-line
   comment */

def test {
    42 println  // End-of-line comment
}
```

## Editor Integration

### Zed

To use this grammar in [Zed](https://zed.dev/), add the following to your Zed settings:

```json
{
  "languages": {
    "Clemento": {
      "extensions": ["clem", "clemento"],
      "grammar": "clemento",
      "scope": "source.clemento"
    }
  }
}
```

### Neovim

For Neovim with nvim-treesitter:

```lua
require'nvim-treesitter.configs'.setup {
  ensure_installed = { "clemento" },
  highlight = {
    enable = true,
  },
}
```

## Development

### Building

1. Install dependencies:
   ```bash
   npm install
   ```

2. Generate the parser:
   ```bash
   npx tree-sitter generate
   ```

3. Test the grammar:
   ```bash
   npx tree-sitter test
   ```

4. Build the Rust bindings:
   ```bash
   cargo build
   ```

### Grammar Structure

The grammar defines the following main rules:

- `source_file` - Root node containing function definitions
- `function_definition` - Function with optional signature and body
- `function_signature` - Type annotations for inputs and outputs
- `function_body` - Block containing expressions
- `expression_sequence` - Series of postfix expressions
- `atom` - Basic values (strings, numbers, identifiers, operators)
- `if_expression` - Conditional expressions with optional else clause

### Testing

The test suite includes comprehensive tests for:

- Function definitions with and without type signatures
- All literal types (strings, numbers)
- All operators and stack operations
- Control flow constructs
- Comments (single-line and multi-line)
- Complex nested expressions

Run tests with:

```bash
npx tree-sitter test
cargo test
```

## Contributing

1. Fork the repository
2. Create a feature branch
3. Make your changes
4. Add tests for new functionality
5. Ensure all tests pass
6. Submit a pull request

### Adding New Language Features

When adding new language features:

1. Update the grammar in `grammar.js`
2. Regenerate the parser with `npx tree-sitter generate`
3. Add test cases in the `test/corpus/` directory
4. Update syntax highlighting queries in `queries/highlights.scm`
5. Update this README with documentation

## License

This project is licensed under the MIT License. See the LICENSE file for details.

## Acknowledgments

- [Tree-sitter](https://tree-sitter.github.io/tree-sitter/) for the parsing framework
- The Clemento language design
- Various stack-based programming languages for inspiration

## Links

- [Tree-sitter documentation](https://tree-sitter.github.io/tree-sitter/)
- [Writing a tree-sitter grammar](https://tree-sitter.github.io/tree-sitter/creating-parsers)
- [Tree-sitter highlighting](https://tree-sitter.github.io/tree-sitter/syntax-highlighting)