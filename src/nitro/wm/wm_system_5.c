#include "m2c.h"

M2C_UNK DC_InvalidateRange(u16 *, M2C_UNK);

s32 WMi_CheckInitialized();

extern M2C_UNK wmInitialized;

s32 WMi_CheckIdle(void) {
    s32 temp_r0;

    temp_r0 = WMi_CheckInitialized();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    DC_InvalidateRange(M2C_FIELD(M2C_FIELD(&wmInitialized, void **, 4), u16 **, 4), 2);
    if ((u32) *M2C_FIELD(M2C_FIELD(&wmInitialized, void **, 4), u16 **, 4) <= 1U) {
        return 3;
    }
    return 0;
}
