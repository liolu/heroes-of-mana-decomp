#include "m2c.h"

M2C_UNK resetBankForX_(M2C_UNK *);
extern M2C_UNK data_02038598;

void func_0200a564(void) {
    *(s32 *) 0x04001000 &= ~0x80000000;
    resetBankForX_(&data_02038598);
}
