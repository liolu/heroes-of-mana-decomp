#include "m2c.h"

M2C_UNK OSi_InsertLinkToQueue(s32, void *);

M2C_UNK OSi_RescheduleThread();

s32 func_0200fa98();

M2C_UNK func_0200faac(s32);

extern M2C_UNK OSi_SystemCallbackInSwitchThread;

void OS_SleepThread(s32 arg0) {
    s32 temp_r4;
    void *temp_r5;

    temp_r4 = func_0200fa98();
    temp_r5 = *M2C_FIELD(&OSi_SystemCallbackInSwitchThread, void ***, 8);
    if (arg0 != 0) {
        M2C_FIELD(temp_r5, s32 *, 0x78) = arg0;
        OSi_InsertLinkToQueue(arg0, temp_r5);
    }
    M2C_FIELD(temp_r5, s32 *, 0x64) = 0;
    OSi_RescheduleThread();
    func_0200faac(temp_r4);
}
