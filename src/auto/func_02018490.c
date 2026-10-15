#include "m2c.h"

M2C_UNK PXI_SetFifoRecvCallback(M2C_UNK, M2C_UNK);
s32 WMi_CheckInitialized();
s32 WMi_CheckStateEx(M2C_UNK, M2C_UNK);
M2C_UNK func_02018b20();
extern M2C_UNK wmInitialized;

s32 func_02018490(void) {
    s32 temp_r0;

    if (WMi_CheckInitialized() != 0) {
        return 3;
    }
    temp_r0 = WMi_CheckStateEx(1, 0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02018b20();
    PXI_SetFifoRecvCallback(0xA, 0);
    M2C_FIELD(&wmInitialized, s32 *, 4) = 0;
    M2C_FIELD(&wmInitialized, s16 *, 0) = 0;
    return 0;
}
