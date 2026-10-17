/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_020a8ba4(void *);                    /* extern */
extern s8 data_ov123_020e45c4;
extern void *data_ov123_020e45c8;

s32 func_ov123_020b2118(void) {
    u8 temp_r0;

    if (func_ov123_020a8ba4(data_ov123_020e45c8) == 0) {
        data_ov123_020e45c4 = 1;
        return 1;
    }
    temp_r0 = M2C_FIELD(data_ov123_020e45c8, u8 *, 0x116);
    if ((temp_r0 == 1) || ((u32) (u8) (temp_r0 + 0xFD) <= 2U)) {
        return 0;
    }
    return 2;
}
