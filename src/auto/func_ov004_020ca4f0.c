#include "m2c.h"

void func_ov004_020ca4f0(void *arg0, s32 arg1) {
    u8 temp_r1;
    s32 var_r1;

    temp_r1 = M2C_FIELD(arg0, u8 *, 0x6C);
    if (arg1 == 1) {
        var_r1 = temp_r1 | 1;
    } else {
        var_r1 = temp_r1 & ~1;
    }
    M2C_FIELD(arg0, u8 *, 0x6C) = var_r1;
}
