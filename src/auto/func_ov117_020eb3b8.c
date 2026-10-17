#include "m2c.h"

extern M2C_UNK data_ov117_020efee4;

s32 func_ov117_020eb3b8(s32 *arg0, s32 *arg1) {
    u32 temp_r2;
    u32 temp_r3;

    temp_r3 = (u32) (*arg0 << 0x14) >> 0x17;
    if ((temp_r3 == 0) && (((u32) (*arg1 << 0x14) >> 0x17) == 0)) {
        return 0;
    }
    if (temp_r3 == 0) {
        return 1;
    }
    temp_r2 = (u32) (*arg1 << 0x14) >> 0x17;
    if (temp_r2 == 0) {
        return -1;
    }
    return *(s32 *) ((u8 *) &data_ov117_020efee4 + (temp_r3 * 4)) - *(s32 *) ((u8 *) &data_ov117_020efee4 + (temp_r2 * 4));
}
