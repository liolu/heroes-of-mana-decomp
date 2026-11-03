/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_02069f80(s32, void *, s32, M2C_UNK, s32, s32); /* extern */

void func_ov123_0206af74(void *arg0, s32 arg1, M2C_UNK arg2, s32 arg3, s32 arg4, s32 *arg5) {
    s32 sp8;
    s32 temp_r6;
    void *temp_r5;
    s32 (*temp_r4)(s32 *);
    s32 var_r0;
    s32 var_r1;
    s32 var_r9;

    temp_r6 = M2C_FIELD(arg0, s32 *, 8);
    temp_r5 = M2C_FIELD(arg0, void **, 4);
    sp8     = arg4;
    temp_r4 = M2C_FIELD(temp_r5, s32(**)(s32 *), 4);
    var_r9  = arg1;
    var_r0  = temp_r4(&sp8);
    if (var_r0 != 0) {
    loop_2:
        if (var_r0 != 0xA) {
            var_r9 = var_r9 + func_ov123_02069f80(M2C_FIELD(arg0, s32 *, 0), temp_r5, var_r9, arg2, arg3, var_r0);
            var_r9 = var_r9 + temp_r6;
            var_r0 = temp_r4(&sp8);
            if (var_r0 != 0) {
                goto loop_2;
            }
        }
    }
    if (arg5 == NULL) {
        return;
    }
    if (var_r0 == 0xA) {
        var_r1 = sp8;
    } else {
        var_r1 = 0;
    }
    *arg5 = var_r1;
}
