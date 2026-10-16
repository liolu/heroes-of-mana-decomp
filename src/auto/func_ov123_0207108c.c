/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov123_0207336c(s32);                       /* extern */

s32 func_ov123_0207108c(s32 arg0, void *arg1, s32 arg2) {
    s32 temp_r4;
    s32 var_r0;

    var_r0  = arg0;
    temp_r4 = var_r0;
    if (arg2 == 0) {
        var_r0 = 0;
    }
    M2C_FIELD(arg1, s32 *, 4) = var_r0;
    M2C_FIELD(arg1, s32 *, 0) = arg2;
    return temp_r4 + func_ov123_0207336c(arg2);
}
