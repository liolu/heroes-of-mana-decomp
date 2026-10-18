#include "m2c.h"

s32 func_ov123_02070174(u16 *arg0, u16 *arg1) {
    s32 var_ip;
    u16 *var_r0;
    u16 *var_r1;
    u16 temp_r2;
    u16 temp_r3;

    var_r0 = arg0;
    var_r1 = arg1;
    var_ip = 0;
loop_1:
    temp_r3 = *var_r0;
    var_r0  = (void *) ((u8 *) (u8 *) var_r0 + 2);
    temp_r2 = *var_r1;
    var_r1  = (void *) ((u8 *) (u8 *) var_r1 + 2);
    if (temp_r3 != temp_r2) {
        return 1;
    }
    var_ip += 1;
    if (var_ip >= 3) {
        return 0;
    }
    goto loop_1;
}
