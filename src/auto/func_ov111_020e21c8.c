#include "m2c.h"

s32 func_ov111_020e21c8(s32 arg0, s32 arg1) {
    s32 var_r0;

    if (arg0 == 2) {
        if (arg1 == 2) {
            var_r0 = 3;
        } else {
            var_r0 = 1;
        }
        return var_r0;
    }
    if (arg1 == 2) {
        return 2;
    }
    return 0;
}
