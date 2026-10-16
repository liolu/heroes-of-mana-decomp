#include "m2c.h"

s32 GX_ResetBankForOBJExtPltt();                    /* extern */
M2C_UNK GX_SetBankForOBJExtPltt(s32);               /* extern */
M2C_UNK MIi_CpuCopy16(M2C_UNK, s32, M2C_UNK);       /* extern */

void func_ov121_020ea65c(M2C_UNK arg0, s32 arg1) {
    s32 temp_r4;

    temp_r4 = GX_ResetBankForOBJExtPltt();
    MIi_CpuCopy16(arg0, (arg1 << 9) + 0x06894000, 0x20);
    GX_SetBankForOBJExtPltt(temp_r4);
}
