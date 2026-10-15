#include "m2c.h"

M2C_UNK OSi_ExitThread_ArgSpecified(s32, M2C_UNK);

M2C_UNK func_0200fa98();

extern M2C_UNK OSi_SystemCallbackInSwitchThread;

void OS_ExitThread(void) {
    func_0200fa98();
    OSi_ExitThread_ArgSpecified(M2C_FIELD(&OSi_SystemCallbackInSwitchThread, s32 *, 0x28), 0);
}
