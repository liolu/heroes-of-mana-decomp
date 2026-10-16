#include "m2c.h"

M2C_UNK GXx_SetMasterBrightness_(s32, s32);         /* extern */
M2C_UNK func_ov117_020e38a0(M2C_UNK);               /* extern */

void func_ov117_020e395c(s32 arg0, s32 arg1) {
    s32 var_r6;

    var_r6 = 0;
    if (arg0 > 0) {
        return;
    }
    do {
        func_ov117_020e38a0(2);
        if (arg1 & 1) {
            GXx_SetMasterBrightness_(0x0400006C, var_r6);
        }
        if (arg1 & 2) {
            GXx_SetMasterBrightness_(0x0400106C, var_r6);
        }
        var_r6 -= 1;
    } while (var_r6 >= arg0);
}
