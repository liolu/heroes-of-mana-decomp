#include "m2c.h"

M2C_UNK NNSi_SndFaderSet(void *, M2C_UNK, M2C_UNK);

M2C_UNK NNSi_SndFaderInit(void *);
M2C_UNK NNS_SndHeapClear(s32);

void *func_0200789c(s32, M2C_UNK);

M2C_UNK func_020078b4(s32, void *);

extern M2C_UNK sPlayer;

void InitPlayer(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x2E)  = 0;
    M2C_FIELD(arg0, s8 *, 0x2D)  = 0;
    M2C_FIELD(arg0, s8 *, 0x2F)  = 0;
    M2C_FIELD(arg0, s16 *, 0x34) = 0;
    M2C_FIELD(arg0, s16 *, 0x3E) = 0;
    M2C_FIELD(arg0, s8 *, 0x40)  = 0x7F;
    M2C_FIELD(arg0, s8 *, 0x41)  = 0x7F;
    NNSi_SndFaderInit(arg0 + 0x1C);
    NNSi_SndFaderSet(arg0 + 0x1C, 0x7F00, 1);
}

s32 NNSi_SndPlayerAllocHeap(s32 arg0, void *arg1) {
    s32 temp_r5;
    void *temp_r0;

    temp_r5 = (arg0 * 0x24) + (s32) &sPlayer;
    temp_r0 = func_0200789c(temp_r5 + 0xC, 0);
    if (temp_r0 == NULL) {
        return 0;
    }
    func_020078b4(temp_r5 + 0xC, temp_r0);
    M2C_FIELD(temp_r0, void **, 0xC) = arg1;
    M2C_FIELD(arg1, void **, 8)      = temp_r0;
    NNS_SndHeapClear(M2C_FIELD(temp_r0, s32 *, 8));
    return M2C_FIELD(temp_r0, s32 *, 8);
}
