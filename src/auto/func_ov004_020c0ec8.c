#include "m2c.h"

s32 func_ov004_020c0ec8(void *arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
        case 0x1:
            return 0x06800000;
        case 0x2:
            return 0x06820000;
        case 0x4:
            return 0x06840000;
        case 0x8:
            return 0x06860000;
        case 0x10:
            return 0x06880000;
        case 0x20:
            return 0x06890000;
        case 0x40:
            return 0x06894000;
        case 0x80:
            return 0x06898000;
        case 0x100:
            return 0x068A0000;
        default:
            return 0;
    }
}
