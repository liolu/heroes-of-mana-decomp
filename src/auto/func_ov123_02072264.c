/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK MI_CpuCopy8(s32, s32, s32);                 /* extern */

s32 func_ov123_02072264(s32 arg0, s32 arg1, void *arg2) {
    s32 temp_r0;
    s32 var_r5;
    s32 var_r4;

    var_r5 = M2C_FIELD(arg2, s32 *, 0x14);
    var_r4 = M2C_FIELD(arg2, s32 *, 0x1C);
    if (var_r5 > arg1) {
        var_r5 = arg1;
        var_r4 = 0;
    } else {
        temp_r0 = arg1 - var_r5;
        if (var_r4 > temp_r0) {
            var_r4 = temp_r0;
        }
    }
    if (var_r5 > 0) {
        MI_CpuCopy8(M2C_FIELD(arg2, s32 *, 0x10), arg0, var_r5);
        M2C_FIELD(arg2, s32 *, 0x10) = (s32) (M2C_FIELD(arg2, s32 *, 0x10) + var_r5);
        M2C_FIELD(arg2, s32 *, 0x14) = (s32) (M2C_FIELD(arg2, s32 *, 0x14) - var_r5);
    }
    if (var_r4 > 0) {
        MI_CpuCopy8(M2C_FIELD(arg2, s32 *, 0x18), arg0 + var_r5, var_r4);
        M2C_FIELD(arg2, s32 *, 0x18) = (s32) (M2C_FIELD(arg2, s32 *, 0x18) + var_r4);
        M2C_FIELD(arg2, s32 *, 0x1C) = (s32) (M2C_FIELD(arg2, s32 *, 0x1C) - var_r4);
    }
    return var_r5 + var_r4;
}
