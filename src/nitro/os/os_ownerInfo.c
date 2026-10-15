#include "m2c.h"

M2C_UNK MI_CpuCopy8(s32, M2C_UNK, M2C_UNK);

void OS_GetMacAddress(M2C_UNK arg0) {
    MI_CpuCopy8(0x027FFCF4, arg0, 6);
}
