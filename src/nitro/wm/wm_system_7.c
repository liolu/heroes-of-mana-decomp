#include "engine.h"
#include "m2c.h"

s32 WMi_CheckInitialized();

extern M2C_UNK wmInitialized;
M2C_UNK func_0200fa98(void);
void func_0200faac(M2C_UNK);

s32 WMi_GetStatusAddress(void) {
    if (WMi_CheckInitialized() != 0) {
        return 0;
    }
    return M2C_FIELD(M2C_FIELD(&wmInitialized, void **, 4), s32 *, 4);
}

s32 WM_GetAID(void) {
    s32 temp_r0;
    u16 var_r4;

    temp_r0 = func_0200fa98();
    if (M2C_FIELD(&wmInitialized, void **, 4) != NULL) {
        var_r4 = M2C_FIELD(M2C_FIELD(&wmInitialized, void **, 4), u16 *, 0x150);
    } else {
        var_r4 = 0;
    }
    func_0200faac(temp_r0);
    return (s32) var_r4;
}

s32 WM_GetConnectedAIDs(void) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_0200fa98();
    if (M2C_FIELD(&wmInitialized, void **, 4) != NULL) {
        var_r4 = M2C_FIELD(M2C_FIELD(&wmInitialized, void **, 4), s32 *, 0x14C);
    } else {
        var_r4 = 0;
    }
    func_0200faac(temp_r0);
    return (s32) (u16) var_r4;
}
