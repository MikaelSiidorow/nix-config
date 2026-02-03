#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 82
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
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 36},
  [6] = {.lex_state = 36},
  [7] = {.lex_state = 36},
  [8] = {.lex_state = 36},
  [9] = {.lex_state = 36},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 36},
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
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 36},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 36},
  [31] = {.lex_state = 36},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 36},
  [34] = {.lex_state = 36},
  [35] = {.lex_state = 36},
  [36] = {.lex_state = 36},
  [37] = {.lex_state = 36},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 36},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 36},
  [47] = {.lex_state = 36},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 36},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 36},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 0},
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
  [77] = {.lex_state = 44},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 33},
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
    [sym_source_file] = STATE(63),
    [sym_message] = STATE(2),
    [sym_comment] = STATE(5),
    [sym_translator_comment] = STATE(25),
    [sym_extracted_comment] = STATE(25),
    [sym_reference_comment] = STATE(25),
    [sym_flag_comment] = STATE(25),
    [sym_previous_comment] = STATE(25),
    [sym_obsolete_comment] = STATE(2),
    [sym_msgctxt] = STATE(56),
    [sym_msgid] = STATE(26),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_message_repeat1] = STATE(5),
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
  [0] = 15,
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
    STATE(26), 1,
      sym_msgid,
    STATE(56), 1,
      sym_msgctxt,
    STATE(5), 2,
      sym_comment,
      aux_sym_message_repeat1,
    STATE(3), 3,
      sym_message,
      sym_obsolete_comment,
      aux_sym_source_file_repeat1,
    STATE(25), 5,
      sym_translator_comment,
      sym_extracted_comment,
      sym_reference_comment,
      sym_flag_comment,
      sym_previous_comment,
  [53] = 15,
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
    STATE(26), 1,
      sym_msgid,
    STATE(56), 1,
      sym_msgctxt,
    STATE(5), 2,
      sym_comment,
      aux_sym_message_repeat1,
    STATE(3), 3,
      sym_message,
      sym_obsolete_comment,
      aux_sym_source_file_repeat1,
    STATE(25), 5,
      sym_translator_comment,
      sym_extracted_comment,
      sym_reference_comment,
      sym_flag_comment,
      sym_previous_comment,
  [106] = 5,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    STATE(76), 1,
      sym_string,
    STATE(4), 2,
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
  [134] = 11,
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
    ACTIONS(19), 1,
      anon_sym_msgctxt,
    ACTIONS(21), 1,
      anon_sym_msgid,
    STATE(29), 1,
      sym_msgid,
    STATE(59), 1,
      sym_msgctxt,
    STATE(8), 2,
      sym_comment,
      aux_sym_message_repeat1,
    STATE(25), 5,
      sym_translator_comment,
      sym_extracted_comment,
      sym_reference_comment,
      sym_flag_comment,
      sym_previous_comment,
  [173] = 5,
    ACTIONS(65), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    STATE(76), 1,
      sym_string,
    STATE(7), 2,
      sym__continuation_line,
      aux_sym_msgctxt_repeat1,
    ACTIONS(63), 10,
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
  [199] = 5,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_POUND,
    STATE(76), 1,
      sym_string,
    STATE(4), 2,
      sym__continuation_line,
      aux_sym_msgctxt_repeat1,
    ACTIONS(69), 10,
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
  [225] = 8,
    ACTIONS(73), 1,
      anon_sym_POUND,
    ACTIONS(76), 1,
      anon_sym_POUND_DOT,
    ACTIONS(79), 1,
      anon_sym_POUND_COLON,
    ACTIONS(82), 1,
      anon_sym_POUND_COMMA,
    ACTIONS(85), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(88), 2,
      anon_sym_msgctxt,
      anon_sym_msgid,
    STATE(8), 2,
      sym_comment,
      aux_sym_message_repeat1,
    STATE(25), 5,
      sym_translator_comment,
      sym_extracted_comment,
      sym_reference_comment,
      sym_flag_comment,
      sym_previous_comment,
  [256] = 5,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(92), 1,
      anon_sym_POUND,
    STATE(76), 1,
      sym_string,
    STATE(4), 2,
      sym__continuation_line,
      aux_sym_msgctxt_repeat1,
    ACTIONS(90), 9,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND_DOT,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_TILDE,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [281] = 2,
    ACTIONS(96), 3,
      anon_sym_POUND,
      anon_sym_msgid,
      anon_sym_msgstr,
    ACTIONS(94), 11,
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
  [300] = 5,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      anon_sym_POUND,
    STATE(76), 1,
      sym_string,
    STATE(9), 2,
      sym__continuation_line,
      aux_sym_msgctxt_repeat1,
    ACTIONS(98), 9,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND_DOT,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_TILDE,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [325] = 2,
    ACTIONS(104), 3,
      anon_sym_POUND,
      anon_sym_msgid,
      anon_sym_msgstr,
    ACTIONS(102), 11,
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
  [344] = 4,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(110), 1,
      anon_sym_msgstr_LBRACK,
    STATE(15), 2,
      sym_msgstr_plural,
      aux_sym_message_repeat2,
    ACTIONS(106), 9,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND_DOT,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_TILDE,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [366] = 4,
    ACTIONS(110), 1,
      anon_sym_msgstr_LBRACK,
    ACTIONS(114), 1,
      anon_sym_POUND,
    STATE(15), 2,
      sym_msgstr_plural,
      aux_sym_message_repeat2,
    ACTIONS(112), 9,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND_DOT,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_TILDE,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [388] = 4,
    ACTIONS(118), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_msgstr_LBRACK,
    STATE(15), 2,
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
  [410] = 4,
    ACTIONS(110), 1,
      anon_sym_msgstr_LBRACK,
    ACTIONS(125), 1,
      anon_sym_POUND,
    STATE(15), 2,
      sym_msgstr_plural,
      aux_sym_message_repeat2,
    ACTIONS(123), 9,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND_DOT,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_TILDE,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [432] = 4,
    ACTIONS(110), 1,
      anon_sym_msgstr_LBRACK,
    ACTIONS(129), 1,
      anon_sym_POUND,
    STATE(15), 2,
      sym_msgstr_plural,
      aux_sym_message_repeat2,
    ACTIONS(127), 9,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND_DOT,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_TILDE,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [454] = 2,
    ACTIONS(114), 1,
      anon_sym_POUND,
    ACTIONS(112), 9,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND_DOT,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_TILDE,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [469] = 2,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(106), 9,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND_DOT,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_TILDE,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [484] = 2,
    ACTIONS(133), 1,
      anon_sym_POUND,
    ACTIONS(131), 9,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND_DOT,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_TILDE,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [499] = 2,
    ACTIONS(137), 1,
      anon_sym_POUND,
    ACTIONS(135), 9,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND_DOT,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_TILDE,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [514] = 2,
    ACTIONS(125), 1,
      anon_sym_POUND,
    ACTIONS(123), 9,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND_DOT,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_TILDE,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [529] = 2,
    ACTIONS(129), 1,
      anon_sym_POUND,
    ACTIONS(127), 9,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND_DOT,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_TILDE,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [544] = 2,
    ACTIONS(139), 1,
      anon_sym_POUND,
    ACTIONS(141), 6,
      anon_sym_POUND_DOT,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_PIPE,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [556] = 2,
    ACTIONS(143), 1,
      anon_sym_POUND,
    ACTIONS(145), 6,
      anon_sym_POUND_DOT,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_PIPE,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [568] = 6,
    ACTIONS(110), 1,
      anon_sym_msgstr_LBRACK,
    ACTIONS(147), 1,
      anon_sym_msgid_plural,
    ACTIONS(149), 1,
      anon_sym_msgstr,
    STATE(18), 1,
      sym_msgstr,
    STATE(49), 1,
      sym_msgid_plural,
    STATE(14), 2,
      sym_msgstr_plural,
      aux_sym_message_repeat2,
  [588] = 5,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_msgstr,
    STATE(76), 1,
      sym_string,
    ACTIONS(151), 2,
      anon_sym_msgid_plural,
      anon_sym_msgstr_LBRACK,
    STATE(4), 2,
      sym__continuation_line,
      aux_sym_msgctxt_repeat1,
  [606] = 2,
    ACTIONS(155), 1,
      anon_sym_POUND,
    ACTIONS(157), 6,
      anon_sym_POUND_DOT,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_PIPE,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [618] = 6,
    ACTIONS(110), 1,
      anon_sym_msgstr_LBRACK,
    ACTIONS(147), 1,
      anon_sym_msgid_plural,
    ACTIONS(149), 1,
      anon_sym_msgstr,
    STATE(19), 1,
      sym_msgstr,
    STATE(45), 1,
      sym_msgid_plural,
    STATE(13), 2,
      sym_msgstr_plural,
      aux_sym_message_repeat2,
  [638] = 2,
    ACTIONS(159), 1,
      anon_sym_POUND,
    ACTIONS(161), 6,
      anon_sym_POUND_DOT,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_PIPE,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [650] = 2,
    ACTIONS(163), 1,
      anon_sym_POUND,
    ACTIONS(165), 6,
      anon_sym_POUND_DOT,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_PIPE,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [662] = 6,
    ACTIONS(110), 1,
      anon_sym_msgstr_LBRACK,
    ACTIONS(147), 1,
      anon_sym_msgid_plural,
    ACTIONS(149), 1,
      anon_sym_msgstr,
    STATE(22), 1,
      sym_msgstr,
    STATE(48), 1,
      sym_msgid_plural,
    STATE(16), 2,
      sym_msgstr_plural,
      aux_sym_message_repeat2,
  [682] = 2,
    ACTIONS(167), 1,
      anon_sym_POUND,
    ACTIONS(169), 6,
      anon_sym_POUND_DOT,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_PIPE,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [694] = 2,
    ACTIONS(171), 1,
      anon_sym_POUND,
    ACTIONS(173), 6,
      anon_sym_POUND_DOT,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_PIPE,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [706] = 2,
    ACTIONS(175), 1,
      anon_sym_POUND,
    ACTIONS(177), 6,
      anon_sym_POUND_DOT,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_PIPE,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [718] = 2,
    ACTIONS(179), 1,
      anon_sym_POUND,
    ACTIONS(181), 6,
      anon_sym_POUND_DOT,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_PIPE,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [730] = 2,
    ACTIONS(183), 1,
      anon_sym_POUND,
    ACTIONS(185), 6,
      anon_sym_POUND_DOT,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_PIPE,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [742] = 5,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(189), 1,
      anon_sym_msgstr,
    STATE(76), 1,
      sym_string,
    ACTIONS(187), 2,
      anon_sym_msgid_plural,
      anon_sym_msgstr_LBRACK,
    STATE(27), 2,
      sym__continuation_line,
      aux_sym_msgctxt_repeat1,
  [760] = 2,
    ACTIONS(191), 1,
      anon_sym_POUND,
    ACTIONS(193), 6,
      anon_sym_POUND_DOT,
      anon_sym_POUND_COLON,
      anon_sym_POUND_COMMA,
      anon_sym_POUND_PIPE,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [772] = 4,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      aux_sym_string_token4,
    STATE(42), 1,
      aux_sym_string_repeat1,
    ACTIONS(197), 3,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [787] = 5,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(201), 1,
      anon_sym_msgstr,
    ACTIONS(203), 1,
      anon_sym_msgstr_LBRACK,
    STATE(76), 1,
      sym_string,
    STATE(44), 2,
      sym__continuation_line,
      aux_sym_msgctxt_repeat1,
  [804] = 4,
    ACTIONS(205), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      aux_sym_string_token4,
    STATE(42), 1,
      aux_sym_string_repeat1,
    ACTIONS(207), 3,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [819] = 4,
    ACTIONS(213), 1,
      anon_sym_DQUOTE,
    ACTIONS(217), 1,
      aux_sym_string_token4,
    STATE(40), 1,
      aux_sym_string_repeat1,
    ACTIONS(215), 3,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [834] = 5,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(219), 1,
      anon_sym_msgstr,
    ACTIONS(221), 1,
      anon_sym_msgstr_LBRACK,
    STATE(76), 1,
      sym_string,
    STATE(4), 2,
      sym__continuation_line,
      aux_sym_msgctxt_repeat1,
  [851] = 4,
    ACTIONS(110), 1,
      anon_sym_msgstr_LBRACK,
    ACTIONS(149), 1,
      anon_sym_msgstr,
    STATE(22), 1,
      sym_msgstr,
    STATE(16), 2,
      sym_msgstr_plural,
      aux_sym_message_repeat2,
  [865] = 4,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      anon_sym_msgid,
    STATE(76), 1,
      sym_string,
    STATE(47), 2,
      sym__continuation_line,
      aux_sym_msgctxt_repeat1,
  [879] = 4,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      anon_sym_msgid,
    STATE(76), 1,
      sym_string,
    STATE(4), 2,
      sym__continuation_line,
      aux_sym_msgctxt_repeat1,
  [893] = 4,
    ACTIONS(110), 1,
      anon_sym_msgstr_LBRACK,
    ACTIONS(149), 1,
      anon_sym_msgstr,
    STATE(23), 1,
      sym_msgstr,
    STATE(17), 2,
      sym_msgstr_plural,
      aux_sym_message_repeat2,
  [907] = 4,
    ACTIONS(110), 1,
      anon_sym_msgstr_LBRACK,
    ACTIONS(149), 1,
      anon_sym_msgstr,
    STATE(19), 1,
      sym_msgstr,
    STATE(13), 2,
      sym_msgstr_plural,
      aux_sym_message_repeat2,
  [921] = 3,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    STATE(41), 1,
      sym__string_line,
    STATE(80), 1,
      sym_string,
  [931] = 3,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    STATE(38), 1,
      sym__string_line,
    STATE(80), 1,
      sym_string,
  [941] = 3,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      sym__string_line,
    STATE(80), 1,
      sym_string,
  [951] = 3,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    STATE(46), 1,
      sym__string_line,
    STATE(80), 1,
      sym_string,
  [961] = 3,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    STATE(6), 1,
      sym__string_line,
    STATE(80), 1,
      sym_string,
  [971] = 2,
    ACTIONS(227), 1,
      sym__newline,
    ACTIONS(229), 1,
      anon_sym_SPACE,
  [978] = 2,
    ACTIONS(21), 1,
      anon_sym_msgid,
    STATE(29), 1,
      sym_msgid,
  [985] = 2,
    ACTIONS(231), 1,
      sym__newline,
    ACTIONS(233), 1,
      anon_sym_SPACE,
  [992] = 2,
    ACTIONS(235), 1,
      sym__newline,
    ACTIONS(237), 1,
      anon_sym_SPACE,
  [999] = 2,
    ACTIONS(21), 1,
      anon_sym_msgid,
    STATE(32), 1,
      sym_msgid,
  [1006] = 2,
    ACTIONS(239), 1,
      sym__newline,
    ACTIONS(241), 1,
      anon_sym_SPACE,
  [1013] = 2,
    ACTIONS(243), 1,
      sym__newline,
    ACTIONS(245), 1,
      anon_sym_SPACE,
  [1020] = 2,
    ACTIONS(247), 1,
      sym__newline,
    ACTIONS(249), 1,
      anon_sym_SPACE,
  [1027] = 1,
    ACTIONS(251), 1,
      ts_builtin_sym_end,
  [1031] = 1,
    ACTIONS(253), 1,
      aux_sym_extracted_comment_token1,
  [1035] = 1,
    ACTIONS(255), 1,
      aux_sym_extracted_comment_token1,
  [1039] = 1,
    ACTIONS(257), 1,
      aux_sym_msgstr_plural_token1,
  [1043] = 1,
    ACTIONS(259), 1,
      anon_sym_RBRACK,
  [1047] = 1,
    ACTIONS(261), 1,
      aux_sym_extracted_comment_token1,
  [1051] = 1,
    ACTIONS(263), 1,
      aux_sym_extracted_comment_token1,
  [1055] = 1,
    ACTIONS(265), 1,
      sym__newline,
  [1059] = 1,
    ACTIONS(267), 1,
      sym__newline,
  [1063] = 1,
    ACTIONS(269), 1,
      sym__newline,
  [1067] = 1,
    ACTIONS(271), 1,
      sym__newline,
  [1071] = 1,
    ACTIONS(273), 1,
      sym__newline,
  [1075] = 1,
    ACTIONS(275), 1,
      sym__newline,
  [1079] = 1,
    ACTIONS(277), 1,
      sym__newline,
  [1083] = 1,
    ACTIONS(279), 1,
      aux_sym_extracted_comment_token1,
  [1087] = 1,
    ACTIONS(281), 1,
      sym__newline,
  [1091] = 1,
    ACTIONS(283), 1,
      sym__newline,
  [1095] = 1,
    ACTIONS(285), 1,
      sym__newline,
  [1099] = 1,
    ACTIONS(287), 1,
      aux_sym_translator_comment_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 53,
  [SMALL_STATE(4)] = 106,
  [SMALL_STATE(5)] = 134,
  [SMALL_STATE(6)] = 173,
  [SMALL_STATE(7)] = 199,
  [SMALL_STATE(8)] = 225,
  [SMALL_STATE(9)] = 256,
  [SMALL_STATE(10)] = 281,
  [SMALL_STATE(11)] = 300,
  [SMALL_STATE(12)] = 325,
  [SMALL_STATE(13)] = 344,
  [SMALL_STATE(14)] = 366,
  [SMALL_STATE(15)] = 388,
  [SMALL_STATE(16)] = 410,
  [SMALL_STATE(17)] = 432,
  [SMALL_STATE(18)] = 454,
  [SMALL_STATE(19)] = 469,
  [SMALL_STATE(20)] = 484,
  [SMALL_STATE(21)] = 499,
  [SMALL_STATE(22)] = 514,
  [SMALL_STATE(23)] = 529,
  [SMALL_STATE(24)] = 544,
  [SMALL_STATE(25)] = 556,
  [SMALL_STATE(26)] = 568,
  [SMALL_STATE(27)] = 588,
  [SMALL_STATE(28)] = 606,
  [SMALL_STATE(29)] = 618,
  [SMALL_STATE(30)] = 638,
  [SMALL_STATE(31)] = 650,
  [SMALL_STATE(32)] = 662,
  [SMALL_STATE(33)] = 682,
  [SMALL_STATE(34)] = 694,
  [SMALL_STATE(35)] = 706,
  [SMALL_STATE(36)] = 718,
  [SMALL_STATE(37)] = 730,
  [SMALL_STATE(38)] = 742,
  [SMALL_STATE(39)] = 760,
  [SMALL_STATE(40)] = 772,
  [SMALL_STATE(41)] = 787,
  [SMALL_STATE(42)] = 804,
  [SMALL_STATE(43)] = 819,
  [SMALL_STATE(44)] = 834,
  [SMALL_STATE(45)] = 851,
  [SMALL_STATE(46)] = 865,
  [SMALL_STATE(47)] = 879,
  [SMALL_STATE(48)] = 893,
  [SMALL_STATE(49)] = 907,
  [SMALL_STATE(50)] = 921,
  [SMALL_STATE(51)] = 931,
  [SMALL_STATE(52)] = 941,
  [SMALL_STATE(53)] = 951,
  [SMALL_STATE(54)] = 961,
  [SMALL_STATE(55)] = 971,
  [SMALL_STATE(56)] = 978,
  [SMALL_STATE(57)] = 985,
  [SMALL_STATE(58)] = 992,
  [SMALL_STATE(59)] = 999,
  [SMALL_STATE(60)] = 1006,
  [SMALL_STATE(61)] = 1013,
  [SMALL_STATE(62)] = 1020,
  [SMALL_STATE(63)] = 1027,
  [SMALL_STATE(64)] = 1031,
  [SMALL_STATE(65)] = 1035,
  [SMALL_STATE(66)] = 1039,
  [SMALL_STATE(67)] = 1043,
  [SMALL_STATE(68)] = 1047,
  [SMALL_STATE(69)] = 1051,
  [SMALL_STATE(70)] = 1055,
  [SMALL_STATE(71)] = 1059,
  [SMALL_STATE(72)] = 1063,
  [SMALL_STATE(73)] = 1067,
  [SMALL_STATE(74)] = 1071,
  [SMALL_STATE(75)] = 1075,
  [SMALL_STATE(76)] = 1079,
  [SMALL_STATE(77)] = 1083,
  [SMALL_STATE(78)] = 1087,
  [SMALL_STATE(79)] = 1091,
  [SMALL_STATE(80)] = 1095,
  [SMALL_STATE(81)] = 1099,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_msgctxt_repeat1, 2, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_msgctxt_repeat1, 2, 0, 0),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_msgctxt_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msgstr_plural, 4, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msgstr_plural, 4, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msgstr_plural, 5, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msgstr_plural, 5, 0, 0),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_repeat1, 2, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msgstr, 3, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msgstr, 3, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_line, 2, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_line, 2, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msgstr, 2, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msgstr, 2, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__continuation_line, 2, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__continuation_line, 2, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 3, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 3, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 2, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 2, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_repeat2, 2, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_message_repeat2, 2, 0, 0),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_repeat2, 2, 0, 0), SHIFT_REPEAT(66),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 4, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 4, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 5, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 5, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obsolete_comment, 2, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_obsolete_comment, 2, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obsolete_comment, 4, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_obsolete_comment, 4, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_comment, 2, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_comment, 2, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msgid, 3, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msgid, 3, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_previous_comment, 2, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_previous_comment, 2, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extracted_comment, 2, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extracted_comment, 2, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference_comment, 2, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_comment, 2, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag_comment, 4, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_comment, 4, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_previous_comment, 4, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_previous_comment, 4, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference_comment, 4, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_comment, 4, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extracted_comment, 4, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extracted_comment, 4, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_translator_comment, 4, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translator_comment, 4, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msgid, 2, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msgid, 2, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_translator_comment, 2, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translator_comment, 2, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msgid_plural, 2, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msgid_plural, 2, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msgid_plural, 3, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msgid_plural, 3, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msgctxt, 2, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msgctxt, 3, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [251] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
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
