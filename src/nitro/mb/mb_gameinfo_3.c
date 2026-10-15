#include "m2c.h"

extern M2C_UNK sUnlockFunc;

void MBi_ClearSendStatus(void) {
    M2C_FIELD(&sUnlockFunc, s8 *, 0x25) = 0;
    M2C_FIELD(&sUnlockFunc, s8 *, 0x26) = 0;
    M2C_FIELD(&sUnlockFunc, s8 *, 0x27) = 0;
    M2C_FIELD(&sUnlockFunc, s8 *, 0x28) = 0;
    M2C_FIELD(&sUnlockFunc, s8 *, 0x29) = 0;
}
