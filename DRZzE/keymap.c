#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
  DANCE_6,
  DANCE_7,
  DANCE_8,
  DANCE_9,
  DANCE_10,
  DANCE_11,
  DANCE_12,
  DANCE_13,
  DANCE_14,
  DANCE_15,
  DANCE_16,
};

#define DUAL_FUNC_0 LT(7, KC_7)
#define DUAL_FUNC_1 LT(7, KC_R)
#define DUAL_FUNC_2 LT(8, KC_9)
#define DUAL_FUNC_3 LT(13, KC_F20)
#define DUAL_FUNC_4 LT(9, KC_8)
#define DUAL_FUNC_5 LT(13, KC_U)
#define DUAL_FUNC_6 LT(4, KC_Z)
#define DUAL_FUNC_7 LT(13, KC_F24)
#define DUAL_FUNC_8 LT(14, KC_P)
#define DUAL_FUNC_9 LT(8, KC_F6)
#define DUAL_FUNC_10 LT(5, KC_Z)
#define DUAL_FUNC_11 LT(8, KC_R)
#define DUAL_FUNC_12 LT(4, KC_F24)
#define DUAL_FUNC_13 LT(1, KC_F10)
#define DUAL_FUNC_14 LT(4, KC_X)
#define DUAL_FUNC_15 LT(12, KC_F2)
#define DUAL_FUNC_16 LT(9, KC_M)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    DUAL_FUNC_0,    DUAL_FUNC_1,    LT(7, KC_2),    LT(5, KC_3),    LT(1, KC_4),    LT(4, KC_5),                                    LT(7, KC_6),    KC_7,           KC_8,           TD(DANCE_6),    LT(5, KC_0),    DUAL_FUNC_2,    
    LT(3, KC_DELETE),LT(9, KC_Q),    LT(7, KC_W),    TD(DANCE_0),    LT(5, KC_R),    LT(8, KC_T),                                    TD(DANCE_7),    TD(DANCE_8),    TD(DANCE_9),    TD(DANCE_10),   LT(7, KC_P),    KC_BSLS,        
    KC_BSPC,        TD(DANCE_1),    LT(3, KC_S),    LT(8, KC_D),    LT(2, KC_F),    LT(1, KC_G),                                    LT(6, KC_H),    LT(2, KC_J),    LT(3, KC_K),    LT(3, KC_L),    TD(DANCE_11),   TD(DANCE_12),   
    OSL(12),        TD(DANCE_2),    MT(MOD_LCTL, KC_X),MT(MOD_LALT, KC_C),TD(DANCE_3),    TD(DANCE_4),                                    TD(DANCE_13),   DUAL_FUNC_3,    DUAL_FUNC_4,    LT(7, KC_DOT),  TD(DANCE_14),   ST_MACRO_0,     
                                                    KC_SPACE,       TD(DANCE_5),                                    TT(1),          TD(DANCE_15)
  ),
  [1] = LAYOUT_voyager(
    KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          ST_MACRO_1,                                     KC_BSPC,        KC_7,           KC_8,           KC_9,           KC_NO,          KC_NO,          
    KC_GRAVE,       KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,                                         KC_SLASH,       DUAL_FUNC_6,    DUAL_FUNC_7,    KC_6,           KC_PLUS,        TO(3),          
    KC_TRANSPARENT, KC_F11,         KC_LEFT_CTRL,   DUAL_FUNC_5,    KC_F14,         KC_F15,                                         KC_ASTR,        DUAL_FUNC_8,    DUAL_FUNC_9,    KC_3,           KC_MINUS,       KC_COMMA,       
    TO(0),          KC_F16,         KC_F17,         KC_F18,         KC_F19,         KC_F20,                                         KC_COLN,        KC_0,           KC_DOT,         KC_DOT,         KC_COMMA,       KC_ENTER,       
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_ENTER
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_LBRC,        KC_RBRC,        KC_PIPE,        KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_ESCAPE,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_GRAVE,       KC_LCBR,        KC_RCBR,        KC_TILD,        OSL(3),         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          DUAL_FUNC_10,   KC_DLR,         KC_PERC,                                        KC_CIRC,        ST_MACRO_2,     KC_RPRN,        KC_UNDS,        KC_AMPR,        KC_TRANSPARENT, 
    TO(0),          KC_PLUS,        KC_MINUS,       DUAL_FUNC_11,   KC_ASTR,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_LABK,        KC_RABK,        KC_MINUS,       KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_ENTER,       KC_COMMA,                                       KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_UP,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RCTL(KC_HOME),  RCTL(KC_END),   
    KC_TRANSPARENT, KC_LEFT,        KC_RIGHT,       DUAL_FUNC_12,   KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_UP,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_DOWN,        KC_TRANSPARENT, DUAL_FUNC_13,   DUAL_FUNC_14,   KC_TRANSPARENT,                                 KC_LEFT,        KC_RIGHT,       KC_LEFT,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, 
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, DUAL_FUNC_15,   KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_DOWN,        KC_TRANSPARENT, KC_DOWN,        KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 TD(DANCE_16),   KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, LCTL(KC_Z),     LALT(LCTL(KC_DELETE)),KC_TRANSPARENT, RGUI(KC_UP),    KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, LCTL(KC_Y),     LGUI(KC_LEFT),  KC_TRANSPARENT, LGUI(KC_RIGHT), KC_RIGHT,                                       KC_TRANSPARENT, KC_TRANSPARENT, RGUI(KC_UP),    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_DOWN),  KC_TRANSPARENT,                                 KC_TRANSPARENT, RGUI(KC_LEFT),  RGUI(KC_DOWN),  RGUI(KC_RIGHT), KC_TRANSPARENT, KC_TRANSPARENT, 
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, LALT(LCTL(KC_T)),LALT(LCTL(KC_S)),KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_ENTER,                                       KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(LCTL(KC_A)),KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RCTL(RSFT(KC_M)),
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RALT(RSFT(KC_N)),ST_MACRO_3,                                     KC_TRANSPARENT, ST_MACRO_4,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 RALT(KC_F8),    ST_MACRO_5,     RALT(KC_EQUAL), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_COMMA,       KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,                                         KC_TRANSPARENT, KC_TRANSPARENT, RGUI(KC_UP),    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F11,         KC_F12,         KC_F13,         KC_F14,         KC_F15,                                         KC_TRANSPARENT, RGUI(KC_LEFT),  RGUI(KC_DOWN),  RGUI(KC_RIGHT), KC_TRANSPARENT, KC_TRANSPARENT, 
    TO(0),          KC_F16,         KC_F17,         KC_F18,         KC_F19,         KC_F20,                                         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,LALT(LCTL(KC_P)),                                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_MUTE,  KC_TRANSPARENT, LALT(LCTL(KC_L)),                                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RALT(RCTL(KC_F18)),
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_MUTE,  
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [8] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 RALT(RCTL(KC_1)),RALT(RCTL(KC_2)),RALT(RCTL(KC_3)),RALT(RCTL(KC_4)),RCTL(KC_TAB),   RCTL(RSFT(KC_TAB)),
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LCTL(LSFT(KC_V)),LCTL(KC_Z),                                     KC_WWW_FORWARD, RCTL(KC_4),     RCTL(KC_5),     RCTL(KC_6),     KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, RCTL(KC_X),     KC_TRANSPARENT, LCTL(KC_C),     LCTL(KC_A),                                     KC_TRANSPARENT, RCTL(KC_1),     RCTL(KC_2),     RCTL(KC_3),     KC_TRANSPARENT, KC_TRANSPARENT, 
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_V),     LCTL(KC_Y),                                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [9] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, RALT(RCTL(KC_M)),RALT(RCTL(KC_Q)),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, RALT(RCTL(KC_L)),RALT(RCTL(KC_P)),RALT(RCTL(KC_R)),RALT(RCTL(KC_U)),KC_TRANSPARENT, 
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [10] = LAYOUT_voyager(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_N,           KC_Z,           KC_X,           KC_R,           KC_G,           KC_V,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_DELETE,      KC_Q,           KC_LEFT_SHIFT,  KC_A,           KC_E,           KC_D,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_RIGHT_CTRL,  
    KC_I,           KC_C,           KC_F,           KC_S,           KC_LEFT_CTRL,   KC_ESCAPE,                                      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_SPACE,       DUAL_FUNC_16,                                   TO(0),          KC_TRANSPARENT
  ),
  [11] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_ESCAPE,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_UP,       KC_TRANSPARENT,                                 KC_MS_BTN1,     KC_MS_LEFT,     KC_MS_RIGHT,    KC_MS_RIGHT,    KC_MS_BTN2,     KC_TRANSPARENT, 
    TO(0),          KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_MS_BTN1,     TO(0),                                          TO(0),          KC_MS_BTN1
  ),
  [12] = LAYOUT_voyager(
    LGUI(KC_1),     LGUI(KC_1),     LGUI(KC_2),     LGUI(KC_3),     RGUI(KC_4),     LGUI(KC_5),                                     RALT(RSFT(KC_A)),RALT(RSFT(KC_B)),RALT(RSFT(KC_C)),RALT(RSFT(KC_D)),LALT(LSFT(KC_E)),KC_TRANSPARENT, 
    KC_TRANSPARENT, LGUI(KC_6),     LGUI(KC_7),     LGUI(KC_8),     LGUI(KC_9),     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    LALT(LCTL(KC_A)),LALT(LCTL(KC_D)),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(LCTL(KC_E)),                                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, LGUI(LCTL(KC_D)),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(LCTL(KC_C)),                                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};



uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case TD(DANCE_0):
            return TAPPING_TERM + 5;
        case TD(DANCE_1):
            return TAPPING_TERM + 5;
        case LT(1, KC_G):
            return TAPPING_TERM + 35;
        case TD(DANCE_2):
            return TAPPING_TERM + 35;
        case TD(DANCE_3):
            return TAPPING_TERM + 35;
        case LT(7, KC_6):
            return TAPPING_TERM + 35;
        case TD(DANCE_8):
            return TAPPING_TERM + 5;
        case TD(DANCE_9):
            return TAPPING_TERM + 5;
        case TD(DANCE_10):
            return TAPPING_TERM + 5;
        case LT(7, KC_P):
            return TAPPING_TERM + 5;
        case TD(DANCE_13):
            return TAPPING_TERM + 5;
        default:
            return TAPPING_TERM;
    }
}

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [1] = { {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {143,255,255}, {143,255,255}, {143,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {143,255,255}, {143,255,255}, {143,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {143,255,255}, {143,255,255}, {143,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {143,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255} },

    [2] = { {0,0,0}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,245,245}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,245,245}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0}, {41,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {169,255,255}, {152,255,255}, {0,0,0}, {252,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {252,218,204}, {252,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {201,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {201,218,204}, {0,0,0}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {201,218,204}, {0,245,245}, {0,245,245}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [6] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [7] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [8] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {129,255,255}, {201,218,204}, {201,218,204}, {201,218,204}, {138,255,255}, {146,255,255}, {252,218,204}, {201,218,204}, {201,218,204}, {201,218,204}, {0,0,0}, {0,0,0}, {0,0,255}, {201,218,204}, {201,218,204}, {201,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [10] = { {138,255,255}, {129,255,255}, {138,255,255}, {129,255,255}, {138,255,255}, {138,255,255}, {138,255,255}, {138,255,255}, {129,255,255}, {138,255,255}, {129,255,255}, {138,255,255}, {138,255,255}, {138,255,255}, {138,255,255}, {138,255,255}, {138,255,255}, {138,255,255}, {138,255,255}, {138,255,255}, {138,255,255}, {138,255,255}, {138,255,255}, {138,255,255}, {138,255,255}, {138,255,255}, {201,218,204}, {201,218,204}, {201,218,204}, {201,218,204}, {201,218,204}, {201,218,204}, {201,218,204}, {201,218,204}, {201,218,204}, {201,218,204}, {201,218,204}, {201,218,204}, {201,218,204}, {201,218,204}, {201,218,204}, {201,218,204}, {201,218,204}, {201,218,204}, {201,218,204}, {201,218,204}, {201,218,204}, {201,218,204}, {201,218,204}, {201,218,204}, {168,218,204}, {201,218,204} },

    [11] = { {252,239,230}, {252,239,230}, {252,239,230}, {252,239,230}, {252,239,230}, {252,239,230}, {252,239,230}, {252,239,230}, {252,239,230}, {252,239,230}, {252,239,230}, {252,239,230}, {252,239,230}, {252,239,230}, {252,239,230}, {252,239,230}, {252,239,230}, {252,239,230}, {252,239,230}, {252,239,230}, {252,239,230}, {252,239,230}, {252,239,230}, {252,239,230}, {252,239,230}, {252,239,230}, {252,239,230}, {252,239,230}, {252,239,230}, {252,239,230}, {252,239,230}, {252,239,230}, {252,239,230}, {252,239,230}, {252,239,230}, {252,239,230}, {252,239,230}, {252,239,230}, {252,239,230}, {252,239,230}, {252,239,230}, {252,239,230}, {252,239,230}, {252,239,230}, {252,239,230}, {252,239,230}, {252,239,230}, {252,239,230}, {252,239,230}, {252,239,230}, {252,239,230}, {252,239,230} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
    case 7:
      set_layer_color(7);
      break;
    case 8:
      set_layer_color(8);
      break;
    case 10:
      set_layer_color(10);
      break;
    case 11:
      set_layer_color(11);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_4)SS_DELAY(100)  SS_TAP(X_1)SS_DELAY(100)  SS_TAP(X_8)SS_DELAY(100)  SS_TAP(X_8)SS_DELAY(100)  SS_TAP(X_9)SS_DELAY(100)  SS_TAP(X_9));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_APPLICATION)SS_DELAY(100)  SS_TAP(X_S)SS_DELAY(100)  SS_TAP(X_O));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_RSFT(SS_TAP(X_9)));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_LEFT_ALT)SS_DELAY(100)  SS_TAP(X_H)SS_DELAY(100)  SS_TAP(X_N)SS_DELAY(100)  SS_TAP(X_S)SS_DELAY(100)  SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_EQUAL)SS_DELAY(100)  SS_TAP(X_T)SS_DELAY(100)  SS_TAP(X_O)SS_DELAY(100)  SS_TAP(X_D)SS_DELAY(100)  SS_TAP(X_TAB));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_EQUAL)SS_DELAY(100)  SS_TAP(X_X)SS_DELAY(100)  SS_TAP(X_L)SS_DELAY(100)  SS_TAP(X_O)SS_DELAY(100)  SS_TAP(X_TAB));
    }
    break;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_ESCAPE);
        } else {
          unregister_code16(KC_ESCAPE);
        }
      } else {
        if (record->event.pressed) {
          layer_move(1);
        } else {
          layer_move(1);
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_1);
        } else {
          unregister_code16(KC_1);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(LCTL(KC_T)));
        } else {
          unregister_code16(LALT(LCTL(KC_T)));
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_EQUAL);
        } else {
          unregister_code16(KC_EQUAL);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_MINUS);
        } else {
          unregister_code16(KC_MINUS);
        }  
      }  
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_M);
        } else {
          unregister_code16(KC_M);
        }
      } else {
        if (record->event.pressed) {
          register_code16(RCTL(KC_HOME));
        } else {
          unregister_code16(RCTL(KC_HOME));
        }  
      }  
      return false;
    case DUAL_FUNC_4:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_COMMA);
        } else {
          unregister_code16(KC_COMMA);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F13);
        } else {
          unregister_code16(KC_F13);
        }  
      }  
      return false;
    case DUAL_FUNC_5:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_1));
        } else {
          unregister_code16(LCTL(KC_1));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(KC_1));
        } else {
          unregister_code16(LCTL(KC_1));
        }  
      }  
      return false;
    case DUAL_FUNC_6:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_4);
        } else {
          unregister_code16(KC_4);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_PLUS);
        } else {
          unregister_code16(KC_PLUS);
        }  
      }  
      return false;
    case DUAL_FUNC_7:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_5);
        } else {
          unregister_code16(KC_5);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_MINUS);
        } else {
          unregister_code16(KC_MINUS);
        }  
      }  
      return false;
    case DUAL_FUNC_8:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_1);
        } else {
          unregister_code16(KC_1);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_SLASH);
        } else {
          unregister_code16(KC_SLASH);
        }  
      }  
      return false;
    case DUAL_FUNC_9:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_2);
        } else {
          unregister_code16(KC_2);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_ASTR);
        } else {
          unregister_code16(KC_ASTR);
        }  
      }  
      return false;
    case DUAL_FUNC_10:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_HASH);
        } else {
          unregister_code16(KC_HASH);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(KC_1));
        } else {
          unregister_code16(LCTL(KC_1));
        }  
      }  
      return false;
    case DUAL_FUNC_11:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_SLASH);
        } else {
          unregister_code16(KC_SLASH);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_BSLS);
        } else {
          unregister_code16(KC_BSLS);
        }  
      }  
      return false;
    case DUAL_FUNC_12:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_UP));
        } else {
          unregister_code16(LCTL(KC_UP));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(LSFT(KC_UP)));
        } else {
          unregister_code16(LCTL(LSFT(KC_UP)));
        }  
      }  
      return false;
    case DUAL_FUNC_13:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_LEFT));
        } else {
          unregister_code16(LCTL(KC_LEFT));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(LSFT(KC_LEFT)));
        } else {
          unregister_code16(LCTL(LSFT(KC_LEFT)));
        }  
      }  
      return false;
    case DUAL_FUNC_14:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_RIGHT));
        } else {
          unregister_code16(LCTL(KC_RIGHT));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(LSFT(KC_RIGHT)));
        } else {
          unregister_code16(LCTL(LSFT(KC_RIGHT)));
        }  
      }  
      return false;
    case DUAL_FUNC_15:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_DOWN));
        } else {
          unregister_code16(LCTL(KC_DOWN));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(LSFT(KC_DOWN)));
        } else {
          unregister_code16(LCTL(LSFT(KC_DOWN)));
        }  
      }  
      return false;
    case DUAL_FUNC_16:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_ENTER);
        } else {
          unregister_code16(KC_ENTER);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_ENTER);
        } else {
          unregister_code16(KC_ENTER);
        }  
      }  
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}

typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[17];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_E);
        tap_code16(KC_E);
        tap_code16(KC_E);
    }
    if(state->count > 3) {
        tap_code16(KC_E);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_E); break;
        case SINGLE_HOLD: layer_on(4); break;
        case DOUBLE_TAP: register_code16(KC_E); register_code16(KC_E); break;
        case DOUBLE_HOLD: register_code16(US_EACU); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_E); register_code16(KC_E);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_E); break;
        case SINGLE_HOLD:
          layer_off(4);
        break;
        case DOUBLE_TAP: unregister_code16(KC_E); break;
        case DOUBLE_HOLD: unregister_code16(US_EACU); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_E); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_A);
        tap_code16(KC_A);
        tap_code16(KC_A);
    }
    if(state->count > 3) {
        tap_code16(KC_A);
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(KC_A); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_SHIFT); break;
        case DOUBLE_TAP: register_code16(KC_A); register_code16(KC_A); break;
        case DOUBLE_HOLD: register_code16(US_AACU); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_A); register_code16(KC_A);
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(KC_A); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_SHIFT); break;
        case DOUBLE_TAP: unregister_code16(KC_A); break;
        case DOUBLE_HOLD: unregister_code16(US_AACU); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_A); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_Z);
        tap_code16(KC_Z);
        tap_code16(KC_Z);
    }
    if(state->count > 3) {
        tap_code16(KC_Z);
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(KC_Z); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_SHIFT); break;
        case DOUBLE_TAP: register_code16(KC_Z); register_code16(KC_Z); break;
        case DOUBLE_HOLD: register_code16(LCTL(KC_Z)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_Z); register_code16(KC_Z);
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(KC_Z); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_SHIFT); break;
        case DOUBLE_TAP: unregister_code16(KC_Z); break;
        case DOUBLE_HOLD: unregister_code16(LCTL(KC_Z)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_Z); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_V);
        tap_code16(KC_V);
        tap_code16(KC_V);
    }
    if(state->count > 3) {
        tap_code16(KC_V);
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(KC_V); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_GUI); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_I)); break;
        case DOUBLE_HOLD: register_code16(LCTL(LSFT(KC_V))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_V); register_code16(KC_V);
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(KC_V); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_GUI); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_I)); break;
        case DOUBLE_HOLD: unregister_code16(LCTL(LSFT(KC_V))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_V); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(tap_dance_state_t *state, void *user_data);
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void on_dance_4(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_B);
        tap_code16(KC_B);
        tap_code16(KC_B);
    }
    if(state->count > 3) {
        tap_code16(KC_B);
    }
}

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(KC_B); break;
        case SINGLE_HOLD: register_code16(LALT(LCTL(KC_B))); break;
        case DOUBLE_TAP: register_code16(LCTL(LGUI(KC_B))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_B); register_code16(KC_B);
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(KC_B); break;
        case SINGLE_HOLD: unregister_code16(LALT(LCTL(KC_B))); break;
        case DOUBLE_TAP: unregister_code16(LCTL(LGUI(KC_B))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_B); break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(tap_dance_state_t *state, void *user_data);
void dance_5_finished(tap_dance_state_t *state, void *user_data);
void dance_5_reset(tap_dance_state_t *state, void *user_data);

void on_dance_5(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_TAB);
        tap_code16(KC_TAB);
        tap_code16(KC_TAB);
    }
    if(state->count > 3) {
        tap_code16(KC_TAB);
    }
}

void dance_5_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(KC_TAB); break;
        case SINGLE_HOLD: register_code16(LALT(LCTL(KC_C))); break;
        case DOUBLE_TAP: register_code16(KC_ENTER); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_TAB); register_code16(KC_TAB);
    }
}

void dance_5_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(KC_TAB); break;
        case SINGLE_HOLD: unregister_code16(LALT(LCTL(KC_C))); break;
        case DOUBLE_TAP: unregister_code16(KC_ENTER); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_TAB); break;
    }
    dance_state[5].step = 0;
}
void on_dance_6(tap_dance_state_t *state, void *user_data);
void dance_6_finished(tap_dance_state_t *state, void *user_data);
void dance_6_reset(tap_dance_state_t *state, void *user_data);

void on_dance_6(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_9);
        tap_code16(KC_9);
        tap_code16(KC_9);
    }
    if(state->count > 3) {
        tap_code16(KC_9);
    }
}

void dance_6_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP: register_code16(KC_9); break;
        case DOUBLE_TAP: layer_move(10); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_9); register_code16(KC_9);
    }
}

void dance_6_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
        case SINGLE_TAP: unregister_code16(KC_9); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_9); break;
    }
    dance_state[6].step = 0;
}
void on_dance_7(tap_dance_state_t *state, void *user_data);
void dance_7_finished(tap_dance_state_t *state, void *user_data);
void dance_7_reset(tap_dance_state_t *state, void *user_data);

void on_dance_7(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_Y);
        tap_code16(KC_Y);
        tap_code16(KC_Y);
    }
    if(state->count > 3) {
        tap_code16(KC_Y);
    }
}

void dance_7_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = dance_step(state);
    switch (dance_state[7].step) {
        case SINGLE_TAP: register_code16(KC_Y); break;
        case SINGLE_HOLD: register_code16(KC_RBRC); break;
        case DOUBLE_TAP: register_code16(KC_Y); register_code16(KC_Y); break;
        case DOUBLE_HOLD: register_code16(RCTL(KC_Y)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_Y); register_code16(KC_Y);
    }
}

void dance_7_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[7].step) {
        case SINGLE_TAP: unregister_code16(KC_Y); break;
        case SINGLE_HOLD: unregister_code16(KC_RBRC); break;
        case DOUBLE_TAP: unregister_code16(KC_Y); break;
        case DOUBLE_HOLD: unregister_code16(RCTL(KC_Y)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_Y); break;
    }
    dance_state[7].step = 0;
}
void on_dance_8(tap_dance_state_t *state, void *user_data);
void dance_8_finished(tap_dance_state_t *state, void *user_data);
void dance_8_reset(tap_dance_state_t *state, void *user_data);

void on_dance_8(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_U);
        tap_code16(KC_U);
        tap_code16(KC_U);
    }
    if(state->count > 3) {
        tap_code16(KC_U);
    }
}

void dance_8_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[8].step = dance_step(state);
    switch (dance_state[8].step) {
        case SINGLE_TAP: register_code16(KC_U); break;
        case SINGLE_HOLD: register_code16(KC_LBRC); break;
        case DOUBLE_TAP: register_code16(KC_U); register_code16(KC_U); break;
        case DOUBLE_HOLD: register_code16(US_UACU); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_U); register_code16(KC_U);
    }
}

void dance_8_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[8].step) {
        case SINGLE_TAP: unregister_code16(KC_U); break;
        case SINGLE_HOLD: unregister_code16(KC_LBRC); break;
        case DOUBLE_TAP: unregister_code16(KC_U); break;
        case DOUBLE_HOLD: unregister_code16(US_UACU); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_U); break;
    }
    dance_state[8].step = 0;
}
void on_dance_9(tap_dance_state_t *state, void *user_data);
void dance_9_finished(tap_dance_state_t *state, void *user_data);
void dance_9_reset(tap_dance_state_t *state, void *user_data);

void on_dance_9(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_I);
        tap_code16(KC_I);
        tap_code16(KC_I);
    }
    if(state->count > 3) {
        tap_code16(KC_I);
    }
}

void dance_9_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[9].step = dance_step(state);
    switch (dance_state[9].step) {
        case SINGLE_TAP: register_code16(KC_I); break;
        case DOUBLE_TAP: register_code16(KC_I); register_code16(KC_I); break;
        case DOUBLE_HOLD: register_code16(US_IACU); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_I); register_code16(KC_I);
    }
}

void dance_9_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[9].step) {
        case SINGLE_TAP: unregister_code16(KC_I); break;
        case DOUBLE_TAP: unregister_code16(KC_I); break;
        case DOUBLE_HOLD: unregister_code16(US_IACU); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_I); break;
    }
    dance_state[9].step = 0;
}
void on_dance_10(tap_dance_state_t *state, void *user_data);
void dance_10_finished(tap_dance_state_t *state, void *user_data);
void dance_10_reset(tap_dance_state_t *state, void *user_data);

void on_dance_10(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_O);
        tap_code16(KC_O);
        tap_code16(KC_O);
    }
    if(state->count > 3) {
        tap_code16(KC_O);
    }
}

void dance_10_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[10].step = dance_step(state);
    switch (dance_state[10].step) {
        case SINGLE_TAP: register_code16(KC_O); break;
        case DOUBLE_TAP: register_code16(KC_O); register_code16(KC_O); break;
        case DOUBLE_HOLD: register_code16(US_OACU); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_O); register_code16(KC_O);
    }
}

void dance_10_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[10].step) {
        case SINGLE_TAP: unregister_code16(KC_O); break;
        case DOUBLE_TAP: unregister_code16(KC_O); break;
        case DOUBLE_HOLD: unregister_code16(US_OACU); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_O); break;
    }
    dance_state[10].step = 0;
}
void on_dance_11(tap_dance_state_t *state, void *user_data);
void dance_11_finished(tap_dance_state_t *state, void *user_data);
void dance_11_reset(tap_dance_state_t *state, void *user_data);

void on_dance_11(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_COLN);
        tap_code16(KC_COLN);
        tap_code16(KC_COLN);
    }
    if(state->count > 3) {
        tap_code16(KC_COLN);
    }
}

void dance_11_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[11].step = dance_step(state);
    switch (dance_state[11].step) {
        case SINGLE_TAP: register_code16(KC_COLN); break;
        case SINGLE_HOLD: register_code16(KC_RIGHT_SHIFT); break;
        case DOUBLE_TAP: register_code16(KC_SCLN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_COLN); register_code16(KC_COLN);
    }
}

void dance_11_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[11].step) {
        case SINGLE_TAP: unregister_code16(KC_COLN); break;
        case SINGLE_HOLD: unregister_code16(KC_RIGHT_SHIFT); break;
        case DOUBLE_TAP: unregister_code16(KC_SCLN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_COLN); break;
    }
    dance_state[11].step = 0;
}
void on_dance_12(tap_dance_state_t *state, void *user_data);
void dance_12_finished(tap_dance_state_t *state, void *user_data);
void dance_12_reset(tap_dance_state_t *state, void *user_data);

void on_dance_12(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_QUOTE);
        tap_code16(KC_QUOTE);
        tap_code16(KC_QUOTE);
    }
    if(state->count > 3) {
        tap_code16(KC_QUOTE);
    }
}

void dance_12_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[12].step = dance_step(state);
    switch (dance_state[12].step) {
        case SINGLE_TAP: register_code16(KC_QUOTE); break;
        case SINGLE_HOLD: register_code16(KC_DQUO); break;
        case DOUBLE_TAP: register_code16(KC_DQUO); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_QUOTE); register_code16(KC_QUOTE);
    }
}

void dance_12_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[12].step) {
        case SINGLE_TAP: unregister_code16(KC_QUOTE); break;
        case SINGLE_HOLD: unregister_code16(KC_DQUO); break;
        case DOUBLE_TAP: unregister_code16(KC_DQUO); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_QUOTE); break;
    }
    dance_state[12].step = 0;
}
void on_dance_13(tap_dance_state_t *state, void *user_data);
void dance_13_finished(tap_dance_state_t *state, void *user_data);
void dance_13_reset(tap_dance_state_t *state, void *user_data);

void on_dance_13(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_N);
        tap_code16(KC_N);
        tap_code16(KC_N);
    }
    if(state->count > 3) {
        tap_code16(KC_N);
    }
}

void dance_13_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[13].step = dance_step(state);
    switch (dance_state[13].step) {
        case SINGLE_TAP: register_code16(KC_N); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_END)); break;
        case DOUBLE_TAP: register_code16(KC_N); register_code16(KC_N); break;
        case DOUBLE_HOLD: register_code16(US_NTIL); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_N); register_code16(KC_N);
    }
}

void dance_13_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[13].step) {
        case SINGLE_TAP: unregister_code16(KC_N); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_END)); break;
        case DOUBLE_TAP: unregister_code16(KC_N); break;
        case DOUBLE_HOLD: unregister_code16(US_NTIL); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_N); break;
    }
    dance_state[13].step = 0;
}
void on_dance_14(tap_dance_state_t *state, void *user_data);
void dance_14_finished(tap_dance_state_t *state, void *user_data);
void dance_14_reset(tap_dance_state_t *state, void *user_data);

void on_dance_14(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_SLASH);
        tap_code16(KC_SLASH);
        tap_code16(KC_SLASH);
    }
    if(state->count > 3) {
        tap_code16(KC_SLASH);
    }
}

void dance_14_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[14].step = dance_step(state);
    switch (dance_state[14].step) {
        case SINGLE_TAP: register_code16(KC_SLASH); break;
        case SINGLE_HOLD: register_code16(KC_RIGHT_SHIFT); break;
        case DOUBLE_TAP: layer_move(3); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_SLASH); register_code16(KC_SLASH);
    }
}

void dance_14_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[14].step) {
        case SINGLE_TAP: unregister_code16(KC_SLASH); break;
        case SINGLE_HOLD: unregister_code16(KC_RIGHT_SHIFT); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_SLASH); break;
    }
    dance_state[14].step = 0;
}
void on_dance_15(tap_dance_state_t *state, void *user_data);
void dance_15_finished(tap_dance_state_t *state, void *user_data);
void dance_15_reset(tap_dance_state_t *state, void *user_data);

void on_dance_15(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_ENTER);
        tap_code16(KC_ENTER);
        tap_code16(KC_ENTER);
    }
    if(state->count > 3) {
        tap_code16(KC_ENTER);
    }
}

void dance_15_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[15].step = dance_step(state);
    switch (dance_state[15].step) {
        case SINGLE_TAP: register_code16(KC_ENTER); break;
        case DOUBLE_TAP: register_code16(KC_MS_BTN1); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_ENTER); register_code16(KC_ENTER);
    }
}

void dance_15_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[15].step) {
        case SINGLE_TAP: unregister_code16(KC_ENTER); break;
        case DOUBLE_TAP: unregister_code16(KC_MS_BTN1); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_ENTER); break;
    }
    dance_state[15].step = 0;
}
void dance_16_finished(tap_dance_state_t *state, void *user_data);
void dance_16_reset(tap_dance_state_t *state, void *user_data);

void dance_16_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[16].step = dance_step(state);
    switch (dance_state[16].step) {
        case DOUBLE_TAP: layer_move(0); break;
    }
}

void dance_16_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[16].step) {
    }
    dance_state[16].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
        [DANCE_6] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_6, dance_6_finished, dance_6_reset),
        [DANCE_7] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_7, dance_7_finished, dance_7_reset),
        [DANCE_8] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_8, dance_8_finished, dance_8_reset),
        [DANCE_9] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_9, dance_9_finished, dance_9_reset),
        [DANCE_10] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_10, dance_10_finished, dance_10_reset),
        [DANCE_11] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_11, dance_11_finished, dance_11_reset),
        [DANCE_12] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_12, dance_12_finished, dance_12_reset),
        [DANCE_13] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_13, dance_13_finished, dance_13_reset),
        [DANCE_14] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_14, dance_14_finished, dance_14_reset),
        [DANCE_15] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_15, dance_15_finished, dance_15_reset),
        [DANCE_16] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_16_finished, dance_16_reset),
};
