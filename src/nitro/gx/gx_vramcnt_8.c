#include "m2c.h"

M2C_UNK resetBankForX_(M2C_UNK *);

extern M2C_UNK data_02038596;

void GX_ResetBankForSubBGExtPltt(void) {
    *(s32 *) 0x04001000 &= ~0x40000000;
    resetBankForX_(&data_02038596);
}
