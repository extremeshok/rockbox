#ifndef KEYMAPS_H
#define KEYMAPS_H

#if (CONFIG_KEYPAD == IPOD_4G_PAD) || (CONFIG_KEYPAD == IPOD_3G_PAD) || \
    (CONFIG_KEYPAD == IPOD_1G2G_PAD)

#define ZX_UP        BUTTON_MENU
#define ZX_DOWN        BUTTON_PLAY
#define ZX_SELECT    BUTTON_SELECT
#define ZX_LEFT        BUTTON_LEFT
#define ZX_RIGHT    BUTTON_RIGHT

#elif CONFIG_KEYPAD == IRIVER_H100_PAD || CONFIG_KEYPAD == IRIVER_H300_PAD

#define ZX_UP      BUTTON_UP
#define ZX_DOWN    BUTTON_DOWN
#define ZX_LEFT    BUTTON_LEFT
#define ZX_RIGHT   BUTTON_RIGHT
#define ZX_SELECT  BUTTON_ON
#define ZX_MENU    BUTTON_MODE

#elif CONFIG_KEYPAD == GIGABEAT_PAD

#define ZX_UP      BUTTON_UP
#define ZX_DOWN    BUTTON_DOWN
#define ZX_LEFT    BUTTON_LEFT
#define ZX_RIGHT   BUTTON_RIGHT
#define ZX_SELECT     BUTTON_SELECT
#define ZX_MENU    BUTTON_MENU

#elif CONFIG_KEYPAD == IAUDIO_X5M5_PAD

#define ZX_RIGHT      BUTTON_RIGHT
#define ZX_LEFT    BUTTON_LEFT
#define ZX_UP    BUTTON_UP
#define ZX_DOWN   BUTTON_DOWN
#define ZX_SELECT     BUTTON_SELECT
#define ZX_MENU    BUTTON_PLAY

#elif CONFIG_KEYPAD == RECORDER_PAD
#define ZX_SELECT BUTTON_PLAY
#define ZX_MENU BUTTON_OFF
#define ZX_LEFT BUTTON_LEFT
#define ZX_RIGHT BUTTON_RIGHT
#define ZX_UP BUTTON_UP
#define ZX_DOWN BUTTON_DOWN

#elif CONFIG_KEYPAD == ARCHOS_AV300_PAD
#define ZX_SELECT BUTTON_SELECT
#define ZX_MENU BUTTON_OFF
#define ZX_LEFT BUTTON_LEFT
#define ZX_RIGHT BUTTON_RIGHT
#define ZX_UP BUTTON_UP
#define ZX_DOWN BUTTON_DOWN

#elif CONFIG_KEYPAD == ONDIO_PAD
#define ZX_SELECT BUTTON_MENU
#define ZX_MENU BUTTON_OFF
#define ZX_LEFT BUTTON_LEFT
#define ZX_RIGHT BUTTON_RIGHT
#define ZX_UP BUTTON_UP
#define ZX_DOWN BUTTON_DOWN

#elif CONFIG_KEYPAD == IRIVER_IFP7XX_PAD
#define ZX_SELECT BUTTON_SELECT 
#define ZX_MENU BUTTON_PLAY
#define ZX_LEFT BUTTON_LEFT
#define ZX_RIGHT BUTTON_RIGHT
#define ZX_UP BUTTON_UP
#define ZX_DOWN BUTTON_DOWN

#elif CONFIG_KEYPAD == IRIVER_H10_PAD
#define ZX_SELECT BUTTON_REW
#define ZX_MENU BUTTON_FF
#define ZX_LEFT BUTTON_LEFT
#define ZX_RIGHT BUTTON_RIGHT
#define ZX_UP BUTTON_SCROLL_UP
#define ZX_DOWN BUTTON_SCROLL_DOWN

#elif (CONFIG_KEYPAD == SANSA_E200_PAD) || \
(CONFIG_KEYPAD == SANSA_C200_PAD)
#define ZX_SELECT BUTTON_SELECT
#define ZX_MENU BUTTON_POWER
#define ZX_LEFT BUTTON_LEFT
#define ZX_RIGHT BUTTON_RIGHT
#define ZX_UP BUTTON_UP
#define ZX_DOWN BUTTON_DOWN

#endif

#endif
