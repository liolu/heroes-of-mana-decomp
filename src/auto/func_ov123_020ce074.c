#include "m2c.h"

M2C_UNK func_ov123_020cc97c(M2C_UNK, M2C_UNK);      /* extern */
extern M2C_UNK data_ov123_020e47a4;

void func_ov123_020ce074(M2C_UNK arg0, void *arg1, s32 arg2) {
    M2C_UNK (*temp_r3)(M2C_UNK, void *, s32);
    s32 temp_r7;
    s32 var_r1;

    if (M2C_FIELD(&data_ov123_020e47a4, s32 *, 8) == 0) {
        return;
    }
    if ((arg2 > 0) && ((u32) arg2 < 0xCU)) {
        func_ov123_020cc97c(6, -0x28);
        return;
    }
    temp_r7 = M2C_FIELD(arg1, s32 *, 8);
    if (M2C_FIELD(arg1, s32 *, 4) != 0x44535359) {
        func_ov123_020cc97c(6, -0x28);
        return;
    }
    if ((arg2 > 0) && (arg2 != M2C_FIELD(arg1, s32 *, 0))) {
        func_ov123_020cc97c(6, -0x28);
    }
    if (temp_r7 == 0xD6) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    if (var_r1 <= -1) {
        return;
    }
    if (var_r1 >= 2) {
        return;
    }
    temp_r3 = M2C_FIELD((M2C_FIELD(&data_ov123_020e47a4, s32 *, 8) + (var_r1 * 4)), M2C_UNK(**)(M2C_UNK, void *, s32), 0xD24);
    if (temp_r3 == NULL) {
        return;
    }
    temp_r3(arg0, arg1, arg2);
}
