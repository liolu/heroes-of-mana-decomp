#include "m2c.h"

M2C_UNK MIi_CheckAnotherAutoDMA(s32, M2C_UNK);
M2C_UNK MIi_CheckDma0SourceAddress(s32, M2C_UNK, s32, M2C_UNK);
M2C_UNK MIi_DmaSetParams(s32, M2C_UNK, M2C_UNK, s32);

void MIi_CardDmaCopy32(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    MIi_CheckAnotherAutoDMA(arg0, -1);
    MIi_CheckDma0SourceAddress(arg0, arg1, arg3, 0x01000000);
    if (arg3 == 0) {
        return;
    }
    while (*(volatile u32 *) ((((arg0 * 3) + 2) * 4 + 0xB0) + 0x04000000) & 0x80000000) {
    }
    MIi_DmaSetParams(arg0, arg1, arg2, 0xAF000001);
}
