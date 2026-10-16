#include "m2c.h"

M2C_UNK func_ov111_020e68ec();                      /* extern */
extern void *data_ov111_020f1bd8;

void func_ov111_020e69fc(void) {
    func_ov111_020e68ec();
    M2C_FIELD(data_ov111_020f1bd8, u16 *, 0x50C) = (u16) (M2C_FIELD(data_ov111_020f1bd8, u16 *, 0x50C) + 1);
}
