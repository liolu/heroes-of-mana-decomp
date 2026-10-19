#include "m2c.h"

s32 func_020213f0(M2C_UNK *, M2C_UNK *, M2C_UNK);   /* extern */
M2C_UNK func_ov123_0209407c(M2C_UNK, M2C_UNK *);    /* extern */
extern M2C_UNK data_ov123_020dbec4;

s32 func_ov123_0209422c(M2C_UNK arg0) {
    u8 sp0[28];

    func_ov123_0209407c(arg0, sp0);
    if (func_020213f0(sp0, &data_ov123_020dbec4, 8) == 0) {
        return 1;
    }
    return 0;
}
