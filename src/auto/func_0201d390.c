#include "m2c.h"

M2C_UNK func_0201d3bc();                            /* extern */
extern M2C_UNK data_0203bb40;

void func_0201d390(void) {
    M2C_FIELD(&data_0203bb40, s32 *, 0x18) = 0;
    M2C_FIELD(&data_0203bb40, s32 *, 0x1C) = 0;
    M2C_FIELD(&data_0203bb40, s8 *, 0x24)  = 1;
    M2C_FIELD(&data_0203bb40, s32 *, 0x14) = 0;
    func_0201d3bc();
}
