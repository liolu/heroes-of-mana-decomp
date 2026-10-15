#include "m2c.h"

M2C_UNK PushCommand_impl(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32);

void SND_SetOutputSelector(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    PushCommand_impl(0x19, arg0, arg1, arg2, arg3);
}

void SND_SetMasterPan(M2C_UNK arg0) {
    PushCommand_impl(0x18, arg0, 0, 0, 0);
}

void SND_ResetMasterPan(void) {
    PushCommand_impl(0x18, -1, 0, 0, 0);
}

void SNDi_SetPlayerParam(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    PushCommand_impl(6, arg0, arg1, arg2, arg3);
}
