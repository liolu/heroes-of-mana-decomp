#include "m2c.h"

s32 func_ov111_020e5d60(M2C_UNK);                   /* extern */
s32 func_ov111_020e5d98(M2C_UNK);                   /* extern */
extern M2C_UNK data_ov111_020f13c0;
extern void *data_ov111_020f1bd8;

void func_ov111_020e65c4(void) {
    s32 temp_r4;
    void *temp_r2;

    temp_r4                                                                    = func_ov111_020e5d60(1) * 0x510;
    M2C_FIELD((M2C_FIELD(&data_ov111_020f13c0, s32 *, 4) + temp_r4), s32 *, 8) = (s32) (func_ov111_020e5d98(3) << 0xA);
    temp_r2                                      = M2C_FIELD(&data_ov111_020f13c0, s32 *, 4) + temp_r4;
    M2C_FIELD(temp_r2, s32 *, 0x14)              = (s32) M2C_FIELD(temp_r2, s32 *, 8);
    M2C_FIELD(data_ov111_020f1bd8, u16 *, 0x50C) = (u16) (M2C_FIELD(data_ov111_020f1bd8, u16 *, 0x50C) + 5);
}
