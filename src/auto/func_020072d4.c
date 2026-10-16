/* compiler: 1.2/sp3  */
#include "m2c.h"

M2C_UNK OS_CreateThread(); /* extern */
M2C_UNK OS_InitMutex();                       /* extern */
M2C_UNK OS_WakeupThreadDirect();              /* extern */
M2C_UNK func_02007a78();             /* extern */
extern M2C_UNK StrmThread;

void func_020072d4(void *arg0, s32 arg1) {
    OS_CreateThread(arg0, &StrmThread, arg0, arg0 + 0x4C0, 0x400, arg1);
    func_02007a78(arg0 + 0x4E0, 0);
    OS_InitMutex(arg0 + 0x4C8);
    M2C_FIELD(arg0, s32 *, 0x4C4) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C0) = (s32) M2C_FIELD(arg0, s32 *, 0x4C4);
    OS_WakeupThreadDirect(arg0);
}
