#include "m2c.h"
s32 func_ov123_020695ec(u8 *arg0, u8 *arg1) {
    s32 i;
    for (i = 0; i < 6; i++) {
        if (arg0[i] != arg1[i]) {
            return 0;
        }
    }
    return 1;
}
