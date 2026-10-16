#include "m2c.h"

extern M2C_UNK data_ov122_02066494;

u16 func_ov122_02055634(s32 arg0) {
    u32 temp_r2;

    if (arg0 == 0) {
        return 0U;
    }
    temp_r2 = (M2C_FIELD(&data_ov122_02066494, s32 *, 8) * M2C_FIELD(&data_ov122_02066494, u32 *, 4)) +
              M2C_FIELD(&data_ov122_02066494, s32 *, 0xC);
    M2C_FIELD(&data_ov122_02066494, u32 *, 4) = temp_r2;
    if (arg0 == 0) {
        return (u16) (temp_r2 >> 0x10);
    }
    return (u16) ((u32) ((temp_r2 >> 0x10) * arg0) >> 0x10);
}
