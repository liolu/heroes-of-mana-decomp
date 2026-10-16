#include "m2c.h"

M2C_UNK MI_CpuFill8(s32, M2C_UNK, M2C_UNK);         /* extern */
s32 func_ov123_020ca510();                          /* extern */

s32 func_ov123_020ca4ec(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0 = func_ov123_020ca510();
    MI_CpuFill8(temp_r0, 0, arg0);
    return temp_r0;
}
