/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_020738b4(M2C_UNK, M2C_UNK, s32);     /* extern */

s32 func_ov123_0207b314(M2C_UNK arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r2;

    temp_r0 = func_ov123_020738b4(arg0, 3, 0);
    if (arg1 != 0) {
        var_r2 = temp_r0 & ~4;
    } else {
        var_r2 = temp_r0 | 4;
    }
    if (func_ov123_020738b4(arg0, 4, var_r2) == 0) {
        return 1;
    }
    return 0;
}
