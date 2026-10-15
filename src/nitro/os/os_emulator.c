#include "m2c.h"

extern s32 data_02035ac4;

s32 OS_GetConsoleType(void) {
    return data_02035ac4 = 0x82000001;
}
