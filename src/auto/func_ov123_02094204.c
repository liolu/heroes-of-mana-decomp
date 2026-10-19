#include "m2c.h"

M2C_UNK func_ov123_02094030(M2C_UNK *, M2C_UNK);    /* extern */
M2C_UNK func_ov123_0209407c(M2C_UNK, M2C_UNK *);    /* extern */

void func_ov123_02094204(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp0[24];

    func_ov123_0209407c(arg0, sp0);
    func_ov123_02094030(sp0, arg1);
}
