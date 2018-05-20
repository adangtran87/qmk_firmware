#include "dz60.h"

// Layer Definitions
#define _BASE 0
#define _NAVI 1
#define _PROG 2
#define _SYS_ 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Base Layer */
  LAYOUT(
    KC_GRV,          KC_1,     KC_2,     KC_3,       KC_4,               KC_5,    KC_6,     KC_7,     KC_8,   KC_9,     KC_0,      KC_MINS,  KC_EQL,   KC_NO,    KC_NO,
    KC_TAB,          KC_Q,     KC_W,     KC_E,       KC_R,               KC_T,    KC_Y,     KC_U,     KC_I,   KC_O,     KC_P,      KC_LBRC,  KC_RBRC,  KC_BSLS,
    LCTL_T(KC_ESC),  KC_A,     KC_S,     KC_D,       KC_F,               KC_G,    KC_H,     KC_J,     KC_K,   KC_L,     KC_SCLN,   KC_QUOT,  KC_ENT,
    KC_LSFT,         KC_NO,    KC_Z,     KC_X,       KC_C,               KC_V,    KC_B,     KC_N,     KC_M,   KC_COMM,  KC_DOT,    KC_SLSH,  KC_RSFT,  KC_NO,
    MO(_SYS_),       KC_LGUI,  KC_LALT,  MO(_NAVI),  LT(_PROG,KC_BSPC),  KC_SPC,  KC_RALT,  KC_RGUI,  KC_NO,  KC_NO,    KC_NO),

  /* Navigation and Utility Keys */
  LAYOUT(
    KC_NO,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,  KC_F6,    KC_F7,    KC_F8,   KC_F9,     KC_F10,   KC_F11,  KC_F12,  KC_NO,  RGB_TOG,
    KC_NO,  KC_NO,    KC_NO,    KC_PGUP,  KC_AGAIN, KC_NO,  KC_NO,    KC_NO,    KC_INS,  KC_NO,     KC_PSCR,  KC_NO,   KC_NO,   KC_NO,
    KC_NO,  KC_HOME,  KC_NO,    KC_PGDN,  KC_END,   KC_NO,  KC_LEFT,  KC_DOWN,  KC_UP,   KC_RIGHT,  KC_NO,    KC_NO,   KC_NO,
    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,   KC_NO,     KC_NO,    KC_NO,   KC_NO,   KC_NO,
    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_DEL,   KC_NO,  KC_NO,    KC_NO,    KC_NO,   KC_NO,     KC_NO),

  /* Coding/VIM Layer */
  LAYOUT(
    KC_NO,  KC_NO,    KC_NO,  KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,   KC_NO,   KC_NO,  KC_NO,  KC_NO,  KC_NO,
    KC_NO,  KC_NO,    KC_NO,  KC_NO,  KC_LCBR,  KC_NO,    KC_NO,    KC_RCBR,  KC_NO,  KC_NO,   KC_NO,   KC_NO,  KC_NO,  KC_NO,
    KC_NO,  KC_CIRC,  KC_NO,  KC_NO,  KC_LPRN,  KC_ASTR,  KC_AMPR,  KC_RPRN,  KC_NO,  KC_DLR,  KC_NO,   KC_NO,  KC_NO,
    KC_NO,  KC_NO,    KC_NO,  KC_NO,  KC_NO,    KC_LBRC,  KC_PERC,  KC_RBRC,  KC_NO,  KC_NO,   KC_NO,   KC_NO,  KC_NO,  KC_NO,
    KC_NO,  KC_NO,    KC_NO,  KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,   KC_NO),

  /* System Layer */
  LAYOUT(
    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_NO,  KC_NO,  KC_NO,  KC_SLEP,
    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_VOLU,  KC_NO,    KC_NO,   KC_NO,  KC_NO,  KC_NO,
    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_MSTP,  KC_VOLD,  KC_MPLY,  KC_NO,   KC_NO,  KC_NO,
    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_NO,  KC_NO,  KC_NO,
    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO),
};

uint32_t layer_state_set_user(uint32_t state) {
  switch (biton32(state)) {
    case _SYS_:
      rgblight_sethsv_gold();
      break;

    case _PROG:
      rgblight_sethsv_coral();
      break;

    case _NAVI:
      rgblight_sethsv_teal();
      break;

    default:
      rgblight_sethsv_white();
      break;
  }
  return state;
}
