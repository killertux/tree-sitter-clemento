#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 48
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 62
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  sym_identifier = 1,
  anon_sym_import = 2,
  anon_sym_COLON_COLON = 3,
  anon_sym_STAR = 4,
  anon_sym_def = 5,
  anon_sym_defp = 6,
  anon_sym_defx = 7,
  anon_sym_LPAREN = 8,
  anon_sym_DASH_GT = 9,
  anon_sym_RPAREN = 10,
  sym_generic_type = 11,
  anon_sym_LBRACE = 12,
  anon_sym_RBRACE = 13,
  sym_if_keyword = 14,
  sym_else_keyword = 15,
  anon_sym_DQUOTE = 16,
  aux_sym_string_content_token1 = 17,
  sym_escape_sequence = 18,
  sym_typed_number_literal = 19,
  sym_number_literal = 20,
  anon_sym_true = 21,
  anon_sym_false = 22,
  anon_sym_PLUS = 23,
  anon_sym_DASH = 24,
  anon_sym_SLASH = 25,
  anon_sym_PERCENT = 26,
  anon_sym_EQ = 27,
  anon_sym_BANG_EQ = 28,
  anon_sym_LT = 29,
  anon_sym_LT_EQ = 30,
  anon_sym_GT = 31,
  anon_sym_GT_EQ = 32,
  anon_sym_AMP_AMP = 33,
  anon_sym_PIPE_PIPE = 34,
  anon_sym_BANG = 35,
  anon_sym_and = 36,
  anon_sym_or = 37,
  anon_sym_not = 38,
  sym_comment = 39,
  sym_source_file = 40,
  sym__definition = 41,
  sym_import_statement = 42,
  sym_import_path = 43,
  sym_function_definition = 44,
  sym_function_signature = 45,
  sym_type_list = 46,
  sym_type = 47,
  sym_function_body = 48,
  sym_expression_sequence = 49,
  sym__expression = 50,
  sym_atom = 51,
  sym_block = 52,
  sym_string_literal = 53,
  sym_string_content = 54,
  sym_boolean_literal = 55,
  sym_operator = 56,
  aux_sym_source_file_repeat1 = 57,
  aux_sym_import_path_repeat1 = 58,
  aux_sym_type_list_repeat1 = 59,
  aux_sym_expression_sequence_repeat1 = 60,
  aux_sym_string_content_repeat1 = 61,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_import] = "import",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_STAR] = "*",
  [anon_sym_def] = "def",
  [anon_sym_defp] = "defp",
  [anon_sym_defx] = "defx",
  [anon_sym_LPAREN] = "(",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_RPAREN] = ")",
  [sym_generic_type] = "generic_type",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_if_keyword] = "if_keyword",
  [sym_else_keyword] = "else_keyword",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_content_token1] = "string_content_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_typed_number_literal] = "typed_number_literal",
  [sym_number_literal] = "number_literal",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_EQ] = "=",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_BANG] = "!",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_not] = "not",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_import_statement] = "import_statement",
  [sym_import_path] = "import_path",
  [sym_function_definition] = "function_definition",
  [sym_function_signature] = "function_signature",
  [sym_type_list] = "type_list",
  [sym_type] = "type",
  [sym_function_body] = "function_body",
  [sym_expression_sequence] = "expression_sequence",
  [sym__expression] = "_expression",
  [sym_atom] = "atom",
  [sym_block] = "block",
  [sym_string_literal] = "string_literal",
  [sym_string_content] = "string_content",
  [sym_boolean_literal] = "boolean_literal",
  [sym_operator] = "operator",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_import_path_repeat1] = "import_path_repeat1",
  [aux_sym_type_list_repeat1] = "type_list_repeat1",
  [aux_sym_expression_sequence_repeat1] = "expression_sequence_repeat1",
  [aux_sym_string_content_repeat1] = "string_content_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_def] = anon_sym_def,
  [anon_sym_defp] = anon_sym_defp,
  [anon_sym_defx] = anon_sym_defx,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_generic_type] = sym_generic_type,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_if_keyword] = sym_if_keyword,
  [sym_else_keyword] = sym_else_keyword,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_content_token1] = aux_sym_string_content_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_typed_number_literal] = sym_typed_number_literal,
  [sym_number_literal] = sym_number_literal,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_not] = anon_sym_not,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_import_statement] = sym_import_statement,
  [sym_import_path] = sym_import_path,
  [sym_function_definition] = sym_function_definition,
  [sym_function_signature] = sym_function_signature,
  [sym_type_list] = sym_type_list,
  [sym_type] = sym_type,
  [sym_function_body] = sym_function_body,
  [sym_expression_sequence] = sym_expression_sequence,
  [sym__expression] = sym__expression,
  [sym_atom] = sym_atom,
  [sym_block] = sym_block,
  [sym_string_literal] = sym_string_literal,
  [sym_string_content] = sym_string_content,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_operator] = sym_operator,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_import_path_repeat1] = aux_sym_import_path_repeat1,
  [aux_sym_type_list_repeat1] = aux_sym_type_list_repeat1,
  [aux_sym_expression_sequence_repeat1] = aux_sym_expression_sequence_repeat1,
  [aux_sym_string_content_repeat1] = aux_sym_string_content_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_def] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_generic_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_if_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_else_keyword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_content_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_typed_number_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_import_path] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_function_signature] = {
    .visible = true,
    .named = true,
  },
  [sym_type_list] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_function_body] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_atom] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_sequence_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_content_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
};

static inline bool sym_escape_sequence_character_set_1(int32_t c) {
  return (c < 'b'
    ? (c < '/'
      ? (c < '\''
        ? c == '"'
        : c <= '\'')
      : (c <= '/' || c == '\\'))
    : (c <= 'b' || (c < 'r'
      ? (c < 'n'
        ? c == 'f'
        : c <= 'n')
      : (c <= 'r' || c == 't'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(27);
      if (lookahead == '!') ADVANCE(68);
      if (lookahead == '"') ADVANCE(35);
      if (lookahead == '%') ADVANCE(59);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '+') ADVANCE(56);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == '0') ADVANCE(47);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == '=') ADVANCE(60);
      if (lookahead == '>') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '|') ADVANCE(16);
      if (lookahead == '}') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(35);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 2:
      if (lookahead == '&') ADVANCE(66);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(71);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '1') ADVANCE(9);
      if (lookahead == '3') ADVANCE(8);
      if (lookahead == '6') ADVANCE(10);
      if (lookahead == '8') ADVANCE(45);
      END_STATE();
    case 8:
      if (lookahead == '2') ADVANCE(45);
      END_STATE();
    case 9:
      if (lookahead == '2') ADVANCE(12);
      if (lookahead == '6') ADVANCE(45);
      END_STATE();
    case 10:
      if (lookahead == '4') ADVANCE(45);
      END_STATE();
    case 11:
      if (lookahead == '6') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '8') ADVANCE(45);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(28);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(31);
      END_STATE();
    case 15:
      if (lookahead == 'u') ADVANCE(26);
      if (lookahead == 'x') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(44);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(42);
      END_STATE();
    case 16:
      if (lookahead == '|') ADVANCE(67);
      END_STATE();
    case 17:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 18:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(51);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(52);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '\n') ADVANCE(41);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(71);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(41);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(6);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(6);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(42);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(43);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_typed_number_literal);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_typed_number_literal);
      if (lookahead == 'f') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'u') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(54);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(17);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(19);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(23);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'u') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(17);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'u') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '4') ADVANCE(46);
      if (lookahead == 'f') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'u') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(54);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '6') ADVANCE(49);
      if (lookahead == 'f') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'u') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(54);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'u') ADVANCE(7);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'u') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'u') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'f') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'u') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(17);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'u') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '0') ADVANCE(47);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(71);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(61);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(2);
      if (lookahead == 'e') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == 'n') ADVANCE(6);
      if (lookahead == 'o') ADVANCE(7);
      if (lookahead == 't') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(sym_generic_type);
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(sym_generic_type);
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_generic_type);
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_generic_type);
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_generic_type);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'm') ADVANCE(15);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_generic_type);
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_generic_type);
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_generic_type);
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_generic_type);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == 'f') ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_if_keyword);
      END_STATE();
    case 15:
      if (lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 18:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'p') ADVANCE(26);
      if (lookahead == 'x') ADVANCE(27);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 22:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_defp);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_defx);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_else_keyword);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_defp] = ACTIONS(1),
    [anon_sym_defx] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_generic_type] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_if_keyword] = ACTIONS(1),
    [sym_else_keyword] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_typed_number_literal] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(46),
    [sym__definition] = STATE(13),
    [sym_import_statement] = STATE(13),
    [sym_function_definition] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(7),
    [anon_sym_def] = ACTIONS(9),
    [anon_sym_defp] = ACTIONS(11),
    [anon_sym_defx] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [2] = {
    [sym_expression_sequence] = STATE(40),
    [sym__expression] = STATE(4),
    [sym_atom] = STATE(4),
    [sym_block] = STATE(4),
    [sym_string_literal] = STATE(9),
    [sym_boolean_literal] = STATE(9),
    [sym_operator] = STATE(9),
    [aux_sym_expression_sequence_repeat1] = STATE(4),
    [sym_identifier] = ACTIONS(15),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(21),
    [sym_if_keyword] = ACTIONS(15),
    [sym_else_keyword] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_typed_number_literal] = ACTIONS(25),
    [sym_number_literal] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_SLASH] = ACTIONS(29),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_BANG_EQ] = ACTIONS(17),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(17),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(17),
    [anon_sym_AMP_AMP] = ACTIONS(17),
    [anon_sym_PIPE_PIPE] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [sym_comment] = ACTIONS(31),
  },
  [3] = {
    [sym_expression_sequence] = STATE(43),
    [sym__expression] = STATE(4),
    [sym_atom] = STATE(4),
    [sym_block] = STATE(4),
    [sym_string_literal] = STATE(9),
    [sym_boolean_literal] = STATE(9),
    [sym_operator] = STATE(9),
    [aux_sym_expression_sequence_repeat1] = STATE(4),
    [sym_identifier] = ACTIONS(15),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(33),
    [sym_if_keyword] = ACTIONS(15),
    [sym_else_keyword] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_typed_number_literal] = ACTIONS(25),
    [sym_number_literal] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_SLASH] = ACTIONS(29),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_BANG_EQ] = ACTIONS(17),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(17),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(17),
    [anon_sym_AMP_AMP] = ACTIONS(17),
    [anon_sym_PIPE_PIPE] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [sym_comment] = ACTIONS(31),
  },
  [4] = {
    [sym__expression] = STATE(5),
    [sym_atom] = STATE(5),
    [sym_block] = STATE(5),
    [sym_string_literal] = STATE(9),
    [sym_boolean_literal] = STATE(9),
    [sym_operator] = STATE(9),
    [aux_sym_expression_sequence_repeat1] = STATE(5),
    [sym_identifier] = ACTIONS(15),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(35),
    [sym_if_keyword] = ACTIONS(15),
    [sym_else_keyword] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_typed_number_literal] = ACTIONS(25),
    [sym_number_literal] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_SLASH] = ACTIONS(29),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_BANG_EQ] = ACTIONS(17),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(17),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(17),
    [anon_sym_AMP_AMP] = ACTIONS(17),
    [anon_sym_PIPE_PIPE] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [sym_comment] = ACTIONS(37),
  },
  [5] = {
    [sym__expression] = STATE(5),
    [sym_atom] = STATE(5),
    [sym_block] = STATE(5),
    [sym_string_literal] = STATE(9),
    [sym_boolean_literal] = STATE(9),
    [sym_operator] = STATE(9),
    [aux_sym_expression_sequence_repeat1] = STATE(5),
    [sym_identifier] = ACTIONS(39),
    [anon_sym_STAR] = ACTIONS(42),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(48),
    [sym_if_keyword] = ACTIONS(39),
    [sym_else_keyword] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(50),
    [sym_typed_number_literal] = ACTIONS(53),
    [sym_number_literal] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(56),
    [anon_sym_false] = ACTIONS(56),
    [anon_sym_PLUS] = ACTIONS(42),
    [anon_sym_DASH] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(42),
    [anon_sym_EQ] = ACTIONS(42),
    [anon_sym_BANG_EQ] = ACTIONS(42),
    [anon_sym_LT] = ACTIONS(59),
    [anon_sym_LT_EQ] = ACTIONS(42),
    [anon_sym_GT] = ACTIONS(59),
    [anon_sym_GT_EQ] = ACTIONS(42),
    [anon_sym_AMP_AMP] = ACTIONS(42),
    [anon_sym_PIPE_PIPE] = ACTIONS(42),
    [anon_sym_BANG] = ACTIONS(59),
    [anon_sym_and] = ACTIONS(59),
    [anon_sym_or] = ACTIONS(59),
    [anon_sym_not] = ACTIONS(59),
    [sym_comment] = ACTIONS(62),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(65), 14,
      sym_if_keyword,
      sym_else_keyword,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_and,
      anon_sym_or,
      anon_sym_not,
      sym_identifier,
    ACTIONS(67), 14,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_typed_number_literal,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [33] = 2,
    ACTIONS(69), 14,
      sym_if_keyword,
      sym_else_keyword,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_and,
      anon_sym_or,
      anon_sym_not,
      sym_identifier,
    ACTIONS(71), 14,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_typed_number_literal,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [66] = 2,
    ACTIONS(73), 14,
      sym_if_keyword,
      sym_else_keyword,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_and,
      anon_sym_or,
      anon_sym_not,
      sym_identifier,
    ACTIONS(75), 14,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_typed_number_literal,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [99] = 2,
    ACTIONS(77), 14,
      sym_if_keyword,
      sym_else_keyword,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_and,
      anon_sym_or,
      anon_sym_not,
      sym_identifier,
    ACTIONS(79), 14,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_typed_number_literal,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [132] = 2,
    ACTIONS(81), 14,
      sym_if_keyword,
      sym_else_keyword,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_and,
      anon_sym_or,
      anon_sym_not,
      sym_identifier,
    ACTIONS(83), 14,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_typed_number_literal,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [165] = 2,
    ACTIONS(85), 14,
      sym_if_keyword,
      sym_else_keyword,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_and,
      anon_sym_or,
      anon_sym_not,
      sym_identifier,
    ACTIONS(87), 14,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_typed_number_literal,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [198] = 2,
    ACTIONS(89), 14,
      sym_if_keyword,
      sym_else_keyword,
      sym_number_literal,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_and,
      anon_sym_or,
      anon_sym_not,
      sym_identifier,
    ACTIONS(91), 14,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_typed_number_literal,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_comment,
  [231] = 6,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(9), 1,
      anon_sym_def,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 1,
      sym_comment,
    ACTIONS(11), 2,
      anon_sym_defp,
      anon_sym_defx,
    STATE(15), 4,
      sym__definition,
      sym_import_statement,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [254] = 6,
    ACTIONS(99), 1,
      anon_sym_def,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_function_signature,
    STATE(33), 1,
      sym_function_body,
    ACTIONS(97), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_defp,
      anon_sym_defx,
      sym_comment,
  [277] = 6,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(107), 1,
      anon_sym_import,
    ACTIONS(110), 1,
      anon_sym_def,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(113), 2,
      anon_sym_defp,
      anon_sym_defx,
    STATE(15), 4,
      sym__definition,
      sym_import_statement,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [300] = 4,
    ACTIONS(121), 1,
      anon_sym_COLON_COLON,
    ACTIONS(123), 1,
      anon_sym_def,
    STATE(17), 1,
      aux_sym_import_path_repeat1,
    ACTIONS(119), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_defp,
      anon_sym_defx,
      sym_comment,
  [317] = 4,
    ACTIONS(121), 1,
      anon_sym_COLON_COLON,
    ACTIONS(127), 1,
      anon_sym_def,
    STATE(19), 1,
      aux_sym_import_path_repeat1,
    ACTIONS(125), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_defp,
      anon_sym_defx,
      sym_comment,
  [334] = 4,
    ACTIONS(103), 1,
      anon_sym_LBRACE,
    ACTIONS(131), 1,
      anon_sym_def,
    STATE(30), 1,
      sym_function_body,
    ACTIONS(129), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_defp,
      anon_sym_defx,
      sym_comment,
  [351] = 4,
    ACTIONS(135), 1,
      anon_sym_COLON_COLON,
    ACTIONS(138), 1,
      anon_sym_def,
    STATE(19), 1,
      aux_sym_import_path_repeat1,
    ACTIONS(133), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_defp,
      anon_sym_defx,
      sym_comment,
  [368] = 2,
    ACTIONS(142), 1,
      anon_sym_def,
    ACTIONS(140), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_defp,
      anon_sym_defx,
      anon_sym_LBRACE,
      sym_comment,
  [380] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 2,
      sym_generic_type,
      sym_identifier,
    ACTIONS(146), 2,
      anon_sym_DASH_GT,
      anon_sym_RPAREN,
    STATE(24), 2,
      sym_type,
      aux_sym_type_list_repeat1,
  [396] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_RPAREN,
    STATE(41), 1,
      sym_type_list,
    ACTIONS(144), 2,
      sym_generic_type,
      sym_identifier,
    STATE(21), 2,
      sym_type,
      aux_sym_type_list_repeat1,
  [414] = 2,
    ACTIONS(138), 1,
      anon_sym_def,
    ACTIONS(133), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_COLON_COLON,
      anon_sym_defp,
      anon_sym_defx,
      sym_comment,
  [426] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 2,
      sym_generic_type,
      sym_identifier,
    ACTIONS(153), 2,
      anon_sym_DASH_GT,
      anon_sym_RPAREN,
    STATE(24), 2,
      sym_type,
      aux_sym_type_list_repeat1,
  [442] = 2,
    ACTIONS(157), 1,
      anon_sym_def,
    ACTIONS(155), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_defp,
      anon_sym_defx,
      anon_sym_LBRACE,
      sym_comment,
  [454] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_DASH_GT,
    STATE(42), 1,
      sym_type_list,
    ACTIONS(144), 2,
      sym_generic_type,
      sym_identifier,
    STATE(21), 2,
      sym_type,
      aux_sym_type_list_repeat1,
  [472] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      sym_type_list,
    ACTIONS(144), 2,
      sym_generic_type,
      sym_identifier,
    STATE(21), 2,
      sym_type,
      aux_sym_type_list_repeat1,
  [490] = 2,
    ACTIONS(165), 1,
      anon_sym_def,
    ACTIONS(163), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_defp,
      anon_sym_defx,
      anon_sym_LBRACE,
      sym_comment,
  [502] = 2,
    ACTIONS(169), 1,
      anon_sym_def,
    ACTIONS(167), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_defp,
      anon_sym_defx,
      sym_comment,
  [513] = 2,
    ACTIONS(173), 1,
      anon_sym_def,
    ACTIONS(171), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_defp,
      anon_sym_defx,
      sym_comment,
  [524] = 5,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    ACTIONS(179), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_string_content_repeat1,
    STATE(44), 1,
      sym_string_content,
    ACTIONS(177), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [541] = 2,
    ACTIONS(183), 1,
      anon_sym_def,
    ACTIONS(181), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_defp,
      anon_sym_defx,
      sym_comment,
  [552] = 2,
    ACTIONS(131), 1,
      anon_sym_def,
    ACTIONS(129), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_defp,
      anon_sym_defx,
      sym_comment,
  [563] = 2,
    ACTIONS(187), 1,
      anon_sym_def,
    ACTIONS(185), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_defp,
      anon_sym_defx,
      sym_comment,
  [574] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 2,
      sym_generic_type,
      sym_identifier,
    ACTIONS(191), 2,
      anon_sym_DASH_GT,
      anon_sym_RPAREN,
  [586] = 4,
    ACTIONS(179), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    STATE(37), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(195), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [600] = 4,
    ACTIONS(179), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    STATE(37), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(199), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [614] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      sym_identifier,
    STATE(34), 1,
      sym_import_path,
  [624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 2,
      anon_sym_STAR,
      sym_identifier,
  [632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
  [639] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
  [646] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_DASH_GT,
  [653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_RBRACE,
  [660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
  [667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_RPAREN,
  [674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      ts_builtin_sym_end,
  [681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 33,
  [SMALL_STATE(8)] = 66,
  [SMALL_STATE(9)] = 99,
  [SMALL_STATE(10)] = 132,
  [SMALL_STATE(11)] = 165,
  [SMALL_STATE(12)] = 198,
  [SMALL_STATE(13)] = 231,
  [SMALL_STATE(14)] = 254,
  [SMALL_STATE(15)] = 277,
  [SMALL_STATE(16)] = 300,
  [SMALL_STATE(17)] = 317,
  [SMALL_STATE(18)] = 334,
  [SMALL_STATE(19)] = 351,
  [SMALL_STATE(20)] = 368,
  [SMALL_STATE(21)] = 380,
  [SMALL_STATE(22)] = 396,
  [SMALL_STATE(23)] = 414,
  [SMALL_STATE(24)] = 426,
  [SMALL_STATE(25)] = 442,
  [SMALL_STATE(26)] = 454,
  [SMALL_STATE(27)] = 472,
  [SMALL_STATE(28)] = 490,
  [SMALL_STATE(29)] = 502,
  [SMALL_STATE(30)] = 513,
  [SMALL_STATE(31)] = 524,
  [SMALL_STATE(32)] = 541,
  [SMALL_STATE(33)] = 552,
  [SMALL_STATE(34)] = 563,
  [SMALL_STATE(35)] = 574,
  [SMALL_STATE(36)] = 586,
  [SMALL_STATE(37)] = 600,
  [SMALL_STATE(38)] = 614,
  [SMALL_STATE(39)] = 624,
  [SMALL_STATE(40)] = 632,
  [SMALL_STATE(41)] = 639,
  [SMALL_STATE(42)] = 646,
  [SMALL_STATE(43)] = 653,
  [SMALL_STATE(44)] = 660,
  [SMALL_STATE(45)] = 667,
  [SMALL_STATE(46)] = 674,
  [SMALL_STATE(47)] = 681,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_sequence, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_sequence_repeat1, 2), SHIFT_REPEAT(9),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_sequence_repeat1, 2), SHIFT_REPEAT(12),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_sequence_repeat1, 2), SHIFT_REPEAT(3),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_sequence_repeat1, 2),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_sequence_repeat1, 2), SHIFT_REPEAT(31),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_sequence_repeat1, 2), SHIFT_REPEAT(9),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_sequence_repeat1, 2), SHIFT_REPEAT(8),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_sequence_repeat1, 2), SHIFT_REPEAT(12),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_sequence_repeat1, 2), SHIFT_REPEAT(5),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_path, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_path, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_path, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_path, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_path_repeat1, 2),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_path_repeat1, 2), SHIFT_REPEAT(39),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_import_path_repeat1, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature, 4),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_signature, 4),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_list, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_list_repeat1, 2), SHIFT_REPEAT(35),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature, 5),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_signature, 5),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_signature, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 2),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 3),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 2),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_content, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(37),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [216] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_clemento(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
