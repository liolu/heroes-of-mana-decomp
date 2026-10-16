#include "m2c.h"

extern void *data_ov123_020e4720;

u8 func_ov123_020c9820(s32 arg0) {
    void *var_r0;

    if (arg0 == 1) {
        var_r0 = data_ov123_020e4720;
    } else {
        var_r0 = data_ov123_020e4720 + 0xC;
    }
    return M2C_FIELD(var_r0, u8 *, 9);
}
