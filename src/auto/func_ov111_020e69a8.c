#include "m2c.h"

s32 func_ov111_020e5d60(M2C_UNK);                   /* extern */
M2C_UNK func_ov111_020e68ec();                      /* extern */
extern M2C_UNK data_ov111_020f13c0;
extern void *data_ov111_020f1bd8;

void func_ov111_020e69a8(void) {
    s32 temp_r1;

    func_ov111_020e68ec();
    temp_r1                          = (func_ov111_020e5d60(1) * 0x510) + M2C_FIELD(&data_ov111_020f13c0, s32 *, 4);
    M2C_FIELD(temp_r1, u16 *, 0x50E) = (u16) (M2C_FIELD(temp_r1, u16 *, 0x50E) | 8);
    M2C_FIELD(data_ov111_020f1bd8, u16 *, 0x50C) = (u16) (M2C_FIELD(data_ov111_020f1bd8, u16 *, 0x50C) + 3);
}
