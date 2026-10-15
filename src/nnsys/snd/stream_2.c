#include "m2c.h"

M2C_UNK SND_StartTimer(s32, M2C_UNK, s32, M2C_UNK);

M2C_UNK PM_PrependPreSleepCallback(void *);

M2C_UNK PM_AppendPostSleepCallback(void *);
M2C_UNK NNS_SndUnlockChannel();

s32 NNS_SndStrmStart(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    SND_StartTimer(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
    temp_r0_2 = (s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F;
    if (temp_r0_2 != 0) {
        return temp_r0_2;
    }
    PM_PrependPreSleepCallback(arg0 + 8);
    PM_AppendPostSleepCallback(arg0 + 0x14);
    temp_r0                      = M2C_FIELD(arg0, s32 *, 0x24) | 2;
    M2C_FIELD(arg0, s32 *, 0x24) = temp_r0;
    return temp_r0;
}

void NNS_SndStrmFreeChannel(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x44) == 0) {
        return;
    }
    NNS_SndUnlockChannel();
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
}
