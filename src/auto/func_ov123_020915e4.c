/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK MIi_CpuCopy32(M2C_UNK, s32, M2C_UNK);       /* extern */
s32 func_ov123_020913d8(M2C_UNK);                   /* extern */

void func_ov123_020915e4(s32 arg0, M2C_UNK arg1) {
    MIi_CpuCopy32(arg1, func_ov123_020913d8(0x10) + (arg0 << 8), 0xF0);
}
