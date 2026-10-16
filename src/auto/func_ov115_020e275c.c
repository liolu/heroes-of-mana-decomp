#include "m2c.h"

extern M2C_UNK data_ov115_020e9a34;

u16 func_ov115_020e275c(s32 arg0) {
    u32 temp_r2;

    if (arg0 == 0) {
        return 0U;
    }
    temp_r2 = (M2C_FIELD(&data_ov115_020e9a34, s32 *, 4) * M2C_FIELD(&data_ov115_020e9a34, u32 *, 0)) +
              M2C_FIELD(&data_ov115_020e9a34, s32 *, 8);
    M2C_FIELD(&data_ov115_020e9a34, u32 *, 0) = temp_r2;
    if (arg0 == 0) {
        return (u16) (temp_r2 >> 0x10);
    }
    return (u16) ((u32) ((temp_r2 >> 0x10) * arg0) >> 0x10);
}
