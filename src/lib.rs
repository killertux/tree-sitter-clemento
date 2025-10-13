use tree_sitter::Language;

extern "C" {
    fn tree_sitter_clemento() -> Language;
}

/// Get the tree-sitter Language for Clemento.
pub fn language() -> Language {
    unsafe { tree_sitter_clemento() }
}

/// The content of the [`node-types.json`][] file for this grammar.
///
/// [`node-types.json`]: https://tree-sitter.github.io/tree-sitter/using-parsers#static-node-types
pub const NODE_TYPES: &str = include_str!("../src/node-types.json");

// The following fields are required to export a language from Rust, but
// are not used when evaluating the language.
pub const HIGHLIGHT_QUERY: &str = include_str!("../queries/highlights.scm");
pub const INJECTIONS_QUERY: &str = "";
pub const LOCALS_QUERY: &str = "";
pub const TAGS_QUERY: &str = include_str!("../queries/tags.scm");

/// The syntax highlighting query for this language.
pub fn highlight_query() -> &'static str {
    HIGHLIGHT_QUERY
}

/// The symbol tagging query for this language.
pub fn tags_query() -> &'static str {
    TAGS_QUERY
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_can_load_grammar() {
        let mut parser = tree_sitter::Parser::new();
        parser
            .set_language(language())
            .expect("Error loading Clemento language");
    }
}
