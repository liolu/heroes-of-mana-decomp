#include "m2c.h"

M2C_UNK func_ov004_020c295c();                      /* extern */
extern M2C_UNK data_ov004_020cee00;

void *func_ov004_020cbdc4(void *arg0) {
    func_ov004_020c295c();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_ov004_020cee00;
    M2C_FIELD(arg0, s32 *, 0x10)   = 0;
    M2C_FIELD(arg0, s32 *, 0x14)   = 0;
    M2C_FIELD(arg0, s32 *, 0x18)   = 0;
    return arg0;
}
