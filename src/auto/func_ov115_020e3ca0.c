#include "m2c.h"

extern M2C_UNK data_ov115_020e9160;

s32 func_ov115_020e3ca0(s32 arg0) {
    u32 temp_r2;

    temp_r2 = (u32) (M2C_FIELD(&data_ov115_020e9160, s32 *, 0x858) << 0x10) >> 0x18;
    if (temp_r2 == 0x20) {
        if ((temp_r2 == arg0) || ((u32) (arg0 - 1) <= 1U)) {
            return 1;
        }
        return 0;
    }
    if (((u32) (temp_r2 - 1) <= 1U) && (arg0 == 1)) {
        return 1;
    }
    if (temp_r2 == arg0) {
        return 1;
    }
    return 0;
}
