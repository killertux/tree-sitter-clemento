fn main() {
    let src_dir = std::path::Path::new("src");

    let mut c_config = cc::Build::new();
    c_config.include(src_dir);
    c_config
        .flag("-Wno-unused-parameter")
        .flag("-Wno-unused-but-set-variable")
        .flag("-Wno-trigraphs");
    let parser_path = src_dir.join("parser.c");
    c_config.file(&parser_path);

    // If your language includes an external scanner
    let scanner_path = src_dir.join("scanner.c");
    if scanner_path.exists() {
        c_config.file(&scanner_path);
    }

    c_config.compile("tree-sitter-clemento");
    println!("cargo:rerun-if-changed=src/parser.c");

    if scanner_path.exists() {
        println!("cargo:rerun-if-changed=src/scanner.c");
    }
}
