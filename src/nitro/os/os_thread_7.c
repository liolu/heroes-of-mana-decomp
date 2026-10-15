#include "m2c.h"

M2C_UNK func_0200d724(s32, void *);

M2C_UNK OSi_RemoveThreadFromList(void *);

M2C_UNK OS_WakeupThread(void *);

M2C_UNK OSi_RescheduleThread();

M2C_UNK func_0200e1a4();

M2C_UNK OS_EnableScheduler();

M2C_UNK OSi_UnlockAllMutex(void *);

M2C_UNK func_0200fddc();

extern M2C_UNK OSi_SystemCallbackInSwitchThread;

void OSi_ExitThread_Destroy(void) {
    s32 temp_r0;
    void *temp_r4;

    temp_r4 = *M2C_FIELD(&OSi_SystemCallbackInSwitchThread, void ***, 8);
    func_0200e1a4();
    OSi_UnlockAllMutex(temp_r4);
    temp_r0 = M2C_FIELD(temp_r4, s32 *, 0x78);
    if (temp_r0 != 0) {
        func_0200d724(temp_r0, temp_r4);
    }
    OSi_RemoveThreadFromList(temp_r4);
    M2C_FIELD(temp_r4, s32 *, 0x64) = 2;
    OS_WakeupThread(temp_r4 + 0x9C);
    OS_EnableScheduler();
    OSi_RescheduleThread();
    func_0200fddc();
}
