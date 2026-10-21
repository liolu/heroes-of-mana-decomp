/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

extern void *data_0203673c;

s32 func_020023cc(s32 arg0, s32 arg1) {
    s32 var_ip;

    var_ip = 0;
loop_1:
    if (arg1 == M2C_FIELD(((arg0 * 0x2D0) + M2C_FIELD(data_0203673c, s32 *, 0x28) + (var_ip * 2)), u16 *, 0x264)) {
        return var_ip;
    }
    var_ip += 1;
    if (var_ip >= 0x25) {
        return -1;
    }
    goto loop_1;
}
