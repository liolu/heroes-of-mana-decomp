#include "m2c.h"

M2C_UNK PXI_Init();

M2C_UNK PXI_SetFifoRecvCallback(M2C_UNK, M2C_UNK *);

s32 PXI_IsCallbackReady(M2C_UNK, M2C_UNK);

extern M2C_UNK OSi_IsResetOccurred;
extern M2C_UNK OSi_CommonCallback;

void OS_InitReset(void) {
    if (M2C_FIELD(&OSi_IsResetOccurred, u16 *, 2) != 0) {
        return;
    }
    M2C_FIELD(&OSi_IsResetOccurred, u16 *, 2) = 1U;
    PXI_Init();
    do {

    } while (PXI_IsCallbackReady(0xC, 1) == 0);
    PXI_SetFifoRecvCallback(0xC, &OSi_CommonCallback);
}
