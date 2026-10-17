#include "m2c.h"

M2C_UNK func_ov112_020e4358(M2C_UNK *, M2C_UNK);    /* extern */
M2C_UNK func_ov112_020e4dd8(M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, M2C_UNK *, s32); /* extern */

void func_ov112_020e49fc(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    u8 sp10[20];
    s32 var_r5;

    var_r5 = arg2;
    if (var_r5 != 0) {
        var_r5 -= 0xA3;
    }
    func_ov112_020e4358(sp10, 9);
    func_ov112_020e4dd8(4, arg0, arg1, var_r5, arg3, arg4, sp10, arg5);
}
