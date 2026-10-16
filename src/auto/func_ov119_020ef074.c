#include "m2c.h"

s32 func_ov119_020edf78(M2C_UNK);                   /* extern */
extern M2C_UNK data_ov119_020f1e50;
extern void *data_ov119_020f2f68;

void func_ov119_020ef074(void) {
    M2C_FIELD(&data_ov119_020f1e50, s32 *, 0) =
        (s32) ((M2C_FIELD(&data_ov119_020f1e50, s32 *, 0) & ~2) | ((u32) (func_ov119_020edf78(1) << 0x1F) >> 0x1E));
    M2C_FIELD(&data_ov119_020f1e50, s32 *, 0) =
        (s32) ((M2C_FIELD(&data_ov119_020f1e50, s32 *, 0) & ~0x3FC) | ((u32) (func_ov119_020edf78(3) << 0x18) >> 0x16));
    M2C_FIELD(&data_ov119_020f1e50, s32 *, 0) =
        (s32) ((((M2C_FIELD(&data_ov119_020f1e50, s32 *, 0) & 0xFC0003FF) | ((u32) (func_ov119_020edf78(5) << 0x10) >> 6)) &
                ~1) |
               1);
    M2C_FIELD(&data_ov119_020f1e50, s32 *, 0xC)  = func_ov119_020edf78(7);
    M2C_FIELD(data_ov119_020f2f68, u16 *, 0x4F8) = (u16) (M2C_FIELD(data_ov119_020f2f68, u16 *, 0x4F8) + 9);
}
