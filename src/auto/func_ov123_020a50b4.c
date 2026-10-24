#include "m2c.h"
s32 PXI_IsCallbackReady(s32, s32);
void PXI_SetFifoRecvCallback(s32, void (*)(void));
void DC_StoreRange(void *, u32);
void WaitByLoop(s32);
s32 func_ov123_020a51c8(s32, s32, s32, s32);
void func_ov123_020a4fc4(void);
void func_ov123_020a50b4(s32 a, u32 b, void *c) {
    while (PXI_IsCallbackReady(4, 1) == 0) {
    }
    PXI_SetFifoRecvCallback(4, func_ov123_020a4fc4);
    DC_StoreRange(c, b);
    for (;;) {
        if (func_ov123_020a51c8(2, a, b, (s32) c) == 1) {
            return;
        }
        WaitByLoop(0x40000);
    }
}
