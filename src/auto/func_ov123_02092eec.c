#include "m2c.h"

s32 func_ov123_02092d40(M2C_UNK);                   /* extern */
s32 func_ov123_0209335c(void *);                    /* extern */
s8 func_ov123_02093594(M2C_UNK);                    /* extern */

s32 func_ov123_02092eec(void *arg0) {
    if ((M2C_FIELD(arg0, u16 *, 0xD16) != 0) && (func_ov123_02092d40(2) != 0)) {
        M2C_FIELD(arg0, s8 *, 0xD11) = func_ov123_02093594(0);
        return 5;
    }
    if ((u32) ((u32) (M2C_FIELD(arg0, u8 *, 0xD0B) << 0x18) >> 0x1C) >= 1U) {
        return 6;
    }
    return func_ov123_0209335c(arg0);
}
