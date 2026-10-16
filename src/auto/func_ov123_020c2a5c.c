#include "m2c.h"

s32 func_ov123_020c2a5c(u32 arg0) {
    if (arg0 <= 0x39U) {
        return arg0 - 0x30;
    }
    if (arg0 <= 0x46U) {
        return arg0 - 0x37;
    }
    return arg0 - 0x57;
}
