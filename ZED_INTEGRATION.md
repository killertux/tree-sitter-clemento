# Zed Editor Integration Guide for Clemento

This guide explains how to integrate the Clemento tree-sitter grammar with the Zed editor for syntax highlighting and language support.

## Overview

Zed is a high-performance code editor that uses tree-sitter for syntax highlighting and language features. This integration will provide:

- Syntax highlighting for `.clem` and `.clemento` files
- Proper bracket matching and autocompletion
- Comment toggling support
- Basic language server protocol support (when available)

## Installation Methods

### Method 1: Manual Installation (Recommended)

1. **Build the grammar:**
   ```bash
   cd tree-sitter-clemento
   npm install
   npx tree-sitter generate
   cargo build
   ```

2. **Create Zed extension directory:**
   ```bash
   mkdir -p ~/.config/zed/extensions/clemento
   ```

3. **Copy necessary files:**
   ```bash
   # Copy the extension configuration
   cp zed-clemento.json ~/.config/zed/extensions/clemento/extension.json
   
   # Copy grammar files
   mkdir -p ~/.config/zed/extensions/clemento/grammars
   cp grammar.js ~/.config/zed/extensions/clemento/grammars/
   cp -r queries ~/.config/zed/extensions/clemento/
   cp src/grammar.json ~/.config/zed/extensions/clemento/grammars/
   cp src/node-types.json ~/.config/zed/extensions/clemento/grammars/
   ```

4. **Create the extension manifest:**
   Create `~/.config/zed/extensions/clemento/extension.toml`:
   ```toml
   id = "clemento"
   name = "Clemento Language Support"
   description = "Tree-sitter grammar and syntax highlighting for Clemento"
   version = "0.1.0"
   schema_version = 1
   authors = ["Your Name <your.email@example.com>"]
   repository = "https://github.com/your-username/tree-sitter-clemento"

   [language_servers.clemento-lsp]
   name = "clemento-lsp"
   languages = ["Clemento"]
   ```

### Method 2: Zed Settings Configuration

Add the following to your Zed settings file (`~/.config/zed/settings.json`):

```json
{
  "languages": {
    "Clemento": {
      "extensions": ["clem", "clemento"],
      "grammar": {
        "repository": "https://github.com/your-username/tree-sitter-clemento",
        "rev": "main"
      },
      "line_comment": "//",
      "block_comment": ["/*", "*/"],
      "scope": "source.clemento",
      "brackets": [
        { "start": "{", "end": "}", "close": true, "newline": true },
        { "start": "(", "end": ")", "close": true, "newline": false }
      ],
      "autoclose": {
        "before": ";,=+*)}>]:&!%",
        "brackets": {
          "{": "}",
          "(": ")",
          "\"": "\""
        }
      }
    }
  },
  "file_types": {
    "Clemento": ["clem", "clemento"]
  }
}
```

### Method 3: Using Pre-built Extension (Future)

Once published to the Zed extension registry:

1. Open Zed
2. Go to Extensions (Cmd/Ctrl + Shift + X)
3. Search for "Clemento"
4. Click Install

## Features Provided

### Syntax Highlighting

The integration provides highlighting for:

- **Keywords**: `def`, `if`, `else`
- **Operators**: `+`, `-`, `*`, `/`, `%`, `==`, `!=`, `<`, `<=`, `>`, `>=`, `&&`, `||`, `!`, `and`, `or`, `not`
- **Stack Operations**: `dup`, `drop`, `swap`, `over`, `rot`
- **String Literals**: `"Hello, World!"` with escape sequence support
- **Number Literals**: Integers, floats, hex, binary, and octal
- **Comments**: Both `//` single-line and `/* */` multi-line
- **Function Names**: In function definitions
- **Type Annotations**: In function signatures

### Code Structure

- **Function Definitions**: Proper folding for function bodies
- **Bracket Matching**: Automatic matching for `{}` and `()`
- **Auto-completion**: Basic bracket and quote completion
- **Indentation**: Proper indentation for nested blocks

### Example Highlighted Code

```clemento
// Function definitions with syntax highlighting
def greet (String -> ) { println }
def fibonacci (Int -> Int) {
    dup 2 < if {
        drop 1
    } else {
        dup 1 - fibonacci
        swap 2 - fibonacci
        +
    }
}

def main {
    "Hello, World!" greet
    10 fibonacci println
}
```

## File Associations

The integration associates the following file extensions with Clemento:

- `.clem` - Primary Clemento source files
- `.clemento` - Alternative extension for Clemento files

## Customizing Syntax Highlighting

To customize the syntax highlighting colors, add theme overrides to your Zed settings:

```json
{
  "theme": {
    "mode": "system",
    "light": "One Light",
    "dark": "One Dark"
  },
  "syntax": {
    "theme": {
      "keyword": "#c678dd",
      "function": "#61afef",
      "string": "#98c379",
      "number": "#d19a66",
      "operator": "#56b6c2",
      "comment": "#5c6370"
    }
  }
}
```

## Troubleshooting

### Grammar Not Loading

1. **Check file paths**: Ensure all files are in the correct locations
2. **Restart Zed**: After installing, restart Zed completely
3. **Check logs**: Look at Zed's developer console for errors
4. **Verify build**: Make sure `npx tree-sitter generate` completed successfully

### Syntax Highlighting Not Working

1. **File extension**: Ensure your file has `.clem` or `.clemento` extension
2. **Manual language selection**: Use Cmd/Ctrl + Shift + P and search "Select Language"
3. **Check queries**: Verify `queries/highlights.scm` is properly formatted
4. **Theme compatibility**: Some themes may not show all highlight categories

### Performance Issues

1. **Large files**: Tree-sitter can be slower on very large files
2. **Complex expressions**: Deeply nested expressions may slow parsing
3. **Memory usage**: Monitor memory usage with complex grammars

## Development and Testing

### Local Development

To test changes during development:

1. **Make changes** to `grammar.js` or query files
2. **Regenerate**: Run `npx tree-sitter generate`
3. **Test parsing**: Use `npx tree-sitter parse test_file.clem`
4. **Restart Zed**: Reload the extension in Zed

### Adding New Language Features

When extending the language:

1. **Update grammar**: Modify `grammar.js` with new syntax rules
2. **Add highlighting**: Update `queries/highlights.scm` for new tokens
3. **Test thoroughly**: Add test cases in `test/corpus/`
4. **Update documentation**: Keep this guide and README.md current

### Testing with Sample Files

Create test files to verify the integration:

```clemento
// test.clem - Basic syntax test
def hello_world {
    "Hello, Clemento!" println
}

def math_test {
    10 20 + 30 * println  // Should be 900
}

def stack_test {
    1 2 3 dup println     // Prints 3
    swap println          // Prints 2  
    over println          // Prints 1
}
```

## Future Enhancements

Planned improvements for the Zed integration:

- **Language Server**: Full LSP support with error checking, go-to-definition, and refactoring
- **Debugger Integration**: Step-through debugging for Clemento programs
- **REPL Integration**: Interactive evaluation within Zed
- **Package Management**: Support for Clemento package/module systems
- **Advanced Formatting**: Automatic code formatting and style checking

## Contributing

To contribute to the Zed integration:

1. Fork the repository
2. Create a feature branch
3. Test your changes with real Clemento code
4. Submit a pull request with updated documentation

## Support

For issues specific to Zed integration:

- Check the [Zed documentation](https://zed.dev/docs)
- Report issues in the tree-sitter-clemento repository
- Join the Zed community Discord for editor-specific questions

For general tree-sitter grammar issues:

- Use the test suite: `npx tree-sitter test`
- Check the [tree-sitter documentation](https://tree-sitter.github.io/tree-sitter/)
- Report grammar bugs in the repository issues