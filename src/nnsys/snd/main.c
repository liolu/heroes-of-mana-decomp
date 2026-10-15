#include "m2c.h"

M2C_UNK func_02004b7c();

M2C_UNK SND_StopTimer(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

M2C_UNK SND_FlushCommand(M2C_UNK);

M2C_UNK SND_WaitForCommandProc(s32);

s32 SND_GetCurrentCommandTag();

void BeginSleep(void) {
    s32 temp_r4;

    func_02004b7c();
    SND_StopTimer(0, 0, 0, 0);
    temp_r4 = SND_GetCurrentCommandTag();
    SND_FlushCommand(1);
    SND_WaitForCommandProc(temp_r4);
}
