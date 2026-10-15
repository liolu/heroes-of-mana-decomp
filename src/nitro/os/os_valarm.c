#include "m2c.h"

M2C_UNK OS_DisableIrqMask(M2C_UNK);

extern M2C_UNK OSi_UseVAlarm;

void OS_InitVAlarm(void) {
    if (M2C_FIELD(&OSi_UseVAlarm, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&OSi_UseVAlarm, u16 *, 0)    = 1U;
    M2C_FIELD(&OSi_UseVAlarm, s32 *, 0xC)  = 0;
    M2C_FIELD(&OSi_UseVAlarm, s32 *, 0x10) = 0;
    OS_DisableIrqMask(4);
    M2C_FIELD(&OSi_UseVAlarm, s32 *, 8) = 0;
    M2C_FIELD(&OSi_UseVAlarm, s32 *, 4) = 0;
}
