#include "m2c.h"

s32 func_ov123_020d3368();                          /* extern */
s32 func_ov123_020d3430();                          /* extern */

s32 func_ov123_020d349c(void) {
    s32 temp_r0;

    if (func_ov123_020d3368() == 0) {
        return 0;
    }
loop_2:
    temp_r0 = func_ov123_020d3430();
    if (temp_r0 != 1) {
        if (temp_r0 == 3) {
            return 0;
        }
        goto loop_2;
    }
    return 1;
}
