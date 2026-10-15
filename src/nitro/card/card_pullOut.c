#include "m2c.h"

M2C_UNK PXI_Init();

M2C_UNK PXI_SetFifoRecvCallback(M2C_UNK, M2C_UNK *);

extern M2C_UNK CARDi_IsPulledOutFlag;
extern M2C_UNK CARDi_PulledOutCallback;

void CARD_InitPulledOutCallback(void) {
    PXI_Init();
    PXI_SetFifoRecvCallback(0xE, &CARDi_PulledOutCallback);
    M2C_FIELD(&CARDi_IsPulledOutFlag, s32 *, 4) = 0;
}
