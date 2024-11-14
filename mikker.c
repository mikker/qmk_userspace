#include "mikker.h"
#include "features/select_word.h"
#include "features/swapper.h"
#include "features/oneshot.h"

// void keyboard_pre_init_user(void) {
//   // Set our LED pin as output
//   setPinOutput(24);
//   // Turn the LED off
//   // (Due to technical reasons, high is off and low is on)
//   writePinHigh(24);
// }

bool is_oneshot_cancel_key(uint16_t keycode) {
  switch (keycode) {
    case TL_LOWR:
    case TL_UPPR:
      return true;
    default:
      return false;
  }
}

bool is_oneshot_ignored_key(uint16_t keycode) {
  switch (keycode) {
    case TL_LOWR:
    case TL_UPPR:
    case KC_LSFT:
    case OS_SHFT:
    case OS_CTRL:
    case OS_ALT:
    case OS_CMD:
      return true;
    default:
      return false;
  }
}

bool sw_tab_active = false;
bool sw_control_tab_active = false;
bool sw_backtick_active = false;

oneshot_state os_shft_state = os_up_unqueued;
oneshot_state os_ctrl_state = os_up_unqueued;
oneshot_state os_alt_state = os_up_unqueued;
oneshot_state os_cmd_state = os_up_unqueued;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (!process_select_word(keycode, record, SELWORD)) { return false; }

  update_swapper(
      &sw_tab_active, KC_LGUI, KC_TAB, SW_TAB,
      keycode, record
      );
  update_swapper(
      &sw_control_tab_active, KC_LCTL, KC_TAB, SW_CTAB,
      keycode, record
      );
  update_swapper(
      &sw_backtick_active, KC_LGUI, KC_GRAVE, SW_BTICK,
      keycode, record
      );

  update_oneshot(
      &os_shft_state, KC_LSFT, OS_SHFT,
      keycode, record
      );
  update_oneshot(
      &os_ctrl_state, KC_LCTL, OS_CTRL,
      keycode, record
      );
  update_oneshot(
      &os_alt_state, KC_LALT, OS_ALT,
      keycode, record
      );
  update_oneshot(
      &os_cmd_state, KC_LCMD, OS_CMD,
      keycode, record
      );

  switch (keycode) {
    case UPDIR:
      if (record->event.pressed) {
        SEND_STRING("../");
      }
      return false;
  }

  return true;
}
