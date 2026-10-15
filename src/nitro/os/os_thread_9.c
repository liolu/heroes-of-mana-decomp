#include "engine.h"
#include "m2c.h"

void OSi_ExitThread_ArgSpecified(M2C_UNK, M2C_UNK);
void OSi_ExitThread(void);
void OSi_CancelThreadAlarmForSleep(M2C_UNK);
void OSi_RescheduleThread(void);
void OS_SetThreadPriority(M2C_UNK, M2C_UNK);
void func_0200e1a4(void);
void OS_EnableScheduler(void);
void OS_InitContext(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_0200fa98(void);
void func_0200faac(M2C_UNK);
extern M2C_UNK OSi_SystemCallbackInSwitchThread;

void OS_KillThreadWithPriority(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r4;
    s32 var_r2;

    temp_r4 = func_0200fa98();
    if (arg0 == M2C_FIELD(&OSi_SystemCallbackInSwitchThread, s32 *, 0x28)) {
        OSi_ExitThread_ArgSpecified(arg0, arg1);
    }
    OSi_CancelThreadAlarmForSleep(arg0);
    var_r2 = M2C_FIELD(&OSi_SystemCallbackInSwitchThread, s32 *, 0x1C);
    if (var_r2 == 0) {
        var_r2 = M2C_FIELD(arg0, s32 *, 0x94) - 4;
    }
    OS_InitContext(arg0, (s32) OSi_ExitThread, var_r2);
    M2C_FIELD(arg0, s32 *, 4)    = arg1;
    M2C_FIELD(arg0, s32 *, 0)    = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x80);
    M2C_FIELD(arg0, s32 *, 0x64) = 1;
    func_0200e1a4();
    OS_SetThreadPriority(arg0, arg2);
    OS_EnableScheduler();
    OSi_RescheduleThread();
    func_0200faac(temp_r4);
}
