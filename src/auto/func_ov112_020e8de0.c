#include "m2c.h"

extern void *data_0203673c;
extern M2C_UNK data_ov112_020ec988;

s32 func_ov112_020e8de0(void) {
    s32 temp_r2;

    temp_r2 = (M2C_FIELD(&data_ov112_020ec988, u16 *, 0x80) * 0x34) + M2C_FIELD(data_0203673c, s32 *, 0x24);
    if (!((((u32) (M2C_FIELD(temp_r2, s32 *, 8) << 0x1C) >> 0x1C) != 0) && (M2C_FIELD(temp_r2, u16 *, 0x16) != 0))) {
        return 0;
    }
    return 1;
}
