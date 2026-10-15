#include "m2c.h"

M2C_UNK WM_StartDataSharing(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32);

void WM_StartKeySharing(M2C_UNK arg0, M2C_UNK arg1) {
    WM_StartDataSharing(arg0, arg1, 0xFFFF, 2, 1);
}
