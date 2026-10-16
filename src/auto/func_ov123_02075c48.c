#include "m2c.h"

void func_ov123_02075c48(u8 *arg0) {
    s32 var_r2;
    u8 *var_r0;
    u8 temp_r1;

    var_r0 = arg0;
    var_r2 = 8;
loop_1:
    var_r0 -= 1;
    temp_r1 = *var_r0 + 1;
    *var_r0 = temp_r1;
    if (temp_r1 != 0) {
        return;
    }
    var_r2 -= 1;
    if (var_r2 == 0) {
        return;
    }
    goto loop_1;
}
