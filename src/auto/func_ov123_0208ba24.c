#include "m2c.h"

M2C_UNK func_ov123_0208ba64(M2C_UNK *);             /* extern */
M2C_UNK snprintf(M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK *, s32); /* extern */
extern M2C_UNK data_ov123_020db5ec;
extern M2C_UNK data_ov123_020e0db8;

void func_ov123_0208ba24(M2C_UNK *arg0, s32 arg1) {
    u8 sp4[128];
    M2C_UNK *var_r0;

    var_r0 = arg0;
    if (var_r0 == NULL) {
        snprintf(sp4, 0x80, &data_ov123_020db5ec, &data_ov123_020e0db8, arg1);
        var_r0 = sp4;
    }
    func_ov123_0208ba64(var_r0);
}
