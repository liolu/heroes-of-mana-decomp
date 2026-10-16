#include "m2c.h"

s32 func_ov119_020edf78(M2C_UNK);                   /* extern */
extern s32 data_ov119_020f1e48;
extern s32 data_ov119_020f1e4c;
extern void *data_ov119_020f2f68;

void func_ov119_020eef88(void) {
    data_ov119_020f1e4c                          = func_ov119_020edf78(1);
    data_ov119_020f1e48                          = func_ov119_020edf78(3);
    M2C_FIELD(data_ov119_020f2f68, u16 *, 0x4F8) = (u16) (M2C_FIELD(data_ov119_020f2f68, u16 *, 0x4F8) + 5);
}
