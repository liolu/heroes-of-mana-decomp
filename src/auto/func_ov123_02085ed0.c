#include "m2c.h"

M2C_UNK func_0202373c(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s32 func_ov123_0207dde4(M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
s32 func_ov123_02082310(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
s32 func_ov123_020823f8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_ov123_020db1e4;
extern M2C_UNK data_ov123_020db1e8;

s32 func_ov123_02085ed0(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, M2C_UNK *arg4) {
    u8 sp0[32];
    s32 temp_r0;
    s32 temp_r0_2;
    s32 var_r0;

    if (arg4 == NULL) {
        arg4 = &data_ov123_020db1e4;
    }
    temp_r0_2 = func_ov123_020823f8(arg0, arg2, 0xC9, arg1);
    if (temp_r0_2 != 0) {
        return temp_r0_2;
    }
    func_0202373c(sp0, &data_ov123_020db1e8, 1, arg3);
    temp_r0 = func_ov123_0207dde4(arg0, arg2, sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    var_r0 = func_ov123_02082310(arg0, arg2, arg4, -1);
    if (var_r0 == 0) {
        var_r0 = 0;
    }
    return var_r0;
}
