#include "m2c.h"

M2C_UNK func_0200f8b4();
M2C_UNK OS_SleepThread(void *);

s32 func_0200fa98();

M2C_UNK func_0200faac(s32);

void OSi_CancelThreadAlarmForSleep(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xB0) == 0) {
        return;
    }
    func_0200f8b4();
}

void OS_JoinThread(void *arg0) {
    s32 temp_r4;

    temp_r4 = func_0200fa98();
    if (M2C_FIELD(arg0, s32 *, 0x64) != 2) {
        OS_SleepThread(arg0 + 0x9C);
    }
    func_0200faac(temp_r4);
}
