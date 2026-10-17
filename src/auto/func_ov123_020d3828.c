#include "m2c.h"

u32 func_ov123_020d1e18(s32);                       /* extern */
extern void *data_ov123_020e47e8;

s32 func_ov123_020d3828(void) {
    u32 temp_r0;

    temp_r0 = func_ov123_020d1e18(M2C_FIELD(data_ov123_020e47e8, s32 *, 0x7AC4));
    switch (temp_r0) {
        case 0:
            return 0;
        case 1:
            return 1;
        case 2:
            return 2;
        case 3:
            return 3;
        default:
            return 3;
    }
}
