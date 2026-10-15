#include "m2c.h"

M2C_UNK MI_CpuCopy8(M2C_UNK, M2C_UNK, M2C_UNK);

s32 FSi_ReadMemoryCore(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    MI_CpuCopy8(arg2, arg1, arg3);
    return 0;
}
