#include "m2c.h"

M2C_UNK PXI_Init();

M2C_UNK PXI_SetFifoRecvCallback(M2C_UNK, M2C_UNK *);

s32 PXI_IsCallbackReady(M2C_UNK, M2C_UNK);

M2C_UNK CTRDGi_InitCommon();

M2C_UNK CTRDG_Enable(M2C_UNK);

M2C_UNK CTRDGi_InitModuleInfo();

M2C_UNK CTRDGi_InitTaskThread(M2C_UNK *);

extern M2C_UNK data_02041640;
extern M2C_UNK data_02041720;
extern M2C_UNK CTRDGi_CallbackForInitModuleInfo;
extern M2C_UNK CTRDGi_PulledOutCallback;
extern M2C_UNK CTRDGi_CallbackForSetPhi;

void CTRDG_Init(void) {
    if (M2C_FIELD(&data_02041640, s32 *, 8) != 0) {
        return;
    }
    M2C_FIELD(&data_02041640, s32 *, 8) = 1;
    CTRDGi_InitCommon();
    M2C_FIELD(&data_02041640, s32 *, 0xC) = 0;
    PXI_Init();
    do {

    } while (PXI_IsCallbackReady(0xD, 1) == 0);
    PXI_SetFifoRecvCallback(0xD, &CTRDGi_CallbackForInitModuleInfo);
    CTRDGi_InitModuleInfo();
    PXI_SetFifoRecvCallback(0xD, NULL);
    PXI_SetFifoRecvCallback(0xD, &CTRDGi_PulledOutCallback);
    M2C_FIELD(&data_02041640, s32 *, 0x18) = 0;
    CTRDGi_InitTaskThread(&data_02041720);
    PXI_SetFifoRecvCallback(0x11, &CTRDGi_CallbackForSetPhi);
    CTRDG_Enable(0);
}
