#include "m2c.h"

s32 func_ov117_020eb370(s32 *arg0, s32 *arg1) {
    u32 temp_r0;
    u32 temp_r2;

    temp_r2 = (u32) (*arg0 << 0xB) >> 0x17;
    if ((temp_r2 == 0) && (((u32) (*arg1 << 0xB) >> 0x17) == 0)) {
        return 0;
    }
    if (temp_r2 == 0) {
        return 1;
    }
    temp_r0 = (u32) (*arg1 << 0xB) >> 0x17;
    if (temp_r0 == 0) {
        return -1;
    }
    return temp_r2 - temp_r0;
}
