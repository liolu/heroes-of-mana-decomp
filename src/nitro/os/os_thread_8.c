#include "m2c.h"

M2C_UNK OS_KillThreadWithPriority(M2C_UNK, M2C_UNK, s32);

s32 OS_GetThreadPriority();

void OS_KillThread(M2C_UNK arg0, M2C_UNK arg1) {
    OS_KillThreadWithPriority(arg0, arg1, OS_GetThreadPriority());
}
