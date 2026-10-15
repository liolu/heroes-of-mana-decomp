#include "m2c.h"

M2C_UNK MIi_CpuCopy16(M2C_UNK, s32, M2C_UNK);

void G3X_SetToonTable(M2C_UNK arg0) {
    MIi_CpuCopy16(arg0, 0x04000380, 0x40);
}
