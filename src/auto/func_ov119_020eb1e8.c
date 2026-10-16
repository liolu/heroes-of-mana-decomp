#include "m2c.h"

extern M2C_UNK data_ov119_020f2f5c;

u16 func_ov119_020eb1e8(s32 arg0) {
    u32 temp_r2;

    if (arg0 == 0) {
        return 0U;
    }
    temp_r2 = (M2C_FIELD(&data_ov119_020f2f5c, s32 *, 4) * M2C_FIELD(&data_ov119_020f2f5c, u32 *, 0)) +
              M2C_FIELD(&data_ov119_020f2f5c, s32 *, 8);
    M2C_FIELD(&data_ov119_020f2f5c, u32 *, 0) = temp_r2;
    if (arg0 == 0) {
        return (u16) (temp_r2 >> 0x10);
    }
    return (u16) ((u32) ((temp_r2 >> 0x10) * arg0) >> 0x10);
}
