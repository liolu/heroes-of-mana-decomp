#include "m2c.h"

M2C_UNK DisposeCallback(M2C_UNK, M2C_UNK, M2C_UNK);

M2C_UNK SND_DestroyWaveArc(M2C_UNK);

void WaveArcTableDisposeCallback(M2C_UNK arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    DisposeCallback(arg0, arg2, arg3);
    SND_DestroyWaveArc(arg0);
}
