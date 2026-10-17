/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_0202d478(s32, s32);                        /* extern */
s32 func_ov123_02079c1c(M2C_UNK, s32, s32, s32, s32, s32 *); /* extern */
s32 func_ov123_02079c88(M2C_UNK, s32, s32, s32, s32); /* extern */
s32 func_ov123_0207a194(void *, s32);               /* extern */

s32 func_ov123_02079df4(void *arg0, M2C_UNK arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 sp8;
    s32 temp_r8;
    s32 var_r0;

    sp8 = 1;
    if ((arg0 == NULL) || (temp_r8 = M2C_FIELD(arg0, s32 *, 0), (temp_r8 == 0))) {
        return -1;
    }
    if (arg4 != 0) {
        var_r0 =
            func_ov123_02079c1c(arg1, func_ov123_0207a194(arg0, arg3), temp_r8 - arg3, M2C_FIELD(arg0, s32 *, 8), arg2, &sp8);
    } else {
        var_r0 = func_ov123_02079c88(arg1, func_ov123_0207a194(arg0, arg3), temp_r8 - arg3, M2C_FIELD(arg0, s32 *, 8), arg2);
    }
    if ((var_r0 != 0) && (sp8 != 0)) {
        return func_0202d478(var_r0 - M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, s32 *, 8));
    }
    return -1;
}
