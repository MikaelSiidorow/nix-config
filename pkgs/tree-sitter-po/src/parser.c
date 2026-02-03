#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 83
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym__newline = 1,
  anon_sym_POUND = 2,
  anon_sym_SPACE = 3,
  aux_sym_translator_comment_token1 = 4,
  anon_sym_POUND_DOT = 5,
  aux_sym_extracted_comment_token1 = 6,
  anon_sym_POUND_COLON = 7,
  anon_sym_POUND_COMMA = 8,
  anon_sym_POUND_PIPE = 9,
  anon_sym_POUND_TILDE = 10,
  anon_sym_msgctxt = 11,
  anon_sym_msgid = 12,
  anon_sym_msgid_plural = 13,
  anon_sym_msgstr = 14,
  anon_sym_msgstr_LBRACK = 15,
  aux_sym_msgstr_plural_token1 = 16,
  anon_sym_RBRACK = 17,
  anon_sym_DQUOTE = 18,
  aux_sym_string_token1 = 19,
  aux_sym_string_token2 = 20,
  aux_sym_string_token3 = 21,
  aux_sym_string_token4 = 22,
  sym_source_file = 23,
  sym_message = 24,
  sym_comment = 25,
  sym_translator_comment = 26,
  sym_extracted_comment = 27,
  sym_reference_comment = 28,
  sym_flag_comment = 29,
  sym_previous_comment = 30,
  sym_obsolete_comment = 31,
  sym_msgctxt = 32,
  sym_msgid = 33,
  sym_msgid_plural = 34,
  sym_msgstr = 35,
  sym_msgstr_plural = 36,
  sym__string_line = 37,
  sym__continuation_line = 38,
  sym_string = 39,
  aux_sym_source_file_repeat1 = 40,
  aux_sym_message_repeat1 = 41,
  aux_sym_message_repeat2 = 42,
  aux_sym_msgctxt_repeat1 = 43,
  aux_sym_string_repeat1 = 44,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__newline] = "_newline",
  [anon_sym_POUND] = "#",
  [anon_sym_SPACE] = " ",
  [aux_sym_translator_comment_token1] = "translator_comment_token1",
  [anon_sym_POUND_DOT] = "#.",
  [aux_sym_extracted_comment_token1] = "extracted_comment_token1",
  [anon_sym_POUND_COLON] = "#:",
  [anon_sym_POUND_COMMA] = "#,",
  [anon_sym_POUND_PIPE] = "#|",
  [anon_sym_POUND_TILDE] = "#~",
  [anon_sym_msgctxt] = "msgctxt",
  [anon_sym_msgid] = "msgid",
  [anon_sym_msgid_plural] = "msgid_plural",
  [anon_sym_msgstr] = "msgstr",
  [anon_sym_msgstr_LBRACK] = "msgstr[",
  [aux_sym_msgstr_plural_token1] = "msgstr_plural_token1",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [aux_sym_string_token3] = "string_token3",
  [aux_sym_string_token4] = "string_token4",
  [sym_source_file] = "source_file",
  [sym_message] = "message",
  [sym_comment] = "comment",
  [sym_translator_comment] = "translator_comment",
  [sym_extracted_comment] = "extracted_comment",
  [sym_reference_comment] = "reference_comment",
  [sym_flag_comment] = "flag_comment",
  [sym_previous_comment] = "previous_comment",
  [sym_obsolete_comment] = "obsolete_comment",
  [sym_msgctxt] = "msgctxt",
  [sym_msgid] = "msgid",
  [sym_msgid_plural] = "msgid_plural",
  [sym_msgstr] = "msgstr",
  [sym_msgstr_plural] = "msgstr_plural",
  [sym__string_line] = "_string_line",
  [sym__continuation_line] = "_continuation_line",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_message_repeat1] = "message_repeat1",
  [aux_sym_message_repeat2] = "message_repeat2",
  [aux_sym_msgctxt_repeat1] = "msgctxt_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__newline] = sym__newline,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [aux_sym_translator_comment_token1] = aux_sym_translator_comment_token1,
  [anon_sym_POUND_DOT] = anon_sym_POUND_DOT,
  [aux_sym_extracted_comment_token1] = aux_sym_extracted_comment_token1,
  [anon_sym_POUND_COLON] = anon_sym_POUND_COLON,
  [anon_sym_POUND_COMMA] = anon_sym_POUND_COMMA,
  [anon_sym_POUND_PIPE] = anon_sym_POUND_PIPE,
  [anon_sym_POUND_TILDE] = anon_sym_POUND_TILDE,
  [anon_sym_msgctxt] = anon_sym_msgctxt,
  [anon_sym_msgid] = anon_sym_msgid,
  [anon_sym_msgid_plural] = anon_sym_msgid_plural,
  [anon_sym_msgstr] = anon_sym_msgstr,
  [anon_sym_msgstr_LBRACK] = anon_sym_msgstr_LBRACK,
  [aux_sym_msgstr_plural_token1] = aux_sym_msgstr_plural_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [aux_sym_string_token3] = aux_sym_string_token3,
  [aux_sym_string_token4] = aux_sym_string_token4,
  [sym_source_file] = sym_source_file,
  [sym_message] = sym_message,
  [sym_comment] = sym_comment,
  [sym_translator_comment] = sym_translator_comment,
  [sym_extracted_comment] = sym_extracted_comment,
  [sym_reference_comment] = sym_reference_comment,
  [sym_flag_comment] = sym_flag_comment,
  [sym_previous_comment] = sym_previous_comment,
  [sym_obsolete_comment] = sym_obsolete_comment,
  [sym_msgctxt] = sym_msgctxt,
  [sym_msgid] = sym_msgid,
  [sym_msgid_plural] = sym_msgid_plural,
  [sym_msgstr] = sym_msgstr,
  [sym_msgstr_plural] = sym_msgstr_plural,
  [sym__string_line] = sym__string_line,
  [sym__continuation_line] = sym__continuation_line,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_message_repeat1] = aux_sym_message_repeat1,
  [aux_sym_message_repeat2] = aux_sym_message_repeat2,
  [aux_sym_msgctxt_repeat1] = aux_sym_msgctxt_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SPACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_translator_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_extracted_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_msgctxt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_msgid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_msgid_plural] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_msgstr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_msgstr_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_msgstr_plural_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token4] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_message] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_translator_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_extracted_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_reference_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_flag_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_previous_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_obsolete_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_msgctxt] = {
    .visible = true,
    .named = true,
  },
  [sym_msgid] = {
    .visible = true,
    .named = true,
  },
  [sym_msgid_plural] = {
    .visible = true,
    .named = true,
  },
  [sym_msgstr] = {
    .visible = true,
    .named = true,
  },
  [sym_msgstr_plural] = {
    .visible = true,
    .named = true,
  },
  [sym__string_line] = {
    .visible = false,
    .named = true,
  },
  [sym__continuation_line] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_message_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_message_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_msgctxt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
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
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
};

static TSCharacterRange aux_sym_string_token1_character_set_1[] = {
  {'"', '"'}, {'\'', '\''}, {'\\', '\\'}, {'a', 'b'}, {'f', 'f'}, {'n', 'n'}, {'r', 'r'}, {'t', 't'},
  {'v', 'v'},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(37);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == ']') ADVANCE(57);
      if (lookahead == 'm') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(1);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') ADVANCE(40);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(38);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == 'm') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == '[') ADVANCE(55);
      END_STATE();
    case 6:
      if (lookahead == '_') ADVANCE(19);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(10);
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(11);
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(6);
      END_STATE();
    case 13:
      if (lookahead == 'g') ADVANCE(8);
      END_STATE();
    case 14:
      if (lookahead == 'g') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == 'g') ADVANCE(9);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(12);
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 19:
      if (lookahead == 'p') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(5);
      END_STATE();
    case 23:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 24:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 30:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 31:
      if (lookahead == 'x') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(62);
      if (set_contains(aux_sym_string_token1_character_set_1, 9, lookahead)) ADVANCE(59);
      END_STATE();
    case 32:
      if (lookahead == 'x') ADVANCE(28);
      END_STATE();
    case 33:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ',' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(42);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      END_STATE();
    case 36:
      if (eof) ADVANCE(37);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == 'm') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == '|') ADVANCE(48);
      if (lookahead == '~') ADVANCE(49);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == ' ') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_translator_comment_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_translator_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_POUND_DOT);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_extracted_comment_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_extracted_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_POUND_COLON);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_POUND_COMMA);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_POUND_TILDE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_msgctxt);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_msgid);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_msgid);
      if (lookahead == '_') ADVANCE(19);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_msgid_plural);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_msgstr);
      if (lookahead == '[') ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_msgstr_LBRACK);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_msgstr_plural_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(60);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(61);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_string_token3);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(65);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 36},
  [2] = {.lex_state = 36},
  [3] = {.lex_state = 36},
  [4] = {.lex_state = 36},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 36},
  [7] = {.lex_state = 36},
  [8] = {.lex_state = 36},
  [9] = {.lex_state = 36},
  [10] = {.lex_state = 36},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 36},
  [14] = {.lex_state = 36},
  [15] = {.lex_state = 36},
  [16] = {.lex_state = 36},
  [17] = {.lex_state = 36},
  [18] = {.lex_state = 36},
  [19] = {.lex_state = 36},
  [20] = {.lex_state = 36},
  [21] = {.lex_state = 36},
  [22] = {.lex_state = 36},
  [23] = {.lex_state = 36},
  [24] = {.lex_state = 36},
  [25] = {.lex_state = 36},
  [26] = {.lex_state = 36},
  [27] = {.lex_state = 36},
  [28] = {.lex_state = 36},
  [29] = {.lex_state = 36},
  [30] = {.lex_state = 36},
  [31] = {.lex_state = 36},
  [32] = {.lex_state = 36},
  [33] = {.lex_state = 36},
  [34] = {.lex_state = 36},
  [35] = {.lex_state = 36},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 36},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 36},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 36},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 36},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 44},
  [65] = {.lex_state = 44},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 44},
  [69] = {.lex_state = 44},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 44},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 33},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_POUND_DOT] = ACTIONS(1),
    [anon_sym_POUND_COLON] = ACTIONS(1),
    [anon_sym_POUND_COMMA] = ACTIONS(1),
    [anon_sym_POUND_PIPE] = ACTIONS(1),
    [anon_sym_POUND_TILDE] = ACTIONS(1),
    [anon_sym_msgctxt] = ACTIONS(1),
    [anon_sym_msgid] = ACTIONS(1),
    [anon_sym_msgid_plural] = ACTIONS(1),
    [anon_sym_msgstr] = ACTIONS(1),
    [anon_sym_msgstr_LBRACK] = ACTIONS(1),
    [aux_sym_msgstr_plural_token1] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
    [aux_sym_string_token3] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(80),
    [sym_message] = STATE(2),
    [sym_comment] = STATE(21),
    [sym_translator_comment] = STATE(20),
    [sym_extracted_comment] = STATE(20),
    [sym_reference_comment] = STATE(20),
    [sym_flag_comment] = STATE(20),
    [sym_previous_comment] = STATE(20),
    [sym_obsolete_comment] = STATE(20),
    [sym_msgctxt] = STATE(58),
    [sym_msgid] = STATE(36),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_message_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__newline] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_POUND_DOT] = ACTIONS(9),
    [anon_sym_POUND_COLON] = ACTIONS(11),
    [anon_sym_POUND_COMMA] = ACTIONS(13),
    [anon_sym_POUND_PIPE] = ACTIONS(15),
    [anon_sym_POUND_TILDE] = ACTIONS(17),
    [anon_sym_msgctxt] = ACTIONS(19),
    [anon_sym_msgid] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      anon_sym_POUND_DOT,
    ACTIONS(11), 1,
      anon_sym_POUND_COLON,
    ACTIONS(13), 1,
      anon_sym_POUND_COMMA,
    ACTIONS(15), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(17), 1,
      anon_sym_POUND_TILDE,
    ACTIONS(19), 1,
      anon_sym_msgctxt,
    ACTIONS(21), 1,
      anon_sym_msgid,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      sym__newline,
    STATE(4), 1,
      aux_sym_message_repeat1,
    STATE(21), 1,
      sym_comment,
    STATE(36), 1,
      sym_msgid,
    STATE(58), 1,
      sym_msgctxt,
    STATE(3), 2,
      sym_message,
      aux_sym_source_file_repeat1,
    STATE(20), 6,
      sym_translator_comment,
      sym_extracted_comment,
      sym_reference_comment,
      sym_flag_comment,
      sym_previous_comment,
      sym_obsolete_comment,
  [55] = 16,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      sym__newline,
    ACTIONS(32), 1,
      anon_sym_POUND,
    ACTIONS(35), 1,
      anon_sym_POUND_DOT,
    ACTIONS(38), 1,
      anon_sym_POUND_COLON,
    ACTIONS(41), 1,
      anon_sym_POUND_COMMA,
    ACTIONS(44), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(47), 1,
      anon_sym_POUND_TILDE,
    ACTIONS(50), 1,
      anon_sym_msgctxt,
    ACTIONS(53), 1,
      anon_sym_msgid,
    STATE(4), 1,
      aux_sym_message_repeat1,
    STATE(21), 1,
      sym_comment,
    STATE(36), 1,
      sym_msgid,
    STATE(58), 1,
      sym_msgctxt,
    STATE(3), 2,
      sym_message,
      aux_sym_source_file_repeat1,
    STATE(20), 6,
      sym_translator_comment,
      sym_extracted_comment,
      sym_reference_comment,
      sym_flag_comment,
      sym_previous_comment,
      sym_obsolete_comment,
  [110] = 12,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      anon_sym_POUND_DOT,
    ACTIONS(11), 1,
      anon_sym_POUND_COLON,
    ACTIONS(13), 1,
      anon_sym_POUND_COMMA,
    ACTIONS(15), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(17), 1,
      anon_sym_POUND_TILDE,
    ACTIONS(19), 1,
      anon_sym_msgctxt,
    ACTIONS(21), 1,
      anon_sym_msgid,
    STATE(38), 1,
      sym_msgid,
    STATE(61), 1,
      sym_msgctxt,
    STATE(6), 2,
      sym_comment,
      aux_sym_message_repeat1,
    STATE(20), 6,
      sym_translator_comment,
      sym_extracted_comment,
      sym_reference_comment,
      sym_flag_comment,
      sym_previous_comment,
      sym_obsolete_comment,
  [153] = 5,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_string,
    STATE(5), 2,
      sym__continuation_line,
      aux_sym_msgctxt_repeat1,
    ACTIONS(58), 3,
      anon_sym_POUND,
      anon_sym_msgid,
      anon_sym_msgstr,
    ACTIONS(56), 10,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND_DOT,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_TILDE,
      anon_sym_msgctxt,
      anon_sym_msgid_plural,
      anon_sym_msgstr_LBRACK,
  [181] = 9,
    ACTIONS(63), 1,
      anon_sym_POUND,
    ACTIONS(66), 1,
      anon_sym_POUND_DOT,
    ACTIONS(69), 1,
      anon_sym_POUND_COLON,
    ACTIONS(72), 1,
      anon_sym_POUND_COMMA,
    ACTIONS(75), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(78), 1,
      anon_sym_POUND_TILDE,
    ACTIONS(81), 2,
      anon_sym_msgctxt,
      anon_sym_msgid,
    STATE(6), 2,
      sym_comment,
      aux_sym_message_repeat1,
    STATE(20), 6,
      sym_translator_comment,
      sym_extracted_comment,
      sym_reference_comment,
      sym_flag_comment,
      sym_previous_comment,
      sym_obsolete_comment,
  [216] = 5,
    ACTIONS(85), 1,
      anon_sym_POUND,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_string,
    STATE(8), 2,
      sym__continuation_line,
      aux_sym_msgctxt_repeat1,
    ACTIONS(83), 10,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND_DOT,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_TILDE,
      anon_sym_msgctxt,
      anon_sym_msgid,
      anon_sym_msgstr_LBRACK,
  [242] = 5,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_POUND,
    STATE(77), 1,
      sym_string,
    STATE(5), 2,
      sym__continuation_line,
      aux_sym_msgctxt_repeat1,
    ACTIONS(89), 10,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND_DOT,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_TILDE,
      anon_sym_msgctxt,
      anon_sym_msgid,
      anon_sym_msgstr_LBRACK,
  [268] = 5,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_POUND,
    STATE(77), 1,
      sym_string,
    STATE(5), 2,
      sym__continuation_line,
      aux_sym_msgctxt_repeat1,
    ACTIONS(93), 9,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND_DOT,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_TILDE,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [293] = 5,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      anon_sym_POUND,
    STATE(77), 1,
      sym_string,
    STATE(9), 2,
      sym__continuation_line,
      aux_sym_msgctxt_repeat1,
    ACTIONS(97), 9,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND_DOT,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_TILDE,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [318] = 2,
    ACTIONS(103), 3,
      anon_sym_POUND,
      anon_sym_msgid,
      anon_sym_msgstr,
    ACTIONS(101), 11,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND_DOT,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_TILDE,
      anon_sym_msgctxt,
      anon_sym_msgid_plural,
      anon_sym_msgstr_LBRACK,
      anon_sym_DQUOTE,
  [337] = 2,
    ACTIONS(107), 3,
      anon_sym_POUND,
      anon_sym_msgid,
      anon_sym_msgstr,
    ACTIONS(105), 11,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND_DOT,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_TILDE,
      anon_sym_msgctxt,
      anon_sym_msgid_plural,
      anon_sym_msgstr_LBRACK,
      anon_sym_DQUOTE,
  [356] = 4,
    ACTIONS(111), 1,
      anon_sym_POUND,
    ACTIONS(113), 1,
      anon_sym_msgstr_LBRACK,
    STATE(13), 2,
      sym_msgstr_plural,
      aux_sym_message_repeat2,
    ACTIONS(109), 9,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND_DOT,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_TILDE,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [378] = 4,
    ACTIONS(118), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_msgstr_LBRACK,
    STATE(13), 2,
      sym_msgstr_plural,
      aux_sym_message_repeat2,
    ACTIONS(116), 9,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND_DOT,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_TILDE,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [400] = 4,
    ACTIONS(120), 1,
      anon_sym_msgstr_LBRACK,
    ACTIONS(124), 1,
      anon_sym_POUND,
    STATE(13), 2,
      sym_msgstr_plural,
      aux_sym_message_repeat2,
    ACTIONS(122), 9,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND_DOT,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_TILDE,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [422] = 4,
    ACTIONS(120), 1,
      anon_sym_msgstr_LBRACK,
    ACTIONS(128), 1,
      anon_sym_POUND,
    STATE(13), 2,
      sym_msgstr_plural,
      aux_sym_message_repeat2,
    ACTIONS(126), 9,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND_DOT,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_TILDE,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [444] = 4,
    ACTIONS(120), 1,
      anon_sym_msgstr_LBRACK,
    ACTIONS(132), 1,
      anon_sym_POUND,
    STATE(13), 2,
      sym_msgstr_plural,
      aux_sym_message_repeat2,
    ACTIONS(130), 9,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND_DOT,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_TILDE,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [466] = 2,
    ACTIONS(136), 1,
      anon_sym_POUND,
    ACTIONS(134), 9,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND_DOT,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_TILDE,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [481] = 2,
    ACTIONS(140), 1,
      anon_sym_POUND,
    ACTIONS(138), 9,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND_DOT,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_TILDE,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [496] = 2,
    ACTIONS(144), 1,
      anon_sym_POUND,
    ACTIONS(142), 9,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND_DOT,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_TILDE,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [511] = 3,
    ACTIONS(148), 1,
      anon_sym_POUND,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(151), 7,
      anon_sym_POUND_DOT,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_TILDE,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [528] = 2,
    ACTIONS(118), 1,
      anon_sym_POUND,
    ACTIONS(116), 9,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND_DOT,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_TILDE,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [543] = 2,
    ACTIONS(156), 1,
      anon_sym_POUND,
    ACTIONS(154), 9,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND_DOT,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_TILDE,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [558] = 2,
    ACTIONS(124), 1,
      anon_sym_POUND,
    ACTIONS(122), 9,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND_DOT,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_TILDE,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [573] = 2,
    ACTIONS(160), 1,
      anon_sym_POUND,
    ACTIONS(158), 9,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND_DOT,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_TILDE,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [588] = 2,
    ACTIONS(164), 1,
      anon_sym_POUND,
    ACTIONS(162), 9,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND_DOT,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_TILDE,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [603] = 2,
    ACTIONS(168), 1,
      anon_sym_POUND,
    ACTIONS(166), 9,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND_DOT,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_TILDE,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [618] = 2,
    ACTIONS(172), 1,
      anon_sym_POUND,
    ACTIONS(170), 9,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND_DOT,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_TILDE,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [633] = 2,
    ACTIONS(176), 1,
      anon_sym_POUND,
    ACTIONS(174), 9,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND_DOT,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_TILDE,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [648] = 2,
    ACTIONS(180), 1,
      anon_sym_POUND,
    ACTIONS(178), 9,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND_DOT,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_TILDE,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [663] = 2,
    ACTIONS(132), 1,
      anon_sym_POUND,
    ACTIONS(130), 9,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND_DOT,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_TILDE,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [678] = 2,
    ACTIONS(184), 1,
      anon_sym_POUND,
    ACTIONS(182), 9,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND_DOT,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_TILDE,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [693] = 2,
    ACTIONS(128), 1,
      anon_sym_POUND,
    ACTIONS(126), 9,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND_DOT,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_TILDE,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [708] = 2,
    ACTIONS(188), 1,
      anon_sym_POUND,
    ACTIONS(186), 9,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND_DOT,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_TILDE,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [723] = 2,
    ACTIONS(192), 1,
      anon_sym_POUND,
    ACTIONS(190), 9,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND_DOT,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_TILDE,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [738] = 6,
    ACTIONS(120), 1,
      anon_sym_msgstr_LBRACK,
    ACTIONS(194), 1,
      anon_sym_msgid_plural,
    ACTIONS(196), 1,
      anon_sym_msgstr,
    STATE(24), 1,
      sym_msgstr,
    STATE(50), 1,
      sym_msgid_plural,
    STATE(15), 2,
      sym_msgstr_plural,
      aux_sym_message_repeat2,
  [758] = 5,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      anon_sym_msgstr,
    STATE(77), 1,
      sym_string,
    ACTIONS(198), 2,
      anon_sym_msgid_plural,
      anon_sym_msgstr_LBRACK,
    STATE(39), 2,
      sym__continuation_line,
      aux_sym_msgctxt_repeat1,
  [776] = 6,
    ACTIONS(120), 1,
      anon_sym_msgstr_LBRACK,
    ACTIONS(194), 1,
      anon_sym_msgid_plural,
    ACTIONS(196), 1,
      anon_sym_msgstr,
    STATE(22), 1,
      sym_msgstr,
    STATE(46), 1,
      sym_msgid_plural,
    STATE(14), 2,
      sym_msgstr_plural,
      aux_sym_message_repeat2,
  [796] = 5,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_msgstr,
    STATE(77), 1,
      sym_string,
    ACTIONS(202), 2,
      anon_sym_msgid_plural,
      anon_sym_msgstr_LBRACK,
    STATE(5), 2,
      sym__continuation_line,
      aux_sym_msgctxt_repeat1,
  [814] = 6,
    ACTIONS(120), 1,
      anon_sym_msgstr_LBRACK,
    ACTIONS(194), 1,
      anon_sym_msgid_plural,
    ACTIONS(196), 1,
      anon_sym_msgstr,
    STATE(31), 1,
      sym_msgstr,
    STATE(48), 1,
      sym_msgid_plural,
    STATE(17), 2,
      sym_msgstr_plural,
      aux_sym_message_repeat2,
  [834] = 4,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      aux_sym_string_token4,
    STATE(41), 1,
      aux_sym_string_repeat1,
    ACTIONS(208), 3,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [849] = 4,
    ACTIONS(214), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      aux_sym_string_token4,
    STATE(41), 1,
      aux_sym_string_repeat1,
    ACTIONS(216), 3,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [864] = 4,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    ACTIONS(224), 1,
      aux_sym_string_token4,
    STATE(42), 1,
      aux_sym_string_repeat1,
    ACTIONS(222), 3,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [879] = 5,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(226), 1,
      anon_sym_msgstr,
    ACTIONS(228), 1,
      anon_sym_msgstr_LBRACK,
    STATE(77), 1,
      sym_string,
    STATE(45), 2,
      sym__continuation_line,
      aux_sym_msgctxt_repeat1,
  [896] = 5,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(230), 1,
      anon_sym_msgstr,
    ACTIONS(232), 1,
      anon_sym_msgstr_LBRACK,
    STATE(77), 1,
      sym_string,
    STATE(5), 2,
      sym__continuation_line,
      aux_sym_msgctxt_repeat1,
  [913] = 4,
    ACTIONS(120), 1,
      anon_sym_msgstr_LBRACK,
    ACTIONS(196), 1,
      anon_sym_msgstr,
    STATE(31), 1,
      sym_msgstr,
    STATE(17), 2,
      sym_msgstr_plural,
      aux_sym_message_repeat2,
  [927] = 4,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(234), 1,
      anon_sym_msgid,
    STATE(77), 1,
      sym_string,
    STATE(5), 2,
      sym__continuation_line,
      aux_sym_msgctxt_repeat1,
  [941] = 4,
    ACTIONS(120), 1,
      anon_sym_msgstr_LBRACK,
    ACTIONS(196), 1,
      anon_sym_msgstr,
    STATE(33), 1,
      sym_msgstr,
    STATE(16), 2,
      sym_msgstr_plural,
      aux_sym_message_repeat2,
  [955] = 4,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      anon_sym_msgid,
    STATE(77), 1,
      sym_string,
    STATE(47), 2,
      sym__continuation_line,
      aux_sym_msgctxt_repeat1,
  [969] = 4,
    ACTIONS(120), 1,
      anon_sym_msgstr_LBRACK,
    ACTIONS(196), 1,
      anon_sym_msgstr,
    STATE(22), 1,
      sym_msgstr,
    STATE(14), 2,
      sym_msgstr_plural,
      aux_sym_message_repeat2,
  [983] = 3,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(44), 1,
      sym__string_line,
    STATE(81), 1,
      sym_string,
  [993] = 3,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(10), 1,
      sym__string_line,
    STATE(81), 1,
      sym_string,
  [1003] = 3,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(49), 1,
      sym__string_line,
    STATE(81), 1,
      sym_string,
  [1013] = 3,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(37), 1,
      sym__string_line,
    STATE(81), 1,
      sym_string,
  [1023] = 3,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(7), 1,
      sym__string_line,
    STATE(81), 1,
      sym_string,
  [1033] = 2,
    ACTIONS(238), 1,
      sym__newline,
    ACTIONS(240), 1,
      anon_sym_SPACE,
  [1040] = 2,
    ACTIONS(242), 1,
      sym__newline,
    ACTIONS(244), 1,
      anon_sym_SPACE,
  [1047] = 2,
    ACTIONS(21), 1,
      anon_sym_msgid,
    STATE(38), 1,
      sym_msgid,
  [1054] = 2,
    ACTIONS(246), 1,
      sym__newline,
    ACTIONS(248), 1,
      anon_sym_SPACE,
  [1061] = 2,
    ACTIONS(250), 1,
      sym__newline,
    ACTIONS(252), 1,
      anon_sym_SPACE,
  [1068] = 2,
    ACTIONS(21), 1,
      anon_sym_msgid,
    STATE(40), 1,
      sym_msgid,
  [1075] = 2,
    ACTIONS(254), 1,
      sym__newline,
    ACTIONS(256), 1,
      anon_sym_SPACE,
  [1082] = 2,
    ACTIONS(258), 1,
      sym__newline,
    ACTIONS(260), 1,
      anon_sym_SPACE,
  [1089] = 1,
    ACTIONS(262), 1,
      aux_sym_extracted_comment_token1,
  [1093] = 1,
    ACTIONS(264), 1,
      aux_sym_extracted_comment_token1,
  [1097] = 1,
    ACTIONS(266), 1,
      aux_sym_msgstr_plural_token1,
  [1101] = 1,
    ACTIONS(268), 1,
      anon_sym_RBRACK,
  [1105] = 1,
    ACTIONS(270), 1,
      aux_sym_extracted_comment_token1,
  [1109] = 1,
    ACTIONS(272), 1,
      aux_sym_extracted_comment_token1,
  [1113] = 1,
    ACTIONS(274), 1,
      sym__newline,
  [1117] = 1,
    ACTIONS(276), 1,
      sym__newline,
  [1121] = 1,
    ACTIONS(278), 1,
      sym__newline,
  [1125] = 1,
    ACTIONS(280), 1,
      sym__newline,
  [1129] = 1,
    ACTIONS(282), 1,
      sym__newline,
  [1133] = 1,
    ACTIONS(284), 1,
      sym__newline,
  [1137] = 1,
    ACTIONS(286), 1,
      sym__newline,
  [1141] = 1,
    ACTIONS(288), 1,
      sym__newline,
  [1145] = 1,
    ACTIONS(290), 1,
      aux_sym_extracted_comment_token1,
  [1149] = 1,
    ACTIONS(292), 1,
      sym__newline,
  [1153] = 1,
    ACTIONS(294), 1,
      ts_builtin_sym_end,
  [1157] = 1,
    ACTIONS(296), 1,
      sym__newline,
  [1161] = 1,
    ACTIONS(298), 1,
      aux_sym_translator_comment_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 55,
  [SMALL_STATE(4)] = 110,
  [SMALL_STATE(5)] = 153,
  [SMALL_STATE(6)] = 181,
  [SMALL_STATE(7)] = 216,
  [SMALL_STATE(8)] = 242,
  [SMALL_STATE(9)] = 268,
  [SMALL_STATE(10)] = 293,
  [SMALL_STATE(11)] = 318,
  [SMALL_STATE(12)] = 337,
  [SMALL_STATE(13)] = 356,
  [SMALL_STATE(14)] = 378,
  [SMALL_STATE(15)] = 400,
  [SMALL_STATE(16)] = 422,
  [SMALL_STATE(17)] = 444,
  [SMALL_STATE(18)] = 466,
  [SMALL_STATE(19)] = 481,
  [SMALL_STATE(20)] = 496,
  [SMALL_STATE(21)] = 511,
  [SMALL_STATE(22)] = 528,
  [SMALL_STATE(23)] = 543,
  [SMALL_STATE(24)] = 558,
  [SMALL_STATE(25)] = 573,
  [SMALL_STATE(26)] = 588,
  [SMALL_STATE(27)] = 603,
  [SMALL_STATE(28)] = 618,
  [SMALL_STATE(29)] = 633,
  [SMALL_STATE(30)] = 648,
  [SMALL_STATE(31)] = 663,
  [SMALL_STATE(32)] = 678,
  [SMALL_STATE(33)] = 693,
  [SMALL_STATE(34)] = 708,
  [SMALL_STATE(35)] = 723,
  [SMALL_STATE(36)] = 738,
  [SMALL_STATE(37)] = 758,
  [SMALL_STATE(38)] = 776,
  [SMALL_STATE(39)] = 796,
  [SMALL_STATE(40)] = 814,
  [SMALL_STATE(41)] = 834,
  [SMALL_STATE(42)] = 849,
  [SMALL_STATE(43)] = 864,
  [SMALL_STATE(44)] = 879,
  [SMALL_STATE(45)] = 896,
  [SMALL_STATE(46)] = 913,
  [SMALL_STATE(47)] = 927,
  [SMALL_STATE(48)] = 941,
  [SMALL_STATE(49)] = 955,
  [SMALL_STATE(50)] = 969,
  [SMALL_STATE(51)] = 983,
  [SMALL_STATE(52)] = 993,
  [SMALL_STATE(53)] = 1003,
  [SMALL_STATE(54)] = 1013,
  [SMALL_STATE(55)] = 1023,
  [SMALL_STATE(56)] = 1033,
  [SMALL_STATE(57)] = 1040,
  [SMALL_STATE(58)] = 1047,
  [SMALL_STATE(59)] = 1054,
  [SMALL_STATE(60)] = 1061,
  [SMALL_STATE(61)] = 1068,
  [SMALL_STATE(62)] = 1075,
  [SMALL_STATE(63)] = 1082,
  [SMALL_STATE(64)] = 1089,
  [SMALL_STATE(65)] = 1093,
  [SMALL_STATE(66)] = 1097,
  [SMALL_STATE(67)] = 1101,
  [SMALL_STATE(68)] = 1105,
  [SMALL_STATE(69)] = 1109,
  [SMALL_STATE(70)] = 1113,
  [SMALL_STATE(71)] = 1117,
  [SMALL_STATE(72)] = 1121,
  [SMALL_STATE(73)] = 1125,
  [SMALL_STATE(74)] = 1129,
  [SMALL_STATE(75)] = 1133,
  [SMALL_STATE(76)] = 1137,
  [SMALL_STATE(77)] = 1141,
  [SMALL_STATE(78)] = 1145,
  [SMALL_STATE(79)] = 1149,
  [SMALL_STATE(80)] = 1153,
  [SMALL_STATE(81)] = 1157,
  [SMALL_STATE(82)] = 1161,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_msgctxt_repeat1, 2, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_msgctxt_repeat1, 2, 0, 0),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_msgctxt_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_repeat1, 2, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msgstr_plural, 4, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msgstr_plural, 4, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msgstr_plural, 5, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msgstr_plural, 5, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msgstr, 3, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msgstr, 3, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msgstr, 2, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msgstr, 2, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_line, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_line, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__continuation_line, 2, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__continuation_line, 2, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_repeat2, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_message_repeat2, 2, 0, 0),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_repeat2, 2, 0, 0), SHIFT_REPEAT(66),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 3, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 3, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 2, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 2, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 5, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 5, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 4, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 4, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_previous_comment, 2, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_previous_comment, 2, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obsolete_comment, 2, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_obsolete_comment, 2, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0), REDUCE(aux_sym_message_repeat1, 1, 0, 0),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0), REDUCE(aux_sym_message_repeat1, 1, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_comment, 2, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_comment, 2, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_comment, 2, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference_comment, 2, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_comment, 4, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_comment, 4, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_previous_comment, 4, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_previous_comment, 4, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translator_comment, 4, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_translator_comment, 4, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extracted_comment, 4, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extracted_comment, 4, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extracted_comment, 2, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extracted_comment, 2, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_comment, 4, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference_comment, 4, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obsolete_comment, 4, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_obsolete_comment, 4, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translator_comment, 2, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_translator_comment, 2, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msgid, 2, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msgid, 2, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msgid, 3, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msgid, 3, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msgid_plural, 2, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msgid_plural, 2, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msgid_plural, 3, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msgid_plural, 3, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msgctxt, 3, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msgctxt, 2, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [294] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_po(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
