#include "m2c.h"

extern s32 data_ov123_020e0e54;

s32 func_ov123_0207af6c(s32 arg0, s32 arg1) {
    s32 var_r0;

    var_r0 = arg0;
    if (var_r0 < 0) {
        data_ov123_020e0e54 = var_r0;
        var_r0              = arg1;
    }
    return var_r0;
}
