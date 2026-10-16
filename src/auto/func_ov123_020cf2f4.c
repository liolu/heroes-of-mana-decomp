#include "m2c.h"

void func_ov123_020cf2f4(void *arg0, s32 arg1) {
    s32 var_r1;

    var_r1 = arg1;
    if (var_r1 < 0) {
        var_r1 = 0;
    } else if (var_r1 > 0xF423F) {
        var_r1 = 0xF423F;
    }
    M2C_FIELD(arg0, s32 *, 0x48) = var_r1;
}
