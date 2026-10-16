#include "m2c.h"

s32 func_ov116_020e553c(s32 arg0) {
    if (arg0 < 0x32) {
        return 5;
    }
    if (arg0 < 0x3C) {
        return 4;
    }
    if (arg0 < 0x46) {
        return 3;
    }
    if (arg0 < 0x50) {
        return 2;
    }
    if (arg0 < 0x64) {
        return 1;
    }
    return 0;
}
