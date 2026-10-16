#include "m2c.h"

M2C_UNK GXx_SetMasterBrightness_(s32, s32);         /* extern */
M2C_UNK func_0200acd8(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_ov122_02055684(M2C_UNK);               /* extern */
extern M2C_UNK data_ov122_02065604;

void func_ov122_020556bc(s32 arg0, s32 arg1, M2C_UNK arg2) {
    s32 var_r10;

    var_r10 = arg0;
    if (var_r10 > 0) {
        return;
    }
    do {
        func_ov122_02055684(arg2);
        if (arg1 & 1) {
            GXx_SetMasterBrightness_(0x0400006C, var_r10);
            func_0200acd8(0x04000050, 4, 8, 9, 0xE);
            M2C_FIELD(&data_ov122_02065604, s32 *, 0xDE0) = (s32) (M2C_FIELD(&data_ov122_02065604, s32 *, 0xDE0) | 2);
        }
        if (arg1 & 2) {
            GXx_SetMasterBrightness_(0x0400106C, var_r10);
            func_0200acd8(0x04001050, 4, 8, 9, 0xE);
            M2C_FIELD(&data_ov122_02065604, s32 *, 0xDE0) = (s32) (M2C_FIELD(&data_ov122_02065604, s32 *, 0xDE0) | 4);
        }
        var_r10 += 1;
    } while (var_r10 <= 0);
}
