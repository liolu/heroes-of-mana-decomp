#include "m2c.h"

M2C_UNK DC_FlushRange(M2C_UNK, s32);

M2C_UNK DC_WaitWriteBufferEmpty();

M2C_UNK MBi_SendMP(M2C_UNK, s32, M2C_UNK);

void MBi_BlockHeaderEnd(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    DC_FlushRange(arg2, (arg0 + 0x1F) & ~0x1F);
    DC_WaitWriteBufferEmpty();
    MBi_SendMP(arg2, arg0, arg1);
}
