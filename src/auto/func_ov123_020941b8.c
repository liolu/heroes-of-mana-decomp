#include "m2c.h"

M2C_UNK MI_CpuCopy8(M2C_UNK *, M2C_UNK, M2C_UNK);   /* extern */
s32 func_020213f0(M2C_UNK *, M2C_UNK *, M2C_UNK);   /* extern */
M2C_UNK func_ov123_0209407c(M2C_UNK, M2C_UNK *);    /* extern */
extern M2C_UNK data_ov123_020dbec4;

void func_ov123_020941b8(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp8[16];
    u8 sp0[8];

    func_ov123_0209407c(arg0, sp0);
    if (func_020213f0(sp0, &data_ov123_020dbec4, 8) != 0) {
        return;
    }
    MI_CpuCopy8(sp8, arg1, 0xA);
}
