#include "m2c.h"

u8 func_ov115_020e7530(s32 arg0) {
    s32 var_r3;
    u8 temp_r2;
    u8 var_ip;

    var_ip = 0;
    var_r3 = 0;
    do {
        temp_r2 = M2C_FIELD((arg0 + var_r3), u8 *, 0x10);
        var_r3 += 1;
        var_ip += (u8) (temp_r2 ^ 0xFF);
    } while (var_r3 < 0x7FF0);
    return var_ip;
}
