#include "m2c.h"

s32 func_ov123_020d1cb4(void *arg0) {
    s32 var_r0;

    if (M2C_FIELD(arg0, u8 *, 0x18) != 0) {
        if (M2C_FIELD(arg0, s32 *, 0x20) == 1) {
            var_r0 = 1;
        } else {
            var_r0 = 3;
        }
        return var_r0;
    }
    return 0;
}
