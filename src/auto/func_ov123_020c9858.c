/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK G2x_SetBlendBrightness_(s32, M2C_UNK, M2C_UNK); /* extern */
s32 func_ov123_020ca4ec(M2C_UNK, M2C_UNK);          /* extern */
extern s32 data_ov123_020e4720;

void func_ov123_020c9858(void) {
    data_ov123_020e4720 = func_ov123_020ca4ec(0x18, 4);
    G2x_SetBlendBrightness_(0x04000050, 0x3F, 0x10);
    G2x_SetBlendBrightness_(0x04001050, 0x3F, 0x10);
}
