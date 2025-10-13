#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 44
#define LARGE_STATE_COUNT 14
#define SYMBOL_COUNT 55
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  sym_identifier = 1,
  anon_sym_def = 2,
  anon_sym_LPAREN = 3,
  anon_sym_DASH_GT = 4,
  anon_sym_RPAREN = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  anon_sym_if = 8,
  anon_sym_else = 9,
  anon_sym_DQUOTE = 10,
  aux_sym_string_content_token1 = 11,
  sym_escape_sequence = 12,
  sym_number_literal = 13,
  anon_sym_PLUS = 14,
  anon_sym_DASH = 15,
  anon_sym_STAR = 16,
  anon_sym_SLASH = 17,
  anon_sym_PERCENT = 18,
  anon_sym_EQ_EQ = 19,
  anon_sym_BANG_EQ = 20,
  anon_sym_LT = 21,
  anon_sym_LT_EQ = 22,
  anon_sym_GT = 23,
  anon_sym_GT_EQ = 24,
  anon_sym_AMP_AMP = 25,
  anon_sym_PIPE_PIPE = 26,
  anon_sym_BANG = 27,
  anon_sym_and = 28,
  anon_sym_or = 29,
  anon_sym_not = 30,
  anon_sym_dup = 31,
  anon_sym_drop = 32,
  anon_sym_swap = 33,
  anon_sym_over = 34,
  anon_sym_rot = 35,
  sym_comment = 36,
  sym_source_file = 37,
  sym__definition = 38,
  sym_function_definition = 39,
  sym_function_signature = 40,
  sym_type_list = 41,
  sym_type = 42,
  sym_function_body = 43,
  sym_expression_sequence = 44,
  sym__expression = 45,
  sym_atom = 46,
  sym_if_expression = 47,
  sym_string_literal = 48,
  sym_string_content = 49,
  sym_operator = 50,
  aux_sym_source_file_repeat1 = 51,
  aux_sym_type_list_repeat1 = 52,
  aux_sym_expression_sequence_repeat1 = 53,
  aux_sym_string_content_repeat1 = 54,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_def] = "def",
  [anon_sym_LPAREN] = "(",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_content_token1] = "string_content_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_number_literal] = "number_literal",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_EQ_EQ] = "==",
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
  [anon_sym_dup] = "dup",
  [anon_sym_drop] = "drop",
  [anon_sym_swap] = "swap",
  [anon_sym_over] = "over",
  [anon_sym_rot] = "rot",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_function_definition] = "function_definition",
  [sym_function_signature] = "function_signature",
  [sym_type_list] = "type_list",
  [sym_type] = "type",
  [sym_function_body] = "function_body",
  [sym_expression_sequence] = "expression_sequence",
  [sym__expression] = "_expression",
  [sym_atom] = "atom",
  [sym_if_expression] = "if_expression",
  [sym_string_literal] = "string_literal",
  [sym_string_content] = "string_content",
  [sym_operator] = "operator",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_type_list_repeat1] = "type_list_repeat1",
  [aux_sym_expression_sequence_repeat1] = "expression_sequence_repeat1",
  [aux_sym_string_content_repeat1] = "string_content_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_def] = anon_sym_def,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_content_token1] = aux_sym_string_content_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_number_literal] = sym_number_literal,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
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
  [anon_sym_dup] = anon_sym_dup,
  [anon_sym_drop] = anon_sym_drop,
  [anon_sym_swap] = anon_sym_swap,
  [anon_sym_over] = anon_sym_over,
  [anon_sym_rot] = anon_sym_rot,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_function_definition] = sym_function_definition,
  [sym_function_signature] = sym_function_signature,
  [sym_type_list] = sym_type_list,
  [sym_type] = sym_type,
  [sym_function_body] = sym_function_body,
  [sym_expression_sequence] = sym_expression_sequence,
  [sym__expression] = sym__expression,
  [sym_atom] = sym_atom,
  [sym_if_expression] = sym_if_expression,
  [sym_string_literal] = sym_string_literal,
  [sym_string_content] = sym_string_content,
  [sym_operator] = sym_operator,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  [anon_sym_def] = {
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
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
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
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
  [anon_sym_EQ_EQ] = {
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
  [anon_sym_dup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_drop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_swap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_over] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rot] = {
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
  [sym_if_expression] = {
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
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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
  [3] = 2,
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
  [27] = 6,
  [28] = 28,
  [29] = 29,
  [30] = 8,
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
  [43] = 37,
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
      if (eof) ADVANCE(21);
      if (lookahead == '!') ADVANCE(57);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '%') ADVANCE(48);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '(') ADVANCE(22);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == '*') ADVANCE(46);
      if (lookahead == '+') ADVANCE(44);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == '0') ADVANCE(37);
      if (lookahead == '<') ADVANCE(51);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '>') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '{') ADVANCE(25);
      if (lookahead == '|') ADVANCE(10);
      if (lookahead == '}') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 2:
      if (lookahead == '&') ADVANCE(55);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(60);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(49);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(23);
      END_STATE();
    case 9:
      if (lookahead == 'u') ADVANCE(20);
      if (lookahead == 'x') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(36);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 10:
      if (lookahead == '|') ADVANCE(56);
      END_STATE();
    case 11:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 12:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(40);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(41);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(60);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(33);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(6);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(6);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(34);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(35);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(12);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(11);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(13);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '0') ADVANCE(37);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(60);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(50);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
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
      if (lookahead == 'i') ADVANCE(4);
      if (lookahead == 'n') ADVANCE(5);
      if (lookahead == 'o') ADVANCE(6);
      if (lookahead == 'r') ADVANCE(7);
      if (lookahead == 's') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == 'e') ADVANCE(10);
      if (lookahead == 'r') ADVANCE(11);
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == 'f') ADVANCE(14);
      END_STATE();
    case 5:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 6:
      if (lookahead == 'r') ADVANCE(16);
      if (lookahead == 'v') ADVANCE(17);
      END_STATE();
    case 7:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == 'w') ADVANCE(19);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 10:
      if (lookahead == 'f') ADVANCE(21);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 12:
      if (lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 13:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 15:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 22:
      if (lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_dup);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_rot);
      END_STATE();
    case 28:
      if (lookahead == 'p') ADVANCE(32);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_drop);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_over);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_swap);
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
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
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
    [anon_sym_dup] = ACTIONS(1),
    [anon_sym_drop] = ACTIONS(1),
    [anon_sym_swap] = ACTIONS(1),
    [anon_sym_over] = ACTIONS(1),
    [anon_sym_rot] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(42),
    [sym__definition] = STATE(15),
    [sym_function_definition] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_def] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [2] = {
    [sym_expression_sequence] = STATE(43),
    [sym__expression] = STATE(4),
    [sym_atom] = STATE(4),
    [sym_if_expression] = STATE(4),
    [sym_string_literal] = STATE(13),
    [sym_operator] = STATE(13),
    [aux_sym_expression_sequence_repeat1] = STATE(4),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number_literal] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_EQ_EQ] = ACTIONS(21),
    [anon_sym_BANG_EQ] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(21),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_GT_EQ] = ACTIONS(21),
    [anon_sym_AMP_AMP] = ACTIONS(21),
    [anon_sym_PIPE_PIPE] = ACTIONS(21),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_and] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(23),
    [anon_sym_not] = ACTIONS(23),
    [anon_sym_dup] = ACTIONS(23),
    [anon_sym_drop] = ACTIONS(23),
    [anon_sym_swap] = ACTIONS(23),
    [anon_sym_over] = ACTIONS(23),
    [anon_sym_rot] = ACTIONS(23),
    [sym_comment] = ACTIONS(25),
  },
  [3] = {
    [sym_expression_sequence] = STATE(37),
    [sym__expression] = STATE(4),
    [sym_atom] = STATE(4),
    [sym_if_expression] = STATE(4),
    [sym_string_literal] = STATE(13),
    [sym_operator] = STATE(13),
    [aux_sym_expression_sequence_repeat1] = STATE(4),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number_literal] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_EQ_EQ] = ACTIONS(21),
    [anon_sym_BANG_EQ] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(21),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_GT_EQ] = ACTIONS(21),
    [anon_sym_AMP_AMP] = ACTIONS(21),
    [anon_sym_PIPE_PIPE] = ACTIONS(21),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_and] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(23),
    [anon_sym_not] = ACTIONS(23),
    [anon_sym_dup] = ACTIONS(23),
    [anon_sym_drop] = ACTIONS(23),
    [anon_sym_swap] = ACTIONS(23),
    [anon_sym_over] = ACTIONS(23),
    [anon_sym_rot] = ACTIONS(23),
    [sym_comment] = ACTIONS(25),
  },
  [4] = {
    [sym__expression] = STATE(5),
    [sym_atom] = STATE(5),
    [sym_if_expression] = STATE(5),
    [sym_string_literal] = STATE(13),
    [sym_operator] = STATE(13),
    [aux_sym_expression_sequence_repeat1] = STATE(5),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number_literal] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_EQ_EQ] = ACTIONS(21),
    [anon_sym_BANG_EQ] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(21),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_GT_EQ] = ACTIONS(21),
    [anon_sym_AMP_AMP] = ACTIONS(21),
    [anon_sym_PIPE_PIPE] = ACTIONS(21),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_and] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(23),
    [anon_sym_not] = ACTIONS(23),
    [anon_sym_dup] = ACTIONS(23),
    [anon_sym_drop] = ACTIONS(23),
    [anon_sym_swap] = ACTIONS(23),
    [anon_sym_over] = ACTIONS(23),
    [anon_sym_rot] = ACTIONS(23),
    [sym_comment] = ACTIONS(31),
  },
  [5] = {
    [sym__expression] = STATE(5),
    [sym_atom] = STATE(5),
    [sym_if_expression] = STATE(5),
    [sym_string_literal] = STATE(13),
    [sym_operator] = STATE(13),
    [aux_sym_expression_sequence_repeat1] = STATE(5),
    [sym_identifier] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(36),
    [anon_sym_if] = ACTIONS(38),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_number_literal] = ACTIONS(44),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(50),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(50),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(47),
    [anon_sym_BANG_EQ] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(50),
    [anon_sym_LT_EQ] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(50),
    [anon_sym_GT_EQ] = ACTIONS(47),
    [anon_sym_AMP_AMP] = ACTIONS(47),
    [anon_sym_PIPE_PIPE] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(50),
    [anon_sym_and] = ACTIONS(50),
    [anon_sym_or] = ACTIONS(50),
    [anon_sym_not] = ACTIONS(50),
    [anon_sym_dup] = ACTIONS(50),
    [anon_sym_drop] = ACTIONS(50),
    [anon_sym_swap] = ACTIONS(50),
    [anon_sym_over] = ACTIONS(50),
    [anon_sym_rot] = ACTIONS(50),
    [sym_comment] = ACTIONS(53),
  },
  [6] = {
    [sym_identifier] = ACTIONS(56),
    [anon_sym_RBRACE] = ACTIONS(58),
    [anon_sym_if] = ACTIONS(56),
    [anon_sym_else] = ACTIONS(56),
    [anon_sym_DQUOTE] = ACTIONS(58),
    [sym_number_literal] = ACTIONS(58),
    [anon_sym_PLUS] = ACTIONS(58),
    [anon_sym_DASH] = ACTIONS(56),
    [anon_sym_STAR] = ACTIONS(58),
    [anon_sym_SLASH] = ACTIONS(56),
    [anon_sym_PERCENT] = ACTIONS(58),
    [anon_sym_EQ_EQ] = ACTIONS(58),
    [anon_sym_BANG_EQ] = ACTIONS(58),
    [anon_sym_LT] = ACTIONS(56),
    [anon_sym_LT_EQ] = ACTIONS(58),
    [anon_sym_GT] = ACTIONS(56),
    [anon_sym_GT_EQ] = ACTIONS(58),
    [anon_sym_AMP_AMP] = ACTIONS(58),
    [anon_sym_PIPE_PIPE] = ACTIONS(58),
    [anon_sym_BANG] = ACTIONS(56),
    [anon_sym_and] = ACTIONS(56),
    [anon_sym_or] = ACTIONS(56),
    [anon_sym_not] = ACTIONS(56),
    [anon_sym_dup] = ACTIONS(56),
    [anon_sym_drop] = ACTIONS(56),
    [anon_sym_swap] = ACTIONS(56),
    [anon_sym_over] = ACTIONS(56),
    [anon_sym_rot] = ACTIONS(56),
    [sym_comment] = ACTIONS(58),
  },
  [7] = {
    [sym_identifier] = ACTIONS(60),
    [anon_sym_RBRACE] = ACTIONS(62),
    [anon_sym_if] = ACTIONS(60),
    [anon_sym_else] = ACTIONS(64),
    [anon_sym_DQUOTE] = ACTIONS(62),
    [sym_number_literal] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(60),
    [anon_sym_STAR] = ACTIONS(62),
    [anon_sym_SLASH] = ACTIONS(60),
    [anon_sym_PERCENT] = ACTIONS(62),
    [anon_sym_EQ_EQ] = ACTIONS(62),
    [anon_sym_BANG_EQ] = ACTIONS(62),
    [anon_sym_LT] = ACTIONS(60),
    [anon_sym_LT_EQ] = ACTIONS(62),
    [anon_sym_GT] = ACTIONS(60),
    [anon_sym_GT_EQ] = ACTIONS(62),
    [anon_sym_AMP_AMP] = ACTIONS(62),
    [anon_sym_PIPE_PIPE] = ACTIONS(62),
    [anon_sym_BANG] = ACTIONS(60),
    [anon_sym_and] = ACTIONS(60),
    [anon_sym_or] = ACTIONS(60),
    [anon_sym_not] = ACTIONS(60),
    [anon_sym_dup] = ACTIONS(60),
    [anon_sym_drop] = ACTIONS(60),
    [anon_sym_swap] = ACTIONS(60),
    [anon_sym_over] = ACTIONS(60),
    [anon_sym_rot] = ACTIONS(60),
    [sym_comment] = ACTIONS(62),
  },
  [8] = {
    [sym_identifier] = ACTIONS(66),
    [anon_sym_RBRACE] = ACTIONS(68),
    [anon_sym_if] = ACTIONS(66),
    [anon_sym_else] = ACTIONS(66),
    [anon_sym_DQUOTE] = ACTIONS(68),
    [sym_number_literal] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(68),
    [anon_sym_DASH] = ACTIONS(66),
    [anon_sym_STAR] = ACTIONS(68),
    [anon_sym_SLASH] = ACTIONS(66),
    [anon_sym_PERCENT] = ACTIONS(68),
    [anon_sym_EQ_EQ] = ACTIONS(68),
    [anon_sym_BANG_EQ] = ACTIONS(68),
    [anon_sym_LT] = ACTIONS(66),
    [anon_sym_LT_EQ] = ACTIONS(68),
    [anon_sym_GT] = ACTIONS(66),
    [anon_sym_GT_EQ] = ACTIONS(68),
    [anon_sym_AMP_AMP] = ACTIONS(68),
    [anon_sym_PIPE_PIPE] = ACTIONS(68),
    [anon_sym_BANG] = ACTIONS(66),
    [anon_sym_and] = ACTIONS(66),
    [anon_sym_or] = ACTIONS(66),
    [anon_sym_not] = ACTIONS(66),
    [anon_sym_dup] = ACTIONS(66),
    [anon_sym_drop] = ACTIONS(66),
    [anon_sym_swap] = ACTIONS(66),
    [anon_sym_over] = ACTIONS(66),
    [anon_sym_rot] = ACTIONS(66),
    [sym_comment] = ACTIONS(68),
  },
  [9] = {
    [sym_identifier] = ACTIONS(70),
    [anon_sym_RBRACE] = ACTIONS(72),
    [anon_sym_if] = ACTIONS(70),
    [anon_sym_DQUOTE] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(72),
    [anon_sym_PLUS] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(70),
    [anon_sym_STAR] = ACTIONS(72),
    [anon_sym_SLASH] = ACTIONS(70),
    [anon_sym_PERCENT] = ACTIONS(72),
    [anon_sym_EQ_EQ] = ACTIONS(72),
    [anon_sym_BANG_EQ] = ACTIONS(72),
    [anon_sym_LT] = ACTIONS(70),
    [anon_sym_LT_EQ] = ACTIONS(72),
    [anon_sym_GT] = ACTIONS(70),
    [anon_sym_GT_EQ] = ACTIONS(72),
    [anon_sym_AMP_AMP] = ACTIONS(72),
    [anon_sym_PIPE_PIPE] = ACTIONS(72),
    [anon_sym_BANG] = ACTIONS(70),
    [anon_sym_and] = ACTIONS(70),
    [anon_sym_or] = ACTIONS(70),
    [anon_sym_not] = ACTIONS(70),
    [anon_sym_dup] = ACTIONS(70),
    [anon_sym_drop] = ACTIONS(70),
    [anon_sym_swap] = ACTIONS(70),
    [anon_sym_over] = ACTIONS(70),
    [anon_sym_rot] = ACTIONS(70),
    [sym_comment] = ACTIONS(72),
  },
  [10] = {
    [sym_identifier] = ACTIONS(74),
    [anon_sym_RBRACE] = ACTIONS(76),
    [anon_sym_if] = ACTIONS(74),
    [anon_sym_DQUOTE] = ACTIONS(76),
    [sym_number_literal] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(74),
    [anon_sym_STAR] = ACTIONS(76),
    [anon_sym_SLASH] = ACTIONS(74),
    [anon_sym_PERCENT] = ACTIONS(76),
    [anon_sym_EQ_EQ] = ACTIONS(76),
    [anon_sym_BANG_EQ] = ACTIONS(76),
    [anon_sym_LT] = ACTIONS(74),
    [anon_sym_LT_EQ] = ACTIONS(76),
    [anon_sym_GT] = ACTIONS(74),
    [anon_sym_GT_EQ] = ACTIONS(76),
    [anon_sym_AMP_AMP] = ACTIONS(76),
    [anon_sym_PIPE_PIPE] = ACTIONS(76),
    [anon_sym_BANG] = ACTIONS(74),
    [anon_sym_and] = ACTIONS(74),
    [anon_sym_or] = ACTIONS(74),
    [anon_sym_not] = ACTIONS(74),
    [anon_sym_dup] = ACTIONS(74),
    [anon_sym_drop] = ACTIONS(74),
    [anon_sym_swap] = ACTIONS(74),
    [anon_sym_over] = ACTIONS(74),
    [anon_sym_rot] = ACTIONS(74),
    [sym_comment] = ACTIONS(76),
  },
  [11] = {
    [sym_identifier] = ACTIONS(78),
    [anon_sym_RBRACE] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(78),
    [anon_sym_DQUOTE] = ACTIONS(80),
    [sym_number_literal] = ACTIONS(80),
    [anon_sym_PLUS] = ACTIONS(80),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_STAR] = ACTIONS(80),
    [anon_sym_SLASH] = ACTIONS(78),
    [anon_sym_PERCENT] = ACTIONS(80),
    [anon_sym_EQ_EQ] = ACTIONS(80),
    [anon_sym_BANG_EQ] = ACTIONS(80),
    [anon_sym_LT] = ACTIONS(78),
    [anon_sym_LT_EQ] = ACTIONS(80),
    [anon_sym_GT] = ACTIONS(78),
    [anon_sym_GT_EQ] = ACTIONS(80),
    [anon_sym_AMP_AMP] = ACTIONS(80),
    [anon_sym_PIPE_PIPE] = ACTIONS(80),
    [anon_sym_BANG] = ACTIONS(78),
    [anon_sym_and] = ACTIONS(78),
    [anon_sym_or] = ACTIONS(78),
    [anon_sym_not] = ACTIONS(78),
    [anon_sym_dup] = ACTIONS(78),
    [anon_sym_drop] = ACTIONS(78),
    [anon_sym_swap] = ACTIONS(78),
    [anon_sym_over] = ACTIONS(78),
    [anon_sym_rot] = ACTIONS(78),
    [sym_comment] = ACTIONS(80),
  },
  [12] = {
    [sym_identifier] = ACTIONS(82),
    [anon_sym_RBRACE] = ACTIONS(84),
    [anon_sym_if] = ACTIONS(82),
    [anon_sym_DQUOTE] = ACTIONS(84),
    [sym_number_literal] = ACTIONS(84),
    [anon_sym_PLUS] = ACTIONS(84),
    [anon_sym_DASH] = ACTIONS(82),
    [anon_sym_STAR] = ACTIONS(84),
    [anon_sym_SLASH] = ACTIONS(82),
    [anon_sym_PERCENT] = ACTIONS(84),
    [anon_sym_EQ_EQ] = ACTIONS(84),
    [anon_sym_BANG_EQ] = ACTIONS(84),
    [anon_sym_LT] = ACTIONS(82),
    [anon_sym_LT_EQ] = ACTIONS(84),
    [anon_sym_GT] = ACTIONS(82),
    [anon_sym_GT_EQ] = ACTIONS(84),
    [anon_sym_AMP_AMP] = ACTIONS(84),
    [anon_sym_PIPE_PIPE] = ACTIONS(84),
    [anon_sym_BANG] = ACTIONS(82),
    [anon_sym_and] = ACTIONS(82),
    [anon_sym_or] = ACTIONS(82),
    [anon_sym_not] = ACTIONS(82),
    [anon_sym_dup] = ACTIONS(82),
    [anon_sym_drop] = ACTIONS(82),
    [anon_sym_swap] = ACTIONS(82),
    [anon_sym_over] = ACTIONS(82),
    [anon_sym_rot] = ACTIONS(82),
    [sym_comment] = ACTIONS(84),
  },
  [13] = {
    [sym_identifier] = ACTIONS(86),
    [anon_sym_RBRACE] = ACTIONS(88),
    [anon_sym_if] = ACTIONS(86),
    [anon_sym_DQUOTE] = ACTIONS(88),
    [sym_number_literal] = ACTIONS(88),
    [anon_sym_PLUS] = ACTIONS(88),
    [anon_sym_DASH] = ACTIONS(86),
    [anon_sym_STAR] = ACTIONS(88),
    [anon_sym_SLASH] = ACTIONS(86),
    [anon_sym_PERCENT] = ACTIONS(88),
    [anon_sym_EQ_EQ] = ACTIONS(88),
    [anon_sym_BANG_EQ] = ACTIONS(88),
    [anon_sym_LT] = ACTIONS(86),
    [anon_sym_LT_EQ] = ACTIONS(88),
    [anon_sym_GT] = ACTIONS(86),
    [anon_sym_GT_EQ] = ACTIONS(88),
    [anon_sym_AMP_AMP] = ACTIONS(88),
    [anon_sym_PIPE_PIPE] = ACTIONS(88),
    [anon_sym_BANG] = ACTIONS(86),
    [anon_sym_and] = ACTIONS(86),
    [anon_sym_or] = ACTIONS(86),
    [anon_sym_not] = ACTIONS(86),
    [anon_sym_dup] = ACTIONS(86),
    [anon_sym_drop] = ACTIONS(86),
    [anon_sym_swap] = ACTIONS(86),
    [anon_sym_over] = ACTIONS(86),
    [anon_sym_rot] = ACTIONS(86),
    [sym_comment] = ACTIONS(88),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(92), 1,
      anon_sym_def,
    ACTIONS(95), 1,
      sym_comment,
    STATE(14), 3,
      sym__definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [15] = 4,
    ACTIONS(7), 1,
      anon_sym_def,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    ACTIONS(100), 1,
      sym_comment,
    STATE(14), 3,
      sym__definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [30] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(104), 2,
      anon_sym_DASH_GT,
      anon_sym_RPAREN,
    STATE(21), 2,
      sym_type,
      aux_sym_type_list_repeat1,
  [45] = 5,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_string_content_repeat1,
    STATE(35), 1,
      sym_string_content,
    ACTIONS(108), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [62] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(112), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      sym_type_list,
    STATE(16), 2,
      sym_type,
      aux_sym_type_list_repeat1,
  [79] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(114), 1,
      anon_sym_DASH_GT,
    STATE(41), 1,
      sym_type_list,
    STATE(16), 2,
      sym_type,
      aux_sym_type_list_repeat1,
  [96] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(116), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      sym_type_list,
    STATE(16), 2,
      sym_type,
      aux_sym_type_list_repeat1,
  [113] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(121), 2,
      anon_sym_DASH_GT,
      anon_sym_RPAREN,
    STATE(21), 2,
      sym_type,
      aux_sym_type_list_repeat1,
  [128] = 4,
    ACTIONS(110), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    STATE(22), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(125), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [142] = 4,
    ACTIONS(110), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_DQUOTE,
    STATE(22), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(130), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [156] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(134), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym_function_body,
    STATE(32), 1,
      sym_function_signature,
  [172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 3,
      anon_sym_DASH_GT,
      anon_sym_RPAREN,
      sym_identifier,
  [181] = 1,
    ACTIONS(138), 3,
      ts_builtin_sym_end,
      anon_sym_def,
      sym_comment,
  [187] = 1,
    ACTIONS(58), 3,
      ts_builtin_sym_end,
      anon_sym_def,
      sym_comment,
  [193] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_LBRACE,
    STATE(11), 1,
      sym_function_body,
  [203] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_LBRACE,
    STATE(7), 1,
      sym_function_body,
  [213] = 1,
    ACTIONS(68), 3,
      ts_builtin_sym_end,
      anon_sym_def,
      sym_comment,
  [219] = 1,
    ACTIONS(142), 3,
      ts_builtin_sym_end,
      anon_sym_def,
      sym_comment,
  [225] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_function_body,
  [235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_LBRACE,
  [242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_RPAREN,
  [249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
  [256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      sym_identifier,
  [263] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
  [270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_LBRACE,
  [277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
  [284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LBRACE,
  [291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_DASH_GT,
  [298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
  [305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(14)] = 0,
  [SMALL_STATE(15)] = 15,
  [SMALL_STATE(16)] = 30,
  [SMALL_STATE(17)] = 45,
  [SMALL_STATE(18)] = 62,
  [SMALL_STATE(19)] = 79,
  [SMALL_STATE(20)] = 96,
  [SMALL_STATE(21)] = 113,
  [SMALL_STATE(22)] = 128,
  [SMALL_STATE(23)] = 142,
  [SMALL_STATE(24)] = 156,
  [SMALL_STATE(25)] = 172,
  [SMALL_STATE(26)] = 181,
  [SMALL_STATE(27)] = 187,
  [SMALL_STATE(28)] = 193,
  [SMALL_STATE(29)] = 203,
  [SMALL_STATE(30)] = 213,
  [SMALL_STATE(31)] = 219,
  [SMALL_STATE(32)] = 225,
  [SMALL_STATE(33)] = 235,
  [SMALL_STATE(34)] = 242,
  [SMALL_STATE(35)] = 249,
  [SMALL_STATE(36)] = 256,
  [SMALL_STATE(37)] = 263,
  [SMALL_STATE(38)] = 270,
  [SMALL_STATE(39)] = 277,
  [SMALL_STATE(40)] = 284,
  [SMALL_STATE(41)] = 291,
  [SMALL_STATE(42)] = 298,
  [SMALL_STATE(43)] = 305,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_sequence, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_sequence_repeat1, 2), SHIFT_REPEAT(13),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_sequence_repeat1, 2),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_sequence_repeat1, 2), SHIFT_REPEAT(29),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_sequence_repeat1, 2), SHIFT_REPEAT(17),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_sequence_repeat1, 2), SHIFT_REPEAT(13),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_sequence_repeat1, 2), SHIFT_REPEAT(12),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_sequence_repeat1, 2), SHIFT_REPEAT(12),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_sequence_repeat1, 2), SHIFT_REPEAT(5),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body, 3),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 3),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 2),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 4),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 4),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_list, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2), SHIFT_REPEAT(25),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(22),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_content, 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature, 4),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature, 5),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [160] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
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
