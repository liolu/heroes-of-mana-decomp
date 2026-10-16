#include "m2c.h"

M2C_UNK func_0202f45c(void *);                      /* extern */
M2C_UNK func_0202f7e8(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_ov004_020be350;

void *func_ov004_020be5d0(void *arg0) {
    func_0202f7e8(M2C_FIELD(arg0, s32 *, 0xC), 0x2C, 8, &func_ov004_020be350);
    func_0202f45c(arg0);
    return arg0;
}
