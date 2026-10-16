#include "m2c.h"

s32 func_ov123_02070e50(void *arg0) {
    s32 var_r1;

    var_r1 = M2C_FIELD(arg0, s32 *, 0x64);
    if (var_r1 == 0) {
        var_r1 = M2C_FIELD(arg0, s32 *, 0x68);
    }
    return var_r1;
}
