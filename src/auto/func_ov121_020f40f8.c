#include "m2c.h"

extern u8 data_ov121_020f60a4;

s32 func_ov121_020f40f8(s32 arg0) {
    s32 var_r2;
    u8 *var_r3;

    var_r3 = &data_ov121_020f60a4;
    var_r2 = 0;
loop_1:
    if ((((u32) (*(s32 *) (var_r3 + 0x58) << 0x1F) >> 0x1F) != 0) && (arg0 == ((u32) * (u32 *) (var_r3 + 0x54) >> 0x10))) {
        return (var_r2 * 0x5C) + (s32) &data_ov121_020f60a4;
    }
    var_r2 += 1;
    var_r3 += 0x5C;
    if (var_r2 >= 0xF) {
        return 0;
    }
    goto loop_1;
}
