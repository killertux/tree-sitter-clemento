{
  "targets": [
    {
      "target_name": "tree_sitter_clemento_binding",
      "include_dirs": [
        "<!(node -e \"console.log(require('node-addon-api').include)\")",
        "src"
      ],
      "dependencies": [
        "<!(node -e \"console.log(require('node-addon-api').gyp)\")"
      ],
      "sources": [
        "bindings/node/binding.cc",
        "src/parser.c"
      ],
      "conditions": [
        ["OS!='win'", {
          "cflags_c": [
            "-std=c99",
          ]
        }],
        ["OS=='mac'", {
          "xcode_settings": {
            "GCC_C_LANGUAGE_STANDARD": "c99"
          }
        }]
      ]
    }
  ]
}
