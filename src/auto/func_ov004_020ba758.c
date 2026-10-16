#include "m2c.h"

s32 func_ov004_020ba758(s32 arg0) {
    if (arg0 <= 8) {
        return 8;
    }
    if (arg0 <= 0x10) {
        return 0x10;
    }
    if (arg0 <= 0x20) {
        return 0x20;
    }
    if (arg0 <= 0x40) {
        return 0x40;
    }
    if (arg0 <= 0x80) {
        return 0x80;
    }
    if (arg0 <= 0x100) {
        return 0x100;
    }
    if (arg0 <= 0x200) {
        return 0x200;
    }
    if (arg0 <= 0x400) {
        return 0x400;
    }
    return 0;
}
