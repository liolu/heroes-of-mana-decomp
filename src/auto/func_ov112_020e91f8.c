#include "m2c.h"

extern u8 data_ov112_020ed784;

s32 func_ov112_020e91f8(s32 arg0) {
    u32 temp_r0;

    temp_r0 = (u32) (M2C_FIELD((&data_ov112_020ed784 + (arg0 * 0x204)), u16 *, 0x202) << 0x1E) >> 0x1E;
    switch (temp_r0) {
        case 0:
        case 3:
            return 0;
        case 1:
        case 2:
            return 1;
        default:
            return 0;
    }
}
