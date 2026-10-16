#include "m2c.h"

s32 func_ov119_020edf78(M2C_UNK);                   /* extern */
extern void *data_ov119_020f2f68;

void func_ov119_020ee6a8(void) {
    M2C_FIELD(data_ov119_020f2f68, s32 *, 8)     = func_ov119_020edf78(1);
    M2C_FIELD(data_ov119_020f2f68, u16 *, 0x4F8) = (u16) (M2C_FIELD(data_ov119_020f2f68, u16 *, 0x4F8) + 3);
}
