#include "m2c.h"

extern void *data_ov123_020e4734;

s32 func_ov123_020ca754(void *arg0) {
    u16 temp_r2;
    u16 temp_r2_2;

    if (((u32) (M2C_FIELD(data_ov123_020e4734, u8 *, 0x38) << 0x1D) >> 0x1F) == 0) {
        return 0;
    }
    temp_r2 = M2C_FIELD(data_ov123_020e4734, u16 *, 0x28);
    if ((u32) M2C_FIELD(arg0, u16 *, 0) > (u32) temp_r2) {
        return 0;
    }
    if ((u32) M2C_FIELD(arg0, u16 *, 4) < (u32) temp_r2) {
        return 0;
    }
    temp_r2_2 = M2C_FIELD(data_ov123_020e4734, u16 *, 0x2A);
    if ((u32) M2C_FIELD(arg0, u16 *, 2) > (u32) temp_r2_2) {
        return 0;
    }
    if ((u32) M2C_FIELD(arg0, u16 *, 6) >= (u32) temp_r2_2) {
        return 1;
    }
    return 0;
}
