#include "m2c.h"

M2C_UNK GX_SetBankForSubOBJExtPltt(s32);            /* extern */
M2C_UNK MIi_CpuCopy16(M2C_UNK, s32, M2C_UNK);       /* extern */
s32 func_0200a564();                                /* extern */

void func_ov122_02052e5c(M2C_UNK arg0, s32 arg1) {
    s32 temp_r4;

    temp_r4 = func_0200a564();
    MIi_CpuCopy16(arg0, (arg1 << 9) + 0x068A0000, 0x20);
    GX_SetBankForSubOBJExtPltt(temp_r4);
}
