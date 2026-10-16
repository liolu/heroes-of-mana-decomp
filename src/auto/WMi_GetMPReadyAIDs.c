#include "m2c.h"

M2C_UNK DC_InvalidateRange(s32, M2C_UNK);           /* extern */
s32 func_0200fa98();                                /* extern */
M2C_UNK func_0200faac(s32);                         /* extern */
extern M2C_UNK wmInitialized;

u16 WMi_GetMPReadyAIDs(void) {
    u16 var_r4;
    s32 temp_r5;
    void *temp_r4;

    temp_r5 = func_0200fa98();
    if (M2C_FIELD(&wmInitialized, void **, 4) == NULL) {
        var_r4 = 0;
    } else {
        temp_r4 = M2C_FIELD(M2C_FIELD(&wmInitialized, void **, 4), void **, 4);
        DC_InvalidateRange(temp_r4 + 0x86, 2);
        var_r4 = M2C_FIELD(temp_r4, u16 *, 0x86);
    }
    func_0200faac(temp_r5);
    return var_r4;
}
