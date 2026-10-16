#include "m2c.h"

extern void *data_0203673c;

s32 func_ov123_020cf86c(s32 arg0) {
    u16 temp_r2;

    if (arg0 == 0x7F) {
        return 0;
    }
    temp_r2 = arg0 - 0x32;
    if (((u32) M2C_FIELD((M2C_FIELD(data_0203673c, s32 *, 0x2C) + (((s32) temp_r2 >> 5) * 4)), u32 *, 0x1090) >>
         (temp_r2 & 0x1F)) &
        1) {
        return 1;
    }
    return 0;
}
