#include "m2c.h"

M2C_UNK func_0202f45c(void *);                      /* extern */
M2C_UNK func_0202f7e8(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_ov004_020bf89c;

void *func_ov004_020bf8e0(void *arg0) {
    func_0202f7e8(M2C_FIELD(arg0, s32 *, 0xC), 0x18, 8, &func_ov004_020bf89c);
    func_0202f45c(arg0);
    return arg0;
}
