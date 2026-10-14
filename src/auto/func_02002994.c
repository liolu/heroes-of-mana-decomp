#include "m2c.h"

void func_02002994(s32 arg0, u8 arg1) {
    s32 var_ip;
    s32 var_r3;
    void *temp_r3;

    var_r3 = 0;
loop_1:
    if (arg1 == M2C_FIELD((arg0 + var_r3), u8 *, 8)) {
        return;
    }
    var_r3 += 1;
    if (var_r3 >= 8) {
        var_ip = 0;
    loop_5:
        temp_r3 = arg0 + var_ip;
        if (M2C_FIELD(temp_r3, u8 *, 8) == 8) {
            M2C_FIELD(temp_r3, u8 *, 8) = arg1;
            return;
        }
        var_ip += 1;
        if (var_ip >= 8) {
            return;
        }
        goto loop_5;
    }
    goto loop_1;
}
