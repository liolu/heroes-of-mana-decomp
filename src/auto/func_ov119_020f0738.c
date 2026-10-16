#include "m2c.h"

extern M2C_UNK data_ov119_020f2258;
extern void *data_ov119_020f2f68;

void func_ov119_020f0738(void) {
    if (((u32) (M2C_FIELD(&data_ov119_020f2258, s32 *, 0x34) << 0xE) >> 0x1F) != 0) {
        M2C_FIELD(data_ov119_020f2f68, u16 *, 0x4F8) = (u16) (M2C_FIELD(data_ov119_020f2f68, u16 *, 0x4F8) + 1);
        return;
    }
    M2C_FIELD(data_ov119_020f2f68, u16 *, 0x4FA) = (u16) ((M2C_FIELD(data_ov119_020f2f68, u16 *, 0x4FA) & ~1) | 1);
}
