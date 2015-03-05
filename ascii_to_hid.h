#ifndef __ASCII_TO_HID_H__
#define __ASCII_TO_HID_H__
// Look-up table stored in code memory that we use to convert from ASCII
// characters to HID key codes.

#include <stdint.h>

uint8_t modifierLookup(char asciiChar);
uint8_t usbHidKeyCodeFromAsciiChar(char asciiChar);

#endif
