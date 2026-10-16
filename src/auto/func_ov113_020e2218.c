#include "m2c.h"

M2C_UNK GXx_SetMasterBrightness_(s32, s32);         /* extern */
M2C_UNK func_ov113_020e2200(M2C_UNK);               /* extern */
extern s32 data_02036720;

void func_ov113_020e2218(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r10;

    var_r10 = arg0;
    if (var_r10 > 0) {
        return;
    }
    do {
        func_ov113_020e2200(2);
        if (arg1 & 1) {
            GXx_SetMasterBrightness_(0x0400006C, var_r10);
            if ((data_02036720 == 0) && (arg2 != 0)) {
                *(s16 *) 0x04000050 = 0;
            }
        }
        if (arg1 & 2) {
            GXx_SetMasterBrightness_(0x0400106C, var_r10);
            if ((data_02036720 == 0) && (arg2 != 0)) {
                *(s16 *) 0x04001050 = 0;
            }
        }
        var_r10 += 1;
    } while (var_r10 <= 0);
}
