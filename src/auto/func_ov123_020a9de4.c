/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

s32 func_ov123_020a9e20(s8 *, s8);                  /* extern */

s32 func_ov123_020a9de4(s8 *arg0, s8 *arg1) {
    s8 *var_r6;
    s8 temp_r1;
    s8 *var_r5;
    s32 var_r4;
    s8 *temp_r1_2;
    s8 *sp0;

    sp0 = arg0;
    var_r6 = arg1;
    var_r5 = arg0;
    var_r4 = 0;
    for (; var_r4 < 6; var_r4++) {
        temp_r1_2 = &var_r5[func_ov123_020a9e20(var_r5, *var_r6++)];
        var_r5 = temp_r1_2;
        if (var_r4 < 5) {
            var_r5 = temp_r1_2 + 1;
            *temp_r1_2 = 0x3A;
        }
    }
    *var_r5 = 0;
    return var_r5 - sp0;
}
