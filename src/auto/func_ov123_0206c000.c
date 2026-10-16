/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK MI_CpuFill8(s32, M2C_UNK, s32);             /* extern */

s32 func_ov123_0206c000(M2C_UNK arg0, u32 arg1, s32 arg2, u32 arg3) {
    s32 temp_r4;
    s32 var_r5;

    var_r5 = arg2;
    if (arg3 < arg1) {
        temp_r4 = arg1 - arg3;
        MI_CpuFill8(var_r5, arg0, temp_r4);
        var_r5 += temp_r4;
    }
    return var_r5;
}
