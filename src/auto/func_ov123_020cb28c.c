#include "m2c.h"
s32 func_ov123_020cb28c(u8 *a, s32 n) {
    s32 i;
    for (i = 0; i < n; i++) {
        if (a[i] == 0) {
            break;
        }
    }
    return i;
}
