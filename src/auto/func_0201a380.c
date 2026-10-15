#include "m2c.h"

s32 WMi_CheckStateEx(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK WM_SetPortCallback(u16, M2C_UNK, M2C_UNK);

s32 func_0201a380(void *arg0) {
    s32 temp_r0;

    temp_r0 = WMi_CheckStateEx(2, 9, 0xA);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    if (arg0 == NULL) {
        return 6;
    }
    if (M2C_FIELD(arg0, u16 *, 0x80E) == 0) {
        return 3;
    }
    WM_SetPortCallback(M2C_FIELD(arg0, u16 *, 0x816), 0, 0);
    M2C_FIELD(arg0, u16 *, 0x80E) = 0U;
    M2C_FIELD(arg0, s16 *, 0x81C) = 0;
    return 0;
}
