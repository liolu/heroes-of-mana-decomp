/* compiler: 2.0/sp1p5 -O2 */
#include "m2c.h"

s32 func_ov121_020f4310(s32 arg0) {
    s32 var_r2;

    var_r2 = 0xA;
loop_1:
    if (M2C_FIELD((arg0 + (var_r2 * 2)), u16 *, -2) == 0) {
        var_r2 -= 1;
        if (var_r2 > 0) {
            goto loop_1;
        }
    }
    return var_r2;
}
