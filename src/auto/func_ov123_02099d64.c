#include "m2c.h"

s32 func_ov123_02099d64(u16 *arg0) {
    s32 n;
    n = 0;
    if (*arg0 != 0) {
        do {
            n += 1;
        } while (arg0[n] != 0);
    }
    return n;
}
