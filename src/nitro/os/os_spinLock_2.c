#include "m2c.h"

M2C_UNK OSi_DoUnlockByWord(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void OS_UnlockByWord(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    OSi_DoUnlockByWord(arg0, arg1, arg2, 0);
}
