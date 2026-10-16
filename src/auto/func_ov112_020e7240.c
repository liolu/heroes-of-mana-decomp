#include "m2c.h"

s32 func_ov112_020e7240(u32 *arg0, u32 *arg1) {
    u32 temp_r0;
    u32 temp_r2;

    temp_r2 = (u32) *arg0 >> 0x10;
    if ((temp_r2 == 0) && (((u32) *arg1 >> 0x10) == 0)) {
        return 0;
    }
    if (temp_r2 == 0) {
        return 1;
    }
    temp_r0 = (u32) *arg1 >> 0x10;
    if (temp_r0 == 0) {
        return -1;
    }
    return temp_r2 - temp_r0;
}
