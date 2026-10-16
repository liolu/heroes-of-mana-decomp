#include "m2c.h"

s32 PXI_IsCallbackReady(M2C_UNK, M2C_UNK);          /* extern */
M2C_UNK PXI_SetFifoRecvCallback(M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK WaitByLoop(M2C_UNK);                        /* extern */
s32 func_ov123_020a51c8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK func_ov123_020a4fc4;

s32 func_ov123_020a4ffc(void) {
    do {

    } while (PXI_IsCallbackReady(4, 1) == 0);
    PXI_SetFifoRecvCallback(4, &func_ov123_020a4fc4);
loop_3:
    if (func_ov123_020a51c8(7, 0, 0, 0) != 1) {
        WaitByLoop(0x40000);
        goto loop_3;
    }
    return 1;
}
