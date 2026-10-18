#include "m2c.h"

void *func_ov123_0206b830(u8 *arg0) {
    u8 *temp_r0;
    u8 var_r2;
    void *var_r0;

    var_r2 = *arg0;
    var_r0 = arg0 + 1;
    if (var_r2 == 0) {
        return var_r0;
    }
loop_2:
    if ((var_r2 & 0xC0) == 0xC0) {
        return var_r0 + 1;
    }
    temp_r0 = var_r0 + var_r2;
    var_r0  = temp_r0 + 1;
    var_r2  = *temp_r0;
    if (var_r2 == 0) {
        return var_r0;
    }
    goto loop_2;
}
