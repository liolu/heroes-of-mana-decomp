#include "m2c.h"

M2C_UNK func_02020d04(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK);
s32 *func_ov123_0207a4f0(s32, s32 *);
M2C_UNK func_ov123_0207a58c(s32, s32 *);
s32 func_ov123_0208eb2c(s32);
extern M2C_UNK data_ov123_020dbdc4;
extern M2C_UNK data_ov123_020dbe2c;

void func_ov123_02090f08(s32 arg0, s32 arg1) {
    s32 sp0[3];
    volatile s32 *temp_r0;

    sp0[0]  = arg1;
    temp_r0 = func_ov123_0207a4f0(func_ov123_0208eb2c(arg0), sp0);
    if (temp_r0 == NULL) {
        func_02020d04(&data_ov123_020dbe2c, &data_ov123_020dbdc4, 0, 0xF4);
    }
    if (temp_r0 == NULL) {
        return;
    }
    temp_r0[1] = temp_r0[1] - 1;
    if (temp_r0[1] != 0) {
        return;
    }
    func_ov123_0207a58c(func_ov123_0208eb2c(arg0), sp0);
}
