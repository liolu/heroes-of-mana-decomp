#include "m2c.h"

M2C_UNK DC_StoreRange(s32, M2C_UNK);

M2C_UNK SNDi_LockMutex();

M2C_UNK SNDi_UnlockMutex();

void SND_SetWaveDataAddress(s32 arg0, s32 arg1, s32 arg2) {
    SNDi_LockMutex();
    M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x3C) = arg2;
    DC_StoreRange(arg0 + 0x3C + (arg1 * 4), 4);
    SNDi_UnlockMutex();
}
