#include "m2c.h"

M2C_UNK GXx_SetMasterBrightness_(s32, s32);         /* extern */
M2C_UNK func_ov112_020e2774(M2C_UNK);               /* extern */

void func_ov112_020e2830(s32 arg0, s32 arg1, M2C_UNK arg2) {
    s32 var_r5;

    var_r5 = 0;
    if (arg0 > 0) {
        return;
    }
    do {
        func_ov112_020e2774(arg2);
        if (arg1 & 1) {
            GXx_SetMasterBrightness_(0x0400006C, var_r5);
        }
        if (arg1 & 2) {
            GXx_SetMasterBrightness_(0x0400106C, var_r5);
        }
        var_r5 -= 1;
    } while (var_r5 >= arg0);
}
