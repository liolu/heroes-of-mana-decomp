#include "m2c.h"

s32 func_ov111_020e5d98(M2C_UNK);                   /* extern */
extern s32 data_ov111_020f139c;
extern s32 data_ov111_020f13a4;
extern void *data_ov111_020f1bd8;

void func_ov111_020e8ec0(void) {
    data_ov111_020f139c                          = func_ov111_020e5d98(1);
    data_ov111_020f13a4                          = func_ov111_020e5d98(3);
    M2C_FIELD(data_ov111_020f1bd8, u16 *, 0x50C) = (u16) (M2C_FIELD(data_ov111_020f1bd8, u16 *, 0x50C) + 5);
}
