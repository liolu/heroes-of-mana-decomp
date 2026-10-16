#include "m2c.h"

M2C_UNK G2x_SetBlendBrightness_(void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK GX_SetBankForLCDC(s32);                     /* extern */
M2C_UNK GXx_SetMasterBrightness_(s32, M2C_UNK);     /* extern */
M2C_UNK MIi_CpuClearFast(M2C_UNK, s32, M2C_UNK);    /* extern */
M2C_UNK func_0200a72c();                            /* extern */
M2C_UNK func_0200fb08();                            /* extern */

void func_ov117_020e16fc(void) {
    func_0200fb08();
    M2C_FIELD((void *) 0x04000000, s32 *, 0)      = 0x10000;
    M2C_FIELD((void *) 0x04000000, s32 *, 0x1000) = 0x10000;
    G2x_SetBlendBrightness_((void *) 0x04000000 + 0x50, 0x3F, -0x10);
    G2x_SetBlendBrightness_((void *) 0x04001050, 0x3F, -0x10);
    GXx_SetMasterBrightness_(0x0400006C, -0x10);
    GXx_SetMasterBrightness_(0x0400106C, -0x10);
    GX_SetBankForLCDC(0x1FF);
    MIi_CpuClearFast(0, 0x06800000, 0xA4000);
    func_0200a72c();
    MIi_CpuClearFast(0xC0, 0x07000000, 0x400);
    MIi_CpuClearFast(0, 0x05000000, 0x400);
    MIi_CpuClearFast(0xC0, 0x07000400, 0x400);
    MIi_CpuClearFast(0, 0x05000400, 0x400);
}
