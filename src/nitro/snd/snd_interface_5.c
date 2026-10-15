#include "engine.h"
#include "m2c.h"

void PushCommand_impl(s32, s32, s32, s32, s32);

void SND_InvalidateSeqData(s32 arg0, s32 arg1) {
    PushCommand_impl(0x1E, arg0, arg1, 0, 0);
}

void SND_InvalidateBankData(s32 arg0, s32 arg1) {
    PushCommand_impl(0x1F, arg0, arg1, 0, 0);
}

void SND_InvalidateWaveData(s32 arg0, s32 arg1) {
    PushCommand_impl(0x20, arg0, arg1, 0, 0);
}
