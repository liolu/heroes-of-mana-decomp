#include "m2c.h"

M2C_UNK GXx_SetMasterBrightness_(s32, s32);         /* extern */
M2C_UNK func_ov111_020e4940(M2C_UNK);               /* extern */

void func_ov111_020e4958(s32 arg0, s32 arg1) {
    s32 var_r10;

    var_r10 = arg0;
    if (var_r10 > 0) {
        return;
    }
    do {
        func_ov111_020e4940(2);
        if (arg1 & 1) {
            GXx_SetMasterBrightness_(0x0400006C, var_r10);
            *(s16 *) 0x04000050 = 0;
        }
        if (arg1 & 2) {
            GXx_SetMasterBrightness_(0x0400106C, var_r10);
            *(s16 *) 0x04001050 = 0;
        }
        var_r10 += 1;
    } while (var_r10 <= 0);
}
