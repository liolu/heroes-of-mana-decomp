#include "m2c.h"

s32 func_ov123_020cc948();                          /* extern */
M2C_UNK func_ov123_020cc97c(M2C_UNK, M2C_UNK);      /* extern */
s32 func_ov123_020ccc9c();                          /* extern */
M2C_UNK func_ov123_020cccd0(M2C_UNK *, u16, M2C_UNK *); /* extern */
s32 func_ov123_020cdd30(s32);                       /* extern */
extern M2C_UNK data_ov123_020de830;
extern M2C_UNK data_ov123_020de838;
extern M2C_UNK data_ov123_020e47a4;
extern M2C_UNK func_ov123_020cdc80;

void func_ov123_020cdd84(void) {
    M2C_UNK *var_r4;
    u16 var_r5;

    var_r4 = &data_ov123_020de838;
    var_r5 = 0xD68F;
    if (M2C_FIELD(&data_ov123_020e47a4, s32 *, 4) == 0) {
        func_ov123_020cc97c(9, -2);
        return;
    }
    if (M2C_FIELD(&data_ov123_020e47a4, s32 *, 0xC) == 2) {
        if (M2C_FIELD(&data_ov123_020de830, M2C_UNK **, 4) != NULL) {
            func_ov123_020cc97c(9, -2);
            return;
        }
        if (func_ov123_020cdd30(M2C_FIELD(&data_ov123_020e47a4, s32 **, 8) + 3) != 0) {
            var_r4 = M2C_FIELD(&data_ov123_020e47a4, s32 **, 8) + 3;
        }
        if (M2C_FIELD(&data_ov123_020e47a4, u16 *, 0) != 0) {
            func_ov123_020cc97c(9, -2);
            return;
        }
        goto block_13;
    }
    var_r4 = M2C_FIELD(&data_ov123_020de830, M2C_UNK **, 4);
    if (var_r4 == NULL) {
        func_ov123_020cc97c(9, -2);
        return;
    }
    var_r5 = M2C_FIELD(&data_ov123_020e47a4, u16 *, 0);
    if (var_r5 == 0) {
        func_ov123_020cc97c(9, -2);
        return;
    }
block_13:
    if (func_ov123_020cc948() != 0) {
        return;
    }
    if (func_ov123_020ccc9c() == 0) {
        return;
    }
    *M2C_FIELD(&data_ov123_020e47a4, s32 **, 8) = 2;
    func_ov123_020cccd0(var_r4, var_r5, &func_ov123_020cdc80);
}
