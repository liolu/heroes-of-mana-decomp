#include "m2c.h"

M2C_UNK StrmCallback(void *, M2C_UNK);

s32 func_0200fa98();

M2C_UNK func_0200faac(s32);

s32 SND_StartTimer(s32, M2C_UNK, s32, M2C_UNK);

s32 EndSleep(void *arg0) {
    s32 temp_r0;
    s32 temp_r6;

    temp_r0 = (s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F;
    if (temp_r0 == 0) {
        return temp_r0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x38) != 0) {
        do {
            temp_r6 = func_0200fa98();
            StrmCallback(arg0, 1);
            func_0200faac(temp_r6);
        } while (M2C_FIELD(arg0, s32 *, 0x38) != 0);
    }
    return SND_StartTimer(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
}
