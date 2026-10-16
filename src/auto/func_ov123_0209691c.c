/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov123_0209691c(s32 arg0) {
    s32 var_r0;

    var_r0 = arg0;
    if (var_r0 & 0x8000) {
        var_r0 &= ~0x8000;
    }
    return var_r0;
}
