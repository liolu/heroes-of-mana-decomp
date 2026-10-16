#include "m2c.h"

s32 func_ov123_020a56b4(u8 *arg0) {
    u8 temp_r0;

    temp_r0 = *arg0;
    if (temp_r0 == 0x7F) {
        return 0;
    }
    if ((u32) temp_r0 < 1U) {
        return 0;
    }
    if ((u32) temp_r0 <= 0xDFU) {
        return 1;
    }
    return 0;
}
