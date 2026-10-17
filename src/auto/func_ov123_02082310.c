#include "m2c.h"

M2C_UNK func_02020d04(M2C_UNK *, M2C_UNK *, M2C_UNK, s32); /* extern */
M2C_UNK func_0202373c(M2C_UNK *, M2C_UNK *, s32);   /* extern */
s32 func_02024c28(M2C_UNK *);                       /* extern */
s32 func_ov123_0207ac60(M2C_UNK);                   /* extern */
s32 func_ov123_0207dde4(M2C_UNK, void *, M2C_UNK *); /* extern */
s32 func_ov123_0207de14(M2C_UNK, void *, M2C_UNK *, s32); /* extern */
s32 func_ov123_0207df18(M2C_UNK, void *, M2C_UNK);  /* extern */
extern M2C_UNK data_ov123_020dab68;
extern M2C_UNK data_ov123_020dab78;
extern M2C_UNK data_ov123_020dab84;
extern M2C_UNK data_ov123_020dab88;

s32 func_ov123_02082310(M2C_UNK arg0, void *arg1, M2C_UNK *arg2, s32 arg3) {
    u8 sp0[36];
    M2C_UNK *var_r5;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 var_r4;

    var_r5 = arg2;
    var_r4 = arg3;
    if (arg1 == NULL) {
        func_02020d04(&data_ov123_020dab68, &data_ov123_020dab78, 0, 0x389);
    }
    if (var_r5 == NULL) {
        var_r5 = &data_ov123_020dab84;
    }
    if (var_r4 == -1) {
        var_r4 = func_02024c28(var_r5);
    }
    func_0202373c(sp0, &data_ov123_020dab88, var_r4);
    temp_r0_3 = func_ov123_0207dde4(arg0, arg1, sp0);
    if (temp_r0_3 != 0) {
        return temp_r0_3;
    }
    temp_r0_2 = func_ov123_0207de14(arg0, arg1, var_r5, var_r4);
    if (temp_r0_2 != 0) {
        return temp_r0_2;
    }
    temp_r0 = func_ov123_0207df18(arg0, arg1, 0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    M2C_FIELD(arg1, s32 *, 0x10) = (s32) (func_ov123_0207ac60(0) + 0x12C);
    return 0;
}
