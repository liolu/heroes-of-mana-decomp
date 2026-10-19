/* compiler: 2.0/sp1p5 -O2 */
#include "m2c.h"

void *func_ov123_020c952c();                        /* extern */

void func_ov123_020c94ec(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r2;
    s32 var_r5;
    void *temp_r0;
    void *temp_r1;

    var_r5  = arg1;
    temp_r0 = func_ov123_020c952c();
    var_r2  = 0;
    if (arg0 > 0) {
        do {
            temp_r1 = temp_r0 + (var_r2 * 4);
            var_r2 += 1;
            M2C_FIELD(temp_r1, s32 *, 4) = var_r5;
            var_r5 += arg2;
        } while (var_r2 < arg0);
    }
    M2C_FIELD(temp_r0, s8 *, 3) = (s8) arg0;
}
