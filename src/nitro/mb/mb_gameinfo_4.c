#include "m2c.h"

extern M2C_UNK sUnlockFunc;

void MBi_InitSendVolatBeacon(void) {
    M2C_FIELD(M2C_FIELD(&sUnlockFunc, void **, 0x1C), s16 *, 0x4B0) = 1;
    M2C_FIELD(&sUnlockFunc, u8 *, 0x26) = (u8) M2C_FIELD(M2C_FIELD(&sUnlockFunc, void **, 0x1C), u8 *, 0x4B4);
    M2C_FIELD(&sUnlockFunc, s8 *, 0x24) = 5;
}
