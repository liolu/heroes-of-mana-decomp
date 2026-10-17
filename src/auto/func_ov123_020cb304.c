/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK GX_SetBankForLCDC(s32);                     /* extern */
M2C_UNK MIi_CpuClearFast(M2C_UNK, s32, M2C_UNK);    /* extern */
M2C_UNK func_0200a72c();                            /* extern */

void func_ov123_020cb304(void) {
    GX_SetBankForLCDC(0x1F3);
    MIi_CpuClearFast(0, 0x06800000, 0x40000);
    MIi_CpuClearFast(0, 0x06880000, 0x24000);
    func_0200a72c();
    MIi_CpuClearFast(0x200, 0x07000000, 0x400);
    MIi_CpuClearFast(0, 0x05000000, 0x400);
    MIi_CpuClearFast(0x200, 0x07000400, 0x400);
    MIi_CpuClearFast(0, 0x05000400, 0x400);
}
