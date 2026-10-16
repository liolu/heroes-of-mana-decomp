#include "m2c.h"

M2C_UNK func_020037e8();                            /* extern */
M2C_UNK func_ov111_020e5d98(M2C_UNK);               /* extern */
extern void *data_ov111_020f1bd8;

void func_ov111_020e6c14(void) {
    func_ov111_020e5d98(1);
    func_020037e8();
    M2C_FIELD(data_ov111_020f1bd8, u16 *, 0x50C) = (u16) (M2C_FIELD(data_ov111_020f1bd8, u16 *, 0x50C) + 3);
}
