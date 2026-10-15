#include "m2c.h"

M2C_UNK DC_InvalidateRange(void *, M2C_UNK);

void *WMi_GetSystemWork();

s32 WMi_CheckStateEx(M2C_UNK, M2C_UNK, M2C_UNK);

s32 WM_GetMPSendBufferSize(void) {
    void *temp_r1;
    void *temp_r4;

    temp_r4 = WMi_GetSystemWork();
    if (WMi_CheckStateEx(2, 7, 8) != 0) {
        return 0;
    }
    DC_InvalidateRange(M2C_FIELD(temp_r4, void **, 4) + 0xC, 4);
    temp_r1 = M2C_FIELD(temp_r4, void **, 4);
    if (M2C_FIELD(temp_r1, s32 *, 0xC) == 1) {
        return 0;
    }
    DC_InvalidateRange(temp_r1 + 0x3C, 4);
    return (M2C_FIELD(M2C_FIELD(temp_r4, void **, 4), u16 *, 0x3C) + 0x1F) & ~0x1F;
}
