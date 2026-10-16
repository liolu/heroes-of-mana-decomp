#include "m2c.h"

extern M2C_UNK data_ov119_020f2028;
extern void *data_ov119_020f2f68;

void func_ov119_020eee4c(void) {
    if ((((u32) (M2C_FIELD(&data_ov119_020f2028, s32 *, 8) << 0x1F) >> 0x1F) != 0) ||
        (((u32) (M2C_FIELD(&data_ov119_020f2028, s32 *, 0x120) << 0x1F) >> 0x1F) != 0)) {
        M2C_FIELD(data_ov119_020f2f68, u16 *, 0x4FA) = (u16) ((M2C_FIELD(data_ov119_020f2f68, u16 *, 0x4FA) & ~1) | 1);
        return;
    }
    M2C_FIELD(data_ov119_020f2f68, u16 *, 0x4F8) = (u16) (M2C_FIELD(data_ov119_020f2f68, u16 *, 0x4F8) + 1);
}
