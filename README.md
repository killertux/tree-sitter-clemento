# Tree-sitter Grammar for ClementoLang

A [tree-sitter](https://tree-sitter.github.io/tree-sitter/) grammar for
[ClementoLang](https://github.com/killertux/clemento-lang) — a concatenative,
stack-based, statically-typed language that compiles to LLVM IR.

## Language overview

ClementoLang is postfix (words operate on an implicit stack). Notable features
the grammar models:

- **Definitions:** `def` (public), `defp` (private/nested), `defx` (external /
  FFI, no body). Names may be words (`to_string`) or operator symbols (`+`,
  `&&`, `%i8`). A `def`/`defp` body is a single term: `\{ ... }` / `\name` for a
  **lazy function** (referencing the name runs it), or any other term for an
  **eager value binding** (the body runs once and its result is captured).
- **Namespaces & `::`:** an eager `def` whose body is a block of nested defs is a
  namespace; its members are reached with `::` — `def std { def string { def
  concat … } }` then `std::string::concat`.
- **No `main`:** a file's top level *is* the program, so it may contain
  executable terms alongside definitions, imports, and type declarations; a
  trailing `I32` is the exit code.
- **Type declarations:** `type Name { ... }` with sum-type variants, optional
  generics (`type Result<a b> { ... }`), and record-style fields
  (`List(next List<a> element a)`).
- **Type signatures:** `(Inputs -> Outputs)`, generics (`a`), generic
  application (`Result<a b>`), and first-class function types (`(a -> b)`).
- **First-class functions:** `\name` (reference) and `\{ ... }` (quotation),
  applied with `apply`.
- **`match`:** matches the top of the stack. Patterns include constructors
  (`Ok(value)`), lists (`[]`, `[head ... tail]`), strings (`"quit"`,
  `"say " ... rest`), literals, qualified constructors (`boolean::True`), and
  the wildcard `*` (optionally `* as name`).
- **Imports:** `import std::list`, selective `import std::io(println eprintln)`,
  aliased `import std::stack(swap as sw)`, and wildcard `import std::std::*`.
- **Literals:** integers with optional width suffixes (`10u32`, `-1i8`), hex /
  binary / octal (`0xFF`, `0b1010`, `0o777`), floats (`3.14`, `2.5f64`),
  characters (`'a'`, `'\n'`), and strings (`"..."`). Comparisons are named
  functions (`lt`, `gt`, `=`), since `<` / `>` are reserved for generics.

### Example

```clemento
import std::io(println eprintln)
import std::stack(swap drop)

type Option<a> {
    None
    Some(value a)
}

def map (Option<a> (a -> b) -> Option<b>) \{
    swap match {
        Some(value) -> { value swap apply Some }
        None        -> { drop None }
    }
}

// top level is the program; the trailing I32 is the exit code
"hello" println
0i32
```

See [`example.clem`](example.clem) for a longer sample.

## Development

```bash
npm install                 # install tree-sitter-cli
npx tree-sitter generate    # regenerate src/ from grammar.js
npx tree-sitter test        # run the test/corpus/ suite
npx tree-sitter parse f.clem # parse a file
npx tree-sitter highlight f.clem # preview highlighting
```

When changing the language:

1. Update `grammar.js`.
2. Regenerate with `npx tree-sitter generate`.
3. Add/adjust cases under `test/corpus/`.
4. Update the queries in `queries/highlights.scm` and `queries/tags.scm`.
5. Update this README.

## Editor integration

### Zed

This grammar backs the [ClementoLang Zed extension](https://github.com/killertux/clemento-lang-zed),
which references it by commit in its `extension.toml`. After pushing grammar
changes, bump that commit hash and copy `queries/highlights.scm` into the
extension's `languages/clemento/highlights.scm`.

### Neovim (nvim-treesitter)

```lua
require'nvim-treesitter.configs'.setup {
  ensure_installed = { "clemento" },
  highlight = { enable = true },
}
```

## License

MIT — see [LICENSE](LICENSE).
