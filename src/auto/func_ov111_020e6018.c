#include "m2c.h"

M2C_UNK func_ov111_020e5d24(s32, s32);              /* extern */
s32 func_ov111_020e5d60(M2C_UNK);                   /* extern */
s32 func_ov111_020e5d98(M2C_UNK);                   /* extern */
extern void *data_ov111_020f1bd8;

void func_ov111_020e6018(void) {
    s32 temp_r4;

    temp_r4 = func_ov111_020e5d60(1);
    func_ov111_020e5d24(temp_r4, func_ov111_020e5d98(1) - 1);
    M2C_FIELD(data_ov111_020f1bd8, u16 *, 0x50C) = (u16) (M2C_FIELD(data_ov111_020f1bd8, u16 *, 0x50C) + 3);
}
