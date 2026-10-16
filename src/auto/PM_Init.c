#include "m2c.h"

extern u8 data_0203a66c;
typedef struct {
    u16 a;
    u16 b;
    u32 c;
} E8;
extern E8 data_0203a6ac[5];
extern u8 data_0203a694;
void func_02015a5c(void);
void PXI_Init(void);
s32 PXI_IsCallbackReady(s32 a, s32 b);
void PXI_SetFifoRecvCallback(s32 a, void *cb);
void OS_InitMutex(void *);

void PM_Init(void) {
    s32 i;
    if (*(u16 *) &data_0203a66c != 0) {
        return;
    }
    *(u16 *) &data_0203a66c          = 1;
    *(s32 *) (&data_0203a66c + 0x18) = 0;
    *(s32 *) (&data_0203a66c + 0x1C) = 0;
    PXI_Init();
    while (!PXI_IsCallbackReady(8, 1)) {
    }
    PXI_SetFifoRecvCallback(8, func_02015a5c);
    for (i = 0; i < 5; i++) {
        data_0203a6ac[i].a = 0;
    }
    OS_InitMutex(&data_0203a694);
    *(s32 *) (&data_0203a66c + 0x10) = *(s32 *) 0x027FFC3C;
}
