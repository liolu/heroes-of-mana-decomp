#include "engine.h"
#include "m2c.h"

M2C_UNK OS_DisableIrqMask(M2C_UNK);
void OSi_SetTimerReserved(M2C_UNK);
extern M2C_UNK OSi_UseAlarm;

void OS_InitAlarm(void) {
    if (M2C_FIELD(&OSi_UseAlarm, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&OSi_UseAlarm, u16 *, 0) = 1U;
    OSi_SetTimerReserved(1);
    M2C_FIELD(&OSi_UseAlarm, s32 *, 4) = 0;
    M2C_FIELD(&OSi_UseAlarm, s32 *, 8) = 0;
    OS_DisableIrqMask(0x10);
}
