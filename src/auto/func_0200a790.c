#include "m2c.h"

M2C_UNK disableBankForX_(M2C_UNK *);
extern M2C_UNK data_02038598;

void func_0200a790(void) {
    *(s32 *) 0x04001000 &= ~0x80000000;
    disableBankForX_(&data_02038598);
}
