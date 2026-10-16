#include "m2c.h"

s32 func_ov123_0206b544(u8 *arg0, u8 **arg1) {
    s32 var_ip;
    u8 *var_r0;
    u8 temp_r3;

    var_r0 = arg0;
    *arg1  = var_r0;
    var_ip = 0;
loop_1:
    temp_r3 = *var_r0 - 0x30;
    if ((u32) temp_r3 <= 9U) {
        var_ip = (0xA * var_ip) + temp_r3;
        var_r0 += 1;
        *arg1 = var_r0;
        goto loop_1;
    }
    return var_ip;
}
