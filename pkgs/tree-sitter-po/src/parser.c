#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 38
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_translator_comment = 1,
  sym_extracted_comment = 2,
  sym_reference_comment = 3,
  sym_flag_comment = 4,
  sym_previous_comment = 5,
  sym_obsolete_comment = 6,
  anon_sym_msgctxt = 7,
  anon_sym_msgid = 8,
  anon_sym_msgid_plural = 9,
  anon_sym_msgstr = 10,
  anon_sym_msgstr_LBRACK = 11,
  aux_sym_msgstr_plural_token1 = 12,
  anon_sym_RBRACK = 13,
  sym_string = 14,
  sym_source_file = 15,
  sym_message = 16,
  sym_comment = 17,
  sym_msgctxt = 18,
  sym_msgid = 19,
  sym_msgid_plural = 20,
  sym_msgstr = 21,
  sym_msgstr_plural = 22,
  aux_sym_source_file_repeat1 = 23,
  aux_sym_message_repeat1 = 24,
  aux_sym_message_repeat2 = 25,
  aux_sym_msgctxt_repeat1 = 26,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_translator_comment] = "translator_comment",
  [sym_extracted_comment] = "extracted_comment",
  [sym_reference_comment] = "reference_comment",
  [sym_flag_comment] = "flag_comment",
  [sym_previous_comment] = "previous_comment",
  [sym_obsolete_comment] = "obsolete_comment",
  [anon_sym_msgctxt] = "msgctxt",
  [anon_sym_msgid] = "msgid",
  [anon_sym_msgid_plural] = "msgid_plural",
  [anon_sym_msgstr] = "msgstr",
  [anon_sym_msgstr_LBRACK] = "msgstr[",
  [aux_sym_msgstr_plural_token1] = "msgstr_plural_token1",
  [anon_sym_RBRACK] = "]",
  [sym_string] = "string",
  [sym_source_file] = "source_file",
  [sym_message] = "message",
  [sym_comment] = "comment",
  [sym_msgctxt] = "msgctxt",
  [sym_msgid] = "msgid",
  [sym_msgid_plural] = "msgid_plural",
  [sym_msgstr] = "msgstr",
  [sym_msgstr_plural] = "msgstr_plural",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_message_repeat1] = "message_repeat1",
  [aux_sym_message_repeat2] = "message_repeat2",
  [aux_sym_msgctxt_repeat1] = "msgctxt_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_translator_comment] = sym_translator_comment,
  [sym_extracted_comment] = sym_extracted_comment,
  [sym_reference_comment] = sym_reference_comment,
  [sym_flag_comment] = sym_flag_comment,
  [sym_previous_comment] = sym_previous_comment,
  [sym_obsolete_comment] = sym_obsolete_comment,
  [anon_sym_msgctxt] = anon_sym_msgctxt,
  [anon_sym_msgid] = anon_sym_msgid,
  [anon_sym_msgid_plural] = anon_sym_msgid_plural,
  [anon_sym_msgstr] = anon_sym_msgstr,
  [anon_sym_msgstr_LBRACK] = anon_sym_msgstr_LBRACK,
  [aux_sym_msgstr_plural_token1] = aux_sym_msgstr_plural_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_string] = sym_string,
  [sym_source_file] = sym_source_file,
  [sym_message] = sym_message,
  [sym_comment] = sym_comment,
  [sym_msgctxt] = sym_msgctxt,
  [sym_msgid] = sym_msgid,
  [sym_msgid_plural] = sym_msgid_plural,
  [sym_msgstr] = sym_msgstr,
  [sym_msgstr_plural] = sym_msgstr_plural,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_message_repeat1] = aux_sym_message_repeat1,
  [aux_sym_message_repeat2] = aux_sym_message_repeat2,
  [aux_sym_msgctxt_repeat1] = aux_sym_msgctxt_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [sym_string] = {
    .visible = true,
    .named = true,
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
};

static TSCharacterRange sym_string_character_set_1[] = {
  {'"', '"'}, {'\'', '\''}, {'0', '7'}, {'\\', '\\'}, {'a', 'b'}, {'f', 'f'}, {'n', 'n'}, {'r', 'r'},
  {'t', 't'}, {'v', 'v'}, {'x', 'x'},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(57);
      if (lookahead == '\r') SKIP(54);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == ']') ADVANCE(71);
      if (lookahead == 'm') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(58);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 58,
        '\r', 1,
        ' ', 3,
        ',', 5,
        '.', 8,
        ':', 11,
        '|', 14,
        '~', 17,
      );
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(61);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(59);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(60);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(60);
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(60);
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(62);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(63);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(20);
      END_STATE();
    case 20:
      if (lookahead == '\r') SKIP(19);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == 'm') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(20);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '\\') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '\\') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '[') ADVANCE(69);
      END_STATE();
    case 25:
      if (lookahead == '_') ADVANCE(38);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(29);
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(30);
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(25);
      END_STATE();
    case 32:
      if (lookahead == 'g') ADVANCE(27);
      END_STATE();
    case 33:
      if (lookahead == 'g') ADVANCE(35);
      END_STATE();
    case 34:
      if (lookahead == 'g') ADVANCE(28);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 38:
      if (lookahead == 'p') ADVANCE(36);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 49:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 50:
      if (lookahead == 'x') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(22);
      if (set_contains(sym_string_character_set_1, 11, lookahead)) ADVANCE(23);
      END_STATE();
    case 51:
      if (lookahead == 'x') ADVANCE(47);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 54:
      if (eof) ADVANCE(57);
      if (lookahead == '\n') SKIP(0);
      END_STATE();
    case 55:
      if (eof) ADVANCE(57);
      if (lookahead == '\n') SKIP(56);
      END_STATE();
    case 56:
      if (eof) ADVANCE(57);
      if (lookahead == '\r') SKIP(55);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == 'm') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_translator_comment);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_extracted_comment);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_reference_comment);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_flag_comment);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_previous_comment);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_obsolete_comment);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_msgctxt);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_msgid);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_msgid);
      if (lookahead == '_') ADVANCE(38);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_msgid_plural);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_msgstr);
      if (lookahead == '[') ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_msgstr_LBRACK);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_msgstr_plural_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 56},
  [2] = {.lex_state = 56},
  [3] = {.lex_state = 56},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 56},
  [6] = {.lex_state = 56},
  [7] = {.lex_state = 56},
  [8] = {.lex_state = 56},
  [9] = {.lex_state = 56},
  [10] = {.lex_state = 56},
  [11] = {.lex_state = 56},
  [12] = {.lex_state = 56},
  [13] = {.lex_state = 56},
  [14] = {.lex_state = 56},
  [15] = {.lex_state = 56},
  [16] = {.lex_state = 56},
  [17] = {.lex_state = 56},
  [18] = {.lex_state = 20},
  [19] = {.lex_state = 20},
  [20] = {.lex_state = 56},
  [21] = {.lex_state = 20},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 20},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 56},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 56},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 56},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_translator_comment] = ACTIONS(1),
    [sym_extracted_comment] = ACTIONS(1),
    [sym_reference_comment] = ACTIONS(1),
    [sym_flag_comment] = ACTIONS(1),
    [sym_previous_comment] = ACTIONS(1),
    [sym_obsolete_comment] = ACTIONS(1),
    [anon_sym_msgctxt] = ACTIONS(1),
    [anon_sym_msgid] = ACTIONS(1),
    [anon_sym_msgid_plural] = ACTIONS(1),
    [anon_sym_msgstr] = ACTIONS(1),
    [anon_sym_msgstr_LBRACK] = ACTIONS(1),
    [aux_sym_msgstr_plural_token1] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(35),
    [sym_message] = STATE(2),
    [sym_comment] = STATE(11),
    [sym_msgctxt] = STATE(34),
    [sym_msgid] = STATE(19),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_message_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_translator_comment] = ACTIONS(5),
    [sym_extracted_comment] = ACTIONS(5),
    [sym_reference_comment] = ACTIONS(5),
    [sym_flag_comment] = ACTIONS(5),
    [sym_previous_comment] = ACTIONS(5),
    [sym_obsolete_comment] = ACTIONS(7),
    [anon_sym_msgctxt] = ACTIONS(9),
    [anon_sym_msgid] = ACTIONS(11),
  },
  [2] = {
    [sym_message] = STATE(3),
    [sym_comment] = STATE(11),
    [sym_msgctxt] = STATE(34),
    [sym_msgid] = STATE(19),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_message_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_translator_comment] = ACTIONS(5),
    [sym_extracted_comment] = ACTIONS(5),
    [sym_reference_comment] = ACTIONS(5),
    [sym_flag_comment] = ACTIONS(5),
    [sym_previous_comment] = ACTIONS(5),
    [sym_obsolete_comment] = ACTIONS(15),
    [anon_sym_msgctxt] = ACTIONS(9),
    [anon_sym_msgid] = ACTIONS(11),
  },
  [3] = {
    [sym_message] = STATE(3),
    [sym_comment] = STATE(11),
    [sym_msgctxt] = STATE(34),
    [sym_msgid] = STATE(19),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_message_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_translator_comment] = ACTIONS(19),
    [sym_extracted_comment] = ACTIONS(19),
    [sym_reference_comment] = ACTIONS(19),
    [sym_flag_comment] = ACTIONS(19),
    [sym_previous_comment] = ACTIONS(19),
    [sym_obsolete_comment] = ACTIONS(22),
    [anon_sym_msgctxt] = ACTIONS(25),
    [anon_sym_msgid] = ACTIONS(28),
  },
  [4] = {
    [aux_sym_msgctxt_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym_translator_comment] = ACTIONS(31),
    [sym_extracted_comment] = ACTIONS(31),
    [sym_reference_comment] = ACTIONS(31),
    [sym_flag_comment] = ACTIONS(31),
    [sym_previous_comment] = ACTIONS(31),
    [sym_obsolete_comment] = ACTIONS(31),
    [anon_sym_msgctxt] = ACTIONS(31),
    [anon_sym_msgid] = ACTIONS(33),
    [anon_sym_msgid_plural] = ACTIONS(31),
    [anon_sym_msgstr] = ACTIONS(33),
    [anon_sym_msgstr_LBRACK] = ACTIONS(31),
    [sym_string] = ACTIONS(35),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(40), 1,
      anon_sym_msgstr_LBRACK,
    STATE(9), 2,
      sym_msgstr_plural,
      aux_sym_message_repeat2,
    ACTIONS(38), 9,
      ts_builtin_sym_end,
      sym_translator_comment,
      sym_extracted_comment,
      sym_reference_comment,
      sym_flag_comment,
      sym_previous_comment,
      sym_obsolete_comment,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [19] = 3,
    ACTIONS(40), 1,
      anon_sym_msgstr_LBRACK,
    STATE(9), 2,
      sym_msgstr_plural,
      aux_sym_message_repeat2,
    ACTIONS(42), 9,
      ts_builtin_sym_end,
      sym_translator_comment,
      sym_extracted_comment,
      sym_reference_comment,
      sym_flag_comment,
      sym_previous_comment,
      sym_obsolete_comment,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [38] = 3,
    ACTIONS(40), 1,
      anon_sym_msgstr_LBRACK,
    STATE(9), 2,
      sym_msgstr_plural,
      aux_sym_message_repeat2,
    ACTIONS(44), 9,
      ts_builtin_sym_end,
      sym_translator_comment,
      sym_extracted_comment,
      sym_reference_comment,
      sym_flag_comment,
      sym_previous_comment,
      sym_obsolete_comment,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [57] = 3,
    ACTIONS(48), 1,
      sym_string,
    STATE(4), 1,
      aux_sym_msgctxt_repeat1,
    ACTIONS(46), 10,
      ts_builtin_sym_end,
      sym_translator_comment,
      sym_extracted_comment,
      sym_reference_comment,
      sym_flag_comment,
      sym_previous_comment,
      sym_obsolete_comment,
      anon_sym_msgctxt,
      anon_sym_msgid,
      anon_sym_msgstr_LBRACK,
  [76] = 3,
    ACTIONS(52), 1,
      anon_sym_msgstr_LBRACK,
    STATE(9), 2,
      sym_msgstr_plural,
      aux_sym_message_repeat2,
    ACTIONS(50), 9,
      ts_builtin_sym_end,
      sym_translator_comment,
      sym_extracted_comment,
      sym_reference_comment,
      sym_flag_comment,
      sym_previous_comment,
      sym_obsolete_comment,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [95] = 3,
    ACTIONS(40), 1,
      anon_sym_msgstr_LBRACK,
    STATE(9), 2,
      sym_msgstr_plural,
      aux_sym_message_repeat2,
    ACTIONS(55), 9,
      ts_builtin_sym_end,
      sym_translator_comment,
      sym_extracted_comment,
      sym_reference_comment,
      sym_flag_comment,
      sym_previous_comment,
      sym_obsolete_comment,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [114] = 6,
    ACTIONS(9), 1,
      anon_sym_msgctxt,
    ACTIONS(11), 1,
      anon_sym_msgid,
    STATE(18), 1,
      sym_msgid,
    STATE(30), 1,
      sym_msgctxt,
    STATE(14), 2,
      sym_comment,
      aux_sym_message_repeat1,
    ACTIONS(5), 5,
      sym_translator_comment,
      sym_extracted_comment,
      sym_reference_comment,
      sym_flag_comment,
      sym_previous_comment,
  [138] = 3,
    ACTIONS(48), 1,
      sym_string,
    STATE(4), 1,
      aux_sym_msgctxt_repeat1,
    ACTIONS(57), 9,
      ts_builtin_sym_end,
      sym_translator_comment,
      sym_extracted_comment,
      sym_reference_comment,
      sym_flag_comment,
      sym_previous_comment,
      sym_obsolete_comment,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [156] = 1,
    ACTIONS(38), 9,
      ts_builtin_sym_end,
      sym_translator_comment,
      sym_extracted_comment,
      sym_reference_comment,
      sym_flag_comment,
      sym_previous_comment,
      sym_obsolete_comment,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [168] = 3,
    ACTIONS(62), 2,
      anon_sym_msgctxt,
      anon_sym_msgid,
    STATE(14), 2,
      sym_comment,
      aux_sym_message_repeat1,
    ACTIONS(59), 5,
      sym_translator_comment,
      sym_extracted_comment,
      sym_reference_comment,
      sym_flag_comment,
      sym_previous_comment,
  [184] = 1,
    ACTIONS(44), 9,
      ts_builtin_sym_end,
      sym_translator_comment,
      sym_extracted_comment,
      sym_reference_comment,
      sym_flag_comment,
      sym_previous_comment,
      sym_obsolete_comment,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [196] = 1,
    ACTIONS(42), 9,
      ts_builtin_sym_end,
      sym_translator_comment,
      sym_extracted_comment,
      sym_reference_comment,
      sym_flag_comment,
      sym_previous_comment,
      sym_obsolete_comment,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [208] = 1,
    ACTIONS(55), 9,
      ts_builtin_sym_end,
      sym_translator_comment,
      sym_extracted_comment,
      sym_reference_comment,
      sym_flag_comment,
      sym_previous_comment,
      sym_obsolete_comment,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [220] = 6,
    ACTIONS(40), 1,
      anon_sym_msgstr_LBRACK,
    ACTIONS(64), 1,
      anon_sym_msgid_plural,
    ACTIONS(66), 1,
      anon_sym_msgstr,
    STATE(15), 1,
      sym_msgstr,
    STATE(23), 1,
      sym_msgid_plural,
    STATE(7), 2,
      sym_msgstr_plural,
      aux_sym_message_repeat2,
  [240] = 6,
    ACTIONS(40), 1,
      anon_sym_msgstr_LBRACK,
    ACTIONS(64), 1,
      anon_sym_msgid_plural,
    ACTIONS(66), 1,
      anon_sym_msgstr,
    STATE(13), 1,
      sym_msgstr,
    STATE(22), 1,
      sym_msgid_plural,
    STATE(5), 2,
      sym_msgstr_plural,
      aux_sym_message_repeat2,
  [260] = 1,
    ACTIONS(68), 7,
      sym_translator_comment,
      sym_extracted_comment,
      sym_reference_comment,
      sym_flag_comment,
      sym_previous_comment,
      anon_sym_msgctxt,
      anon_sym_msgid,
  [270] = 6,
    ACTIONS(40), 1,
      anon_sym_msgstr_LBRACK,
    ACTIONS(64), 1,
      anon_sym_msgid_plural,
    ACTIONS(66), 1,
      anon_sym_msgstr,
    STATE(16), 1,
      sym_msgstr,
    STATE(24), 1,
      sym_msgid_plural,
    STATE(6), 2,
      sym_msgstr_plural,
      aux_sym_message_repeat2,
  [290] = 4,
    ACTIONS(40), 1,
      anon_sym_msgstr_LBRACK,
    ACTIONS(66), 1,
      anon_sym_msgstr,
    STATE(15), 1,
      sym_msgstr,
    STATE(7), 2,
      sym_msgstr_plural,
      aux_sym_message_repeat2,
  [304] = 4,
    ACTIONS(40), 1,
      anon_sym_msgstr_LBRACK,
    ACTIONS(66), 1,
      anon_sym_msgstr,
    STATE(16), 1,
      sym_msgstr,
    STATE(6), 2,
      sym_msgstr_plural,
      aux_sym_message_repeat2,
  [318] = 4,
    ACTIONS(40), 1,
      anon_sym_msgstr_LBRACK,
    ACTIONS(66), 1,
      anon_sym_msgstr,
    STATE(17), 1,
      sym_msgstr,
    STATE(10), 2,
      sym_msgstr_plural,
      aux_sym_message_repeat2,
  [332] = 4,
    ACTIONS(48), 1,
      sym_string,
    ACTIONS(72), 1,
      anon_sym_msgstr,
    STATE(4), 1,
      aux_sym_msgctxt_repeat1,
    ACTIONS(70), 2,
      anon_sym_msgid_plural,
      anon_sym_msgstr_LBRACK,
  [346] = 4,
    ACTIONS(48), 1,
      sym_string,
    ACTIONS(74), 1,
      anon_sym_msgstr,
    ACTIONS(76), 1,
      anon_sym_msgstr_LBRACK,
    STATE(4), 1,
      aux_sym_msgctxt_repeat1,
  [359] = 3,
    ACTIONS(48), 1,
      sym_string,
    ACTIONS(78), 1,
      anon_sym_msgid,
    STATE(4), 1,
      aux_sym_msgctxt_repeat1,
  [369] = 2,
    ACTIONS(80), 1,
      sym_string,
    STATE(27), 1,
      aux_sym_msgctxt_repeat1,
  [376] = 2,
    ACTIONS(82), 1,
      sym_string,
    STATE(26), 1,
      aux_sym_msgctxt_repeat1,
  [383] = 2,
    ACTIONS(11), 1,
      anon_sym_msgid,
    STATE(21), 1,
      sym_msgid,
  [390] = 2,
    ACTIONS(84), 1,
      sym_string,
    STATE(25), 1,
      aux_sym_msgctxt_repeat1,
  [397] = 2,
    ACTIONS(86), 1,
      sym_string,
    STATE(8), 1,
      aux_sym_msgctxt_repeat1,
  [404] = 2,
    ACTIONS(88), 1,
      sym_string,
    STATE(12), 1,
      aux_sym_msgctxt_repeat1,
  [411] = 2,
    ACTIONS(11), 1,
      anon_sym_msgid,
    STATE(18), 1,
      sym_msgid,
  [418] = 1,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
  [422] = 1,
    ACTIONS(92), 1,
      aux_sym_msgstr_plural_token1,
  [426] = 1,
    ACTIONS(94), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 19,
  [SMALL_STATE(7)] = 38,
  [SMALL_STATE(8)] = 57,
  [SMALL_STATE(9)] = 76,
  [SMALL_STATE(10)] = 95,
  [SMALL_STATE(11)] = 114,
  [SMALL_STATE(12)] = 138,
  [SMALL_STATE(13)] = 156,
  [SMALL_STATE(14)] = 168,
  [SMALL_STATE(15)] = 184,
  [SMALL_STATE(16)] = 196,
  [SMALL_STATE(17)] = 208,
  [SMALL_STATE(18)] = 220,
  [SMALL_STATE(19)] = 240,
  [SMALL_STATE(20)] = 260,
  [SMALL_STATE(21)] = 270,
  [SMALL_STATE(22)] = 290,
  [SMALL_STATE(23)] = 304,
  [SMALL_STATE(24)] = 318,
  [SMALL_STATE(25)] = 332,
  [SMALL_STATE(26)] = 346,
  [SMALL_STATE(27)] = 359,
  [SMALL_STATE(28)] = 369,
  [SMALL_STATE(29)] = 376,
  [SMALL_STATE(30)] = 383,
  [SMALL_STATE(31)] = 390,
  [SMALL_STATE(32)] = 397,
  [SMALL_STATE(33)] = 404,
  [SMALL_STATE(34)] = 411,
  [SMALL_STATE(35)] = 418,
  [SMALL_STATE(36)] = 422,
  [SMALL_STATE(37)] = 426,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_msgctxt_repeat1, 2, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_msgctxt_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_msgctxt_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 2, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 4, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 3, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msgstr_plural, 4, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_repeat2, 2, 0, 0),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_repeat2, 2, 0, 0), SHIFT_REPEAT(36),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 5, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msgstr, 2, 0, 0),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_repeat1, 2, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msgid, 2, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msgid, 2, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msgid_plural, 2, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msgid_plural, 2, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msgctxt, 2, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [90] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
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
