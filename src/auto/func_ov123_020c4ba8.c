#include "m2c.h"

M2C_UNK G2x_ChangeBlendBrightness_(s32, s8);        /* extern */
M2C_UNK func_ov123_020cb618(M2C_UNK, M2C_UNK *);    /* extern */
extern void *data_ov123_020e46e4;
extern M2C_UNK func_ov123_020c4af4;

void func_ov123_020c4ba8(M2C_UNK arg0) {
    M2C_FIELD(data_ov123_020e46e4, s8 *, 0x1A) = (s8) (M2C_FIELD(data_ov123_020e46e4, s8 *, 0x1A) + 1);
    G2x_ChangeBlendBrightness_(0x04000050, M2C_FIELD(data_ov123_020e46e4, s8 *, 0x1A));
    if ((s32) M2C_FIELD(data_ov123_020e46e4, s8 *, 0x1A) < 0) {
        return;
    }
    func_ov123_020cb618(arg0, &func_ov123_020c4af4);
}
