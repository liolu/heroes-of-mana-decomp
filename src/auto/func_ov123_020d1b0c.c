#include "m2c.h"

s32 func_ov123_020d1b0c(void *arg0) {
    s32 var_r0;

    if (M2C_FIELD(arg0, u8 *, 4) != 0) {
        if (M2C_FIELD(arg0, s32 *, 0xC) == 1) {
            var_r0 = 1;
        } else {
            var_r0 = 3;
        }
        return var_r0;
    }
    return 0;
}
