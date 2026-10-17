#include "m2c.h"

M2C_UNK Stop_SoundEffect(s32, s32);              /* extern */
s32 func_ov111_020e5d98(M2C_UNK);                   /* extern */
extern void *data_ov111_020f1bd8;

void func_ov111_020e902c(void) {
    s32 temp_r4;

    temp_r4 = func_ov111_020e5d98(1);
    Stop_SoundEffect(temp_r4, func_ov111_020e5d98(3));
    M2C_FIELD(data_ov111_020f1bd8, u16 *, 0x50C) = (u16) (M2C_FIELD(data_ov111_020f1bd8, u16 *, 0x50C) + 5);
}
