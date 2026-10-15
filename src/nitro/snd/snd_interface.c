#include "m2c.h"

M2C_UNK PushCommand_impl(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32);
M2C_UNK SNDi_SetPlayerParam(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK SNDi_SetTrackParam(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32);

void SND_StopSeq(M2C_UNK arg0) {
    PushCommand_impl(1, arg0, 0, 0, 0);
}

void SND_PrepareSeq(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    PushCommand_impl(2, arg0, arg1, arg2, arg3);
}

void SND_StartPreparedSeq(M2C_UNK arg0) {
    PushCommand_impl(3, arg0, 0, 0, 0);
}

void SND_SetPlayerVolume(M2C_UNK arg0, M2C_UNK arg1) {
    SNDi_SetPlayerParam(arg0, 6, arg1, 2);
}

void SND_SetPlayerChannelPriority(M2C_UNK arg0, M2C_UNK arg1) {
    SNDi_SetPlayerParam(arg0, 4, arg1, 1);
}

void SND_SetTrackPitch(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    SNDi_SetTrackParam(arg0, arg1, 0xC, arg2, 2);
}

void SND_SetTrackAllocatableChannel(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    PushCommand_impl(9, arg0, arg1, arg2, 0);
}

void SND_StartTimer(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    PushCommand_impl(0xC, arg0, arg1, arg2, arg3);
}
