#include "m2c.h"

s32 func_ov004_020ba93c(void *arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
        case 0x8:
            return 3;
        case 0x10:
            return 4;
        case 0x20:
            return 5;
        case 0x40:
            return 6;
        case 0x80:
            return 7;
        case 0x100:
            return 8;
        case 0x200:
            return 9;
        case 0x400:
            return 0xA;
        default:
            return 0;
    }
}
