#include "m2c.h"

void string_fill_char(void *arg0, s8 arg1, s32 arg2) {
    u32 var_ip;
    u32 var_lr;

    if (arg2 <= 0) {
        return;
    }
    var_lr = M2C_FIELD(arg0, u32 *, 0);
    var_ip = 0;
    if (var_lr > (u32) arg2) {
        var_lr = (u32) arg2;
    }
    for (; var_ip < var_lr; var_ip += 1) {
        *(s8 *) (M2C_FIELD(arg0, s32 *, 4) + var_ip) = arg1;
    }
    M2C_FIELD(arg0, u32 *, 0) = (u32) (M2C_FIELD(arg0, u32 *, 0) - var_lr);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + arg2);
}
