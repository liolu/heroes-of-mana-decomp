#include "m2c.h"

s32 func_0200fa98();

M2C_UNK func_0200faac(s32);

void *WMi_GetSystemWork();

s32 WMi_CheckInitialized();

s32 WM_SetIndCallback(s32 arg0) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r5 = func_0200fa98();
    temp_r0 = WMi_CheckInitialized();
    if (temp_r0 != 0) {
        func_0200faac(temp_r5);
        return temp_r0;
    }
    M2C_FIELD(WMi_GetSystemWork(), s32 *, 0xC8) = arg0;
    func_0200faac(temp_r5);
    return 0;
}
