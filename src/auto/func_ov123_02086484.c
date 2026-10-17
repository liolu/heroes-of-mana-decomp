#include "m2c.h"

s32 func_02024ea0(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
s32 func_02024f10(M2C_UNK, M2C_UNK *);              /* extern */
s32 func_02026c4c(M2C_UNK *);                       /* extern */
M2C_UNK func_ov123_0207e68c(M2C_UNK **, M2C_UNK, M2C_UNK); /* extern */
s32 func_ov123_0208637c(M2C_UNK, M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK data_ov123_020db328;
extern M2C_UNK data_ov123_020db330;
extern M2C_UNK data_ov123_020db338;
extern M2C_UNK data_ov123_020db344;

s32 func_ov123_02086484(M2C_UNK **arg0, M2C_UNK arg1, s32 arg2) {
    u8 sp0[20];
    M2C_UNK *temp_r4;
    M2C_UNK var_r2;
    s32 var_r0;

    temp_r4 = *arg0;
    if (func_02024ea0(arg1, &data_ov123_020db328, 7) == 0) {
        if (func_ov123_0208637c(arg1, &data_ov123_020db330, sp0, 0x10) != 0) {
            M2C_FIELD(temp_r4, s32 *, 0x418) = func_02026c4c(sp0);
        }
        if (func_ov123_0208637c(arg1, &data_ov123_020db338, temp_r4, 0x100) == 0) {
            M2C_FIELD(temp_r4, s8 *, 0) = 0;
        }
        if (arg2 != 0) {
            if (func_02024f10(arg1, &data_ov123_020db344) != 0) {
                var_r0 = 1;
            } else {
                var_r0 = 0;
            }
            if (var_r0 != 0) {
                var_r2 = 1;
            } else {
                var_r2 = 0;
            }
            func_ov123_0207e68c(arg0, 4, var_r2);
        }
        return 1;
    }
    return 0;
}
