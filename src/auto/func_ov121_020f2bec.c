#include "m2c.h"

M2C_UNK MIi_CpuCopy16(s32, s32, s32);
s32 G2_GetBG2ScrPtr();

void func_ov121_020f2bec(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp_r0;
    s32 var_r6;
    s32 var_r7;
    s32 var_r8;

    temp_r0 = G2_GetBG2ScrPtr();
    var_r7 = temp_r0 + (arg0 * 2);
    var_r7 += arg1 << 6;
    var_r8 = temp_r0 + (arg4 * 2);
    var_r8 += arg5 << 6;
    var_r6 = 0;
    if (arg3 <= 0) {
        return;
    }
    do {
        MIi_CpuCopy16(var_r7, var_r8, arg2 * 2);
        var_r6 += 1;
        var_r7 += 0x40;
        var_r8 += 0x40;
    } while (var_r6 < arg3);
}
