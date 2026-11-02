/* compiler: 1.2/sp3 */
#include "m2c.h"

void DC_InvalidateRange(void *, u32);
s32 PXI_IsCallbackReady(s32, s32);
void PXI_SetFifoRecvCallback(s32, void *);
void WaitByLoop(u32);
s32 func_ov123_020a51c8(s32, void *, u16, void *);
extern void func_ov123_020a4fc4(void);

s32 func_ov123_020a5130(void *arg0, u32 arg1, void *arg2) {
    DC_InvalidateRange(arg2, arg1);
    do {
    } while (PXI_IsCallbackReady(4, 1) == 0);
    PXI_SetFifoRecvCallback(4, (void *) func_ov123_020a4fc4);
    for (;;) {
        if (func_ov123_020a51c8(1, arg0, (u16) arg1, arg2) == 1) {
            break;
        }
        WaitByLoop(0x40000);
    }
    DC_InvalidateRange(arg2, arg1);
    return 1;
}
