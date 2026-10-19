/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

void *GetShipAooSt(s32);                     /* extern */
s32 GetHookObjNo(u32, u32);                  /* extern */
extern M2C_UNK data_ov003_020a8ea0;

s32 ShipIsAtHookByKuni(M2C_UNK arg0) {
    s32 var_r0;
    u16 temp_r1;
    void *temp_r0;

    temp_r0 = GetShipAooSt(arg0);
    if (temp_r0 == NULL) {
        var_r0 = -1;
    } else {
        temp_r1 = M2C_FIELD(temp_r0, u16 *, 0xA8);
        if (((u32) (temp_r1 << 0x10) >> 0x1E) != 2) {
            var_r0 = -1;
        } else {
            var_r0 = GetHookObjNo((u32) (temp_r1 << 0x19) >> 0x19, (u32) (temp_r1 << 0x12) >> 0x19);
        }
    }
    return var_r0;
}
