#include "m2c.h"

s32 OS_GetConsoleType();

s32 OS_GetInitArenaHi(M2C_UNK);

s32 OS_GetInitArenaLo(M2C_UNK);

M2C_UNK OS_SetArenaHi(M2C_UNK, s32);

M2C_UNK OS_SetArenaLo(M2C_UNK, s32);

M2C_UNK OS_SetProtectionRegion1(s32);

M2C_UNK OS_SetProtectionRegion2(s32);

extern M2C_UNK OSi_Initialized;

void OS_InitArenaEx(void) {
    OS_SetArenaHi(2, OS_GetInitArenaHi(2));
    OS_SetArenaLo(2, OS_GetInitArenaLo(2));
    if ((M2C_FIELD(&OSi_Initialized, s32 *, 4) != 0) && ((OS_GetConsoleType() & 3) != 1)) {
        return;
    }
    OS_SetProtectionRegion1(0x0200002B);
    OS_SetProtectionRegion2(0x023E0021);
}

s32 OS_GetArenaHi(s32 arg0) {
    return ((s32 *) (0x027FF000 + 0xDC4))[arg0];
}

s32 OS_GetArenaLo(s32 arg0) {
    return ((s32 *) (0x027FF000 + 0xDA0))[arg0];
}
