#include "m2c.h"

M2C_UNK func_ov111_020e5d24(s32, M2C_UNK);          /* extern */
s32 func_ov111_020e5d60(M2C_UNK);                   /* extern */
extern void *data_ov111_020f1bd8;

void func_ov111_020e6094(void) {
    func_ov111_020e5d24(func_ov111_020e5d60(1), 0);
    M2C_FIELD(data_ov111_020f1bd8, u16 *, 0x50C) = (u16) (M2C_FIELD(data_ov111_020f1bd8, u16 *, 0x50C) + 3);
}
