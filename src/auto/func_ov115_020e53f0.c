#include "m2c.h"

M2C_UNK func_ov115_020e675c(M2C_UNK, s32, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_ov115_020e6824(M2C_UNK, s32, u32, s32, s32, s32); /* extern */
extern s32 data_ov115_020e9160;
extern M2C_UNK data_ov115_020e99e4;
extern M2C_UNK data_ov115_020e9a04;

void func_ov115_020e53f0(s32 arg0) {
    s32 var_r5;
    s32 var_r6;
    u8 *var_r7;
    s32 var_r8;
    s32 var_r9;

    var_r5 = 0;
    var_r7 = (u8 *) (&data_ov115_020e9a04);
    var_r8 = 0;
    var_r6 = 1;
    var_r9 = 8;
    do {
        data_ov115_020e9160 = var_r6;
        if (*(&data_ov115_020e99e4 + var_r5) != -1) {
            func_ov115_020e6824(2, var_r8 + 6 + arg0, (u32) M2C_FIELD(var_r7, u32 *, 4) >> 0x18, 0, 0, 0x1C);
            func_ov115_020e675c(2, arg0 + var_r9, 6, 0, 0, 0x1C);
        }
        var_r6 += 0x40;
        var_r7 += 0x10;
        var_r8 += 6;
        var_r9 += 6;
        var_r5 += 1;
    } while (var_r5 < 3);
}
