#include "m2c.h"

M2C_UNK OS_VSNPrintf(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void OS_VSPrintf(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    OS_VSNPrintf(arg0, 0x7FFFFFFF, arg1, arg2);
}
