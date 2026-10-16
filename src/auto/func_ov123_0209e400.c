#include "m2c.h"

void *func_ov123_0209d368();                        /* extern */

s32 func_ov123_0209e400(s32 arg0) {
    s32 var_r5;
    s32 var_r6;
    u8 temp_r0;

    var_r6 = 0;
    if (arg0 != 0) {
        return M2C_FIELD(func_ov123_0209d368(), s32 *, 0x2F0) & ~1;
    }
    var_r5 = 1;
    if ((s32) M2C_FIELD(func_ov123_0209d368(), u8 *, 0xD) >= 1) {
        do {
            temp_r0 = M2C_FIELD((func_ov123_0209d368() + var_r5), u8 *, 0x2D0);
            var_r5 += 1;
            var_r6 |= 1 << temp_r0;
        } while (var_r5 <= (s32) M2C_FIELD(func_ov123_0209d368(), u8 *, 0xD));
    }
    return var_r6;
}
