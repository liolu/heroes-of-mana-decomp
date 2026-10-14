#include "m2c.h"

void func_02020a50(s32 arg0, s8 *arg1, s32 arg2) {
    s32 temp_r3;
    s32 var_ip;
    s8 *var_r1;

    var_r1 = arg1;
    temp_r3 = arg2 - 1;
    var_ip = 0;
    if (temp_r3 > 0) {
        do {
            *(s8 *)(arg0 + var_ip) = *var_r1;
            var_ip += 1;
            if (*var_r1 != 0) {
                var_r1 += 1;
            }
        } while (var_ip < temp_r3);
    }
    *(s8 *)(arg0 + var_ip) = 0;
}