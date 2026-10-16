/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

s32 func_ov123_020a6778(s8 *arg0) {
    s32 var_r2;

    var_r2 = 0;
    if (*arg0 != 0) {
        do {
            var_r2 += 1;
        } while (*(arg0 + var_r2) != 0);
    }
    return var_r2;
}
