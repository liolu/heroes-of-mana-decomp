#include "m2c.h"

void *func_ov123_0209d368();                        /* extern */

u8 func_ov123_0209e554(void) {
    s32 var_r5;
    u8 var_r6;

    var_r6 = 0;
loop_1:
    var_r5 = 0;
    if ((s32) M2C_FIELD(func_ov123_0209d368(), u8 *, 0x14) >= 0) {
    loop_2:
        if (var_r6 != M2C_FIELD((func_ov123_0209d368() + var_r5), u8 *, 0x2D0)) {
            var_r5 += 1;
            if (var_r5 <= (s32) M2C_FIELD(func_ov123_0209d368(), u8 *, 0x14)) {
                goto loop_2;
            }
        }
    }
    if (var_r5 <= (s32) M2C_FIELD(func_ov123_0209d368(), u8 *, 0x14)) {
        var_r6 += 1;
        if ((u32) var_r6 < 0x20U) {
            goto loop_1;
        }
    }
    return var_r6;
}
