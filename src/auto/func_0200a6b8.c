#include "m2c.h"

M2C_UNK disableBankForX_(M2C_UNK *);
extern M2C_UNK data_02038590;

void func_0200a6b8(void) {
    *(s32 *) 0x04000000 &= ~0x80000000;
    disableBankForX_(&data_02038590);
}
