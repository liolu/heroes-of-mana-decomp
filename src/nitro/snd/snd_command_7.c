#include "m2c.h"

M2C_UNK OS_SpinWait(M2C_UNK);

s32 IsCommandAvailable();

M2C_UNK PXI_SetFifoRecvCallback(M2C_UNK, M2C_UNK *);

s32 PXI_IsCallbackReady(M2C_UNK, M2C_UNK);

extern M2C_UNK PxiFifoCallback;
s32 func_020118cc(M2C_UNK, M2C_UNK, M2C_UNK);

void InitPXI(void) {
    PXI_SetFifoRecvCallback(7, &PxiFifoCallback);
    if (IsCommandAvailable() == 0) {
        return;
    }
    if (PXI_IsCallbackReady(7, 1) != 0) {
        return;
    }
    do {
        OS_SpinWait(0x64);
    } while (PXI_IsCallbackReady(7, 1) == 0);
}

void RequestCommandProc(void) {
    do {

    } while (func_020118cc(7, 0, 0) < 0);
}
