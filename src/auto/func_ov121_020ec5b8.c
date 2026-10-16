#include "m2c.h"

extern M2C_UNK data_ov121_020f77e4;

u16 func_ov121_020ec5b8(s32 arg0) {
    u32 temp_r2;

    if (arg0 == 0) {
        return 0U;
    }
    temp_r2 = (M2C_FIELD(&data_ov121_020f77e4, s32 *, 0xC) * M2C_FIELD(&data_ov121_020f77e4, u32 *, 8)) +
              M2C_FIELD(&data_ov121_020f77e4, s32 *, 0x10);
    M2C_FIELD(&data_ov121_020f77e4, u32 *, 8) = temp_r2;
    if (arg0 == 0) {
        return (u16) (temp_r2 >> 0x10);
    }
    return (u16) ((u32) ((temp_r2 >> 0x10) * arg0) >> 0x10);
}
