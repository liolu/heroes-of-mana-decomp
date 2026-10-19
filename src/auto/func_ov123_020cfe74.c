/* compiler: 2.0/sp1p5 -O2 */
#include "m2c.h"

s32 func_ov123_020d26f0();                          /* extern */

s32 func_ov123_020cfe74(s32 arg0) {
    s32 temp_r3;
    s32 var_r0;

    temp_r3 = (func_ov123_020d26f0() * 0xA00) + arg0;
    var_r0  = 0;
loop_1:
    if (M2C_FIELD((temp_r3 + (var_r0 << 9)), u16 *, 4) == 0xFFFF) {
        return var_r0;
    }
    var_r0 += 1;
    if (var_r0 >= 5) {
        return 5;
    }
    goto loop_1;
}
