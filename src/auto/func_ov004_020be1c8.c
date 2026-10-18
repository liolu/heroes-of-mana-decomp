#include "m2c.h"

s32 func_ov004_020be460(s32);                       /* extern */

s32 func_ov004_020be1c8(void *arg0) {
    s32 var_r4;
    s32 var_r5;
    s32 var_r6;

    var_r4 = 0;
    var_r5 = 0;
    if ((s32) M2C_FIELD(arg0, s32 *, 8) > 0) {
        var_r6 = 0;
        do {
            var_r4 += func_ov004_020be460(M2C_FIELD(arg0, s32 *, 0xC) + var_r6);
            var_r5 += 1;
            var_r6 += 0x2C;
        } while (var_r5 < (s32) M2C_FIELD(arg0, s32 *, 8));
    }
    return var_r4;
}
