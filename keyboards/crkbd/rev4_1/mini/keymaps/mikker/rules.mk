SRC += features/swapper.c
SRC += features/select_word.c
SRC += features/oneshot.c

# Activate symbol layer + nav layer at once to toggle third layer
TRI_LAYER_ENABLE = yes

# Features
DYNAMIC_MACRO_ENABLE = yes
CAPS_WORD_ENABLE = yes

CONSOLE_ENABLE = no
COMMAND_ENABLE = no
MOUSEKEY_ENABLE = no
ORYX_ENABLE = yes
# RGB_MATRIX_CUSTOM_KB = yes
SPACE_CADET_ENABLE = no
COMBO_ENABLE = yes

