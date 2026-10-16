/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

s32 func_ov123_020736b4();                          /* extern */
s32 func_ov123_020a906c();                          /* extern */

s32 func_ov123_020a6910(void) {
    s32 var_r0;

    if (func_ov123_020736b4() < 0) {
        return -1;
    }
    if (func_ov123_020a906c() != 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return 0 - var_r0;
}
