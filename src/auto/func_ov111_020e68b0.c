#include "m2c.h"

s32 func_ov111_020e5d98(M2C_UNK);                   /* extern */
extern M2C_UNK data_ov111_020ecad0;
extern void *data_ov111_020f1bd8;

void func_ov111_020e68b0(void) {
    void *temp_r4;

    temp_r4                                                                         = data_ov111_020f1bd8;
    *(s32 *) ((u8 *) &data_ov111_020ecad0 + (M2C_FIELD(temp_r4, u16 *, 0x20) << 6)) = func_ov111_020e5d98(1);
    M2C_FIELD(temp_r4, u16 *, 0x50C) = (u16) (M2C_FIELD(temp_r4, u16 *, 0x50C) + 3);
}
