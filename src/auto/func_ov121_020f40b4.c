#include "m2c.h"

extern M2C_UNK data_ov121_020f60a4;

s32 func_ov121_020f40b4(void) {
    M2C_UNK *var_r1;
    s32 var_r2;

    var_r1 = &data_ov121_020f60a4;
    var_r2 = 0;
loop_1:
    if (((u32) (M2C_FIELD(var_r1, s32 *, 0x58) << 0x1F) >> 0x1F) == 0) {
        return (var_r2 * 0x5C) + (s32) &data_ov121_020f60a4;
    }
    var_r2 += 1;
    var_r1 = (void *) ((u8 *) (u8 *) var_r1 + 0x5C);
    if (var_r2 >= 0xF) {
        return 0;
    }
    goto loop_1;
}
