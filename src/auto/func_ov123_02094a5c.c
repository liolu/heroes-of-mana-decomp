#include "m2c.h"

s32 func_ov123_02094a94();                          /* extern */
s32 func_ov123_02094aac(M2C_UNK);                   /* extern */

s32 func_ov123_02094a5c(M2C_UNK arg0) {
    s32 var_r0;

    if (func_ov123_02094a94() == 3) {
        if ((func_ov123_02094aac(arg0) & 4) == 4) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    return 0;
}
