/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK GX_SetBankForLCDC(s32);                     /* extern */
M2C_UNK MIi_CpuClearFast(M2C_UNK, s32, M2C_UNK);    /* extern */
M2C_UNK func_0200a72c();                            /* extern */
extern M2C_UNK data_ov003_020aa020;

void ana_InitVRAM(void) {
    GX_SetBankForLCDC(0x1FF);
    MIi_CpuClearFast(0, 0x06800000, 0xA4000);
    func_0200a72c();
    MIi_CpuClearFast(0xC0, 0x07000000, 0x400);
    MIi_CpuClearFast(0, 0x05000000, 0x400);
    MIi_CpuClearFast(0xC0, 0x07000400, 0x400);
    MIi_CpuClearFast(0, 0x05000400, 0x400);
}
