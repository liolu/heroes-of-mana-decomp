#include "m2c.h"

M2C_UNK OS_InitMutex(M2C_UNK *);

M2C_UNK SND_CommandInit();

M2C_UNK SND_AlarmInit();

extern s32 data_020389c0;
extern M2C_UNK sSndMutex;
M2C_UNK OS_LockMutex(M2C_UNK *);
M2C_UNK func_0200e644(M2C_UNK *);

void SND_Init(void) {
    if (data_020389c0 != 0) {
        return;
    }
    data_020389c0 = 1;
    OS_InitMutex(&sSndMutex);
    SND_CommandInit();
    SND_AlarmInit();
}

void SNDi_LockMutex(void) {
    OS_LockMutex(&sSndMutex);
}

void SNDi_UnlockMutex(void) {
    func_0200e644(&sSndMutex);
}
