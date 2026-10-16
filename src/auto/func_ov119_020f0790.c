#include "m2c.h"

s32 func_ov119_020edf78(M2C_UNK);                   /* extern */
extern M2C_UNK data_ov119_020f2258;
extern void *data_ov119_020f2f68;

void func_ov119_020f0790(void) {
    if ((s32) M2C_FIELD(&data_ov119_020f2258, s32 *, 0x438) < func_ov119_020edf78(1)) {
        M2C_FIELD(data_ov119_020f2f68, u16 *, 0x4FA) = (u16) ((M2C_FIELD(data_ov119_020f2f68, u16 *, 0x4FA) & ~1) | 1);
        return;
    }
    M2C_FIELD(data_ov119_020f2f68, u16 *, 0x4F8) = (u16) (M2C_FIELD(data_ov119_020f2f68, u16 *, 0x4F8) + 3);
}
