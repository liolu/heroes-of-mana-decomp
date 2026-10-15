#include "m2c.h"

M2C_UNK SND_FlushCommand(M2C_UNK);

M2C_UNK SND_WaitForCommandProc(s32);

s32 SND_GetCurrentCommandTag();

void EraseSync(void) {
    s32 temp_r4;

    temp_r4 = SND_GetCurrentCommandTag();
    SND_FlushCommand(1);
    SND_WaitForCommandProc(temp_r4);
}
