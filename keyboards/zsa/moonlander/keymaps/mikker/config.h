/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/

#define USB_SUSPEND_WAKEUP_DELAY 0
#define SERIAL_NUMBER "xbNqp/qd7oK"
#define LAYER_STATE_8BIT
#define COMBO_COUNT 3

#define RGB_MATRIX_STARTUP_SPD 60

#ifndef __ASSEMBLER__
// Define all of custom keycodes. Needs to be protected.
#include "quantum/keycodes.h"
#define SW_TAB QK_USER
#define SW_CTAB QK_USER + 1
#define SW_BTICK QK_USER + 2
#define SELWORD QK_USER + 3
#define UPDIR QK_USER + 4
#define OS_SHFT QK_USER + 5
#define OS_CTRL QK_USER + 6
#define OS_ALT QK_USER + 7
#define OS_CMD QK_USER + 8
#endif


