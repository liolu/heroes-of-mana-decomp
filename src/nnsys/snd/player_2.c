#include "m2c.h"

M2C_UNK NNS_SndHeapDestroy();

M2C_UNK func_020078b4(s32, void *);

extern M2C_UNK sPlayer;

void PlayerHeapDisposeCallback(void *arg0) {
    void *temp_r1;

    if (M2C_FIELD(arg0, s32 *, 8) == 0) {
        return;
    }
    NNS_SndHeapDestroy();
    temp_r1 = M2C_FIELD(arg0, void **, 0xC);
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, s32 *, 8) = 0;
        return;
    }
    func_020078b4((M2C_FIELD(arg0, s32 *, 0x10) * 0x24) + (s32) &sPlayer + 0xC, arg0);
}
