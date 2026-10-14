#include "m2c.h"

s32 func_02020a8c(s8 *arg0) {
    s32 var_r2;

    var_r2 = 0;
    if (*arg0 != 0) {
        do {
            var_r2 += 1;
        } while (*(arg0 + var_r2) != 0);
    }
    return var_r2;
}
