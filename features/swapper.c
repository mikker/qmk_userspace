#include "swapper.h"

// Source: https://github.com/callum-oakley/qmk_firmware/blob/master/users/callum/swapper.c
//
// Modified to allow shift while swapping. ~mikker
void update_swapper(
    bool *active,
    uint16_t cmdish,
    uint16_t tabish,
    uint16_t trigger,
    uint16_t keycode,
    keyrecord_t *record
) {
    if (keycode == trigger) {
        if (record->event.pressed) {
            if (!*active) {
                *active = true;
                register_code(cmdish);
            }
            register_code(tabish);
        } else {
            unregister_code(tabish);
            // Don't unregister cmdish until some other key is hit or released.
        }
    } else if (*active) {
        if (keycode != KC_LSFT && keycode != KC_RSFT) {
            unregister_code(cmdish);
            *active = false;
        }
    }
}

