#include "m2c.h"

M2C_UNK OS_SetIrqFunction(M2C_UNK, M2C_UNK *);

M2C_UNK OS_EnableIrqMask(M2C_UNK);

M2C_UNK OSi_SetTimerReserved(M2C_UNK);

extern M2C_UNK OSi_UseTick;
extern M2C_UNK func_0200f4a8;

void OS_InitTick(void) {
    if (M2C_FIELD(&OSi_UseTick, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&OSi_UseTick, u16 *, 0) = 1U;
    OSi_SetTimerReserved(0);
    M2C_FIELD(&OSi_UseTick, s32 *, 8)         = 0;
    M2C_FIELD(&OSi_UseTick, s32 *, 0xC)       = 0;
    M2C_FIELD((void *) 0x04000102, s16 *, 0)  = 0;
    M2C_FIELD((void *) 0x04000102, s16 *, -2) = 0;
    M2C_FIELD((void *) 0x04000102, s16 *, 0)  = 0xC1;
    OS_SetIrqFunction(8, &func_0200f4a8);
    OS_EnableIrqMask(8);
    M2C_FIELD(&OSi_UseTick, s32 *, 4) = 0;
}
