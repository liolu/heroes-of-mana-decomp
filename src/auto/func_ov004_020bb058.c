#include "m2c.h"

s32 func_ov004_020bb058(void *arg0, s32 arg1, s32 arg2) {
    s32 var_r0;

    if (arg1 == 1) {
        if (arg2 == 1) {
            var_r0 = 3;
        } else {
            var_r0 = 1;
        }
        return var_r0;
    }
    if (arg2 == 1) {
        return 2;
    }
    return 0;
}
