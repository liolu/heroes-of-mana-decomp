#include "m2c.h"

M2C_UNK func_ov004_020b9e84();                      /* extern */
extern M2C_UNK data_ov004_020cd9a4;

void *func_ov004_020bc234(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_ov004_020cd9a4;
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    M2C_FIELD(arg0, s32 *, 8)      = 2;
    M2C_FIELD(arg0, s16 *, 0xC)    = 0;
    M2C_FIELD(arg0, s16 *, 0xE)    = 0;
    M2C_FIELD(arg0, s8 *, 0x10)    = 0;
    func_ov004_020b9e84();
    return arg0;
}
