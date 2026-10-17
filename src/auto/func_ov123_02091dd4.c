/* compiler: 1.2/sp3 */
#include "m2c.h"

void *func_ov123_020913d8(M2C_UNK);                 /* extern */
s32 func_ov123_0209418c(void *);                    /* extern */
s32 func_ov123_0209422c(void *);                    /* extern */

s32 func_ov123_02091dd4(void *arg0) {
    u32 temp_r0_2;
    u32 temp_r0_3;
    void *temp_r0;

    temp_r0   = func_ov123_020913d8(0x10);
    temp_r0_2 = (u32) (M2C_FIELD(temp_r0, u8 *, 0xD0C) << 0x1C) >> 0x1C;
    if (((temp_r0_2 == 0) || (temp_r0_2 == 4)) && ((u8) (((s32) M2C_FIELD(arg0, u16 *, 0x2C) >> 4) & 1) == 1) &&
        (func_ov123_0209418c(arg0 + 0xC) == 1)) {
        return 6;
    }
    temp_r0_3 = (u32) (M2C_FIELD(temp_r0, u8 *, 0xD0C) << 0x1C) >> 0x1C;
    if (((temp_r0_3 == 0) || (temp_r0_3 == 5)) && ((u8) (((s32) M2C_FIELD(arg0, u16 *, 0x2C) >> 4) & 1) == 1) &&
        (func_ov123_0209422c(arg0 + 0xC) == 1)) {
        return 7;
    }
    return -1;
}
