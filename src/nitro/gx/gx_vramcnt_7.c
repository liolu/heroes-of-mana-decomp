#include "m2c.h"

M2C_UNK resetBankForX_(M2C_UNK *);

extern M2C_UNK data_02038590;

extern M2C_UNK data_02038588;

extern M2C_UNK data_0203858a;

void GX_ResetBankForOBJExtPltt(void) {
    *(s32 *) 0x04000000 &= ~0x80000000;
    resetBankForX_(&data_02038590);
}

void GX_ResetBankForTex(void) {
    resetBankForX_(&data_02038588);
}

void GX_ResetBankForTexPltt(void) {
    resetBankForX_(&data_0203858a);
}
