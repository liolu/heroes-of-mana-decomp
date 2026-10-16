#include "m2c.h"

s32 func_ov111_020e5d98(M2C_UNK);                   /* extern */
extern M2C_UNK data_ov111_020ed298;
extern void *data_ov111_020f1bd8;

void func_ov111_020e7284(void) {
    if (((u32) (M2C_FIELD(((func_ov111_020e5d98(1) * 0x820) + (s32) &data_ov111_020ed298), s32 *, 0x80C) << 0x1F) >> 0x1F) ==
        0) {
        M2C_FIELD(data_ov111_020f1bd8, u16 *, 0x50C) = (u16) (M2C_FIELD(data_ov111_020f1bd8, u16 *, 0x50C) + 3);
        return;
    }
    M2C_FIELD(data_ov111_020f1bd8, u16 *, 0x50E) = (u16) ((M2C_FIELD(data_ov111_020f1bd8, u16 *, 0x50E) & ~1) | 1);
}
