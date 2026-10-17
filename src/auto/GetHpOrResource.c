/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 func_02002414(s32);                             /* extern */
extern void *data_0203673c;
extern M2C_UNK data_ov003_020ac6b0;

s32 GetHpOrResource(s32 arg0) {
    s32 temp_r0;
    u16 var_r0;

    temp_r0 = func_02002414(arg0);
    if (temp_r0 == -1) {
        var_r0 = 0;
    } else {
        var_r0 = M2C_FIELD(((temp_r0 * 0x34) + M2C_FIELD(data_0203673c, s32 *, 0x24)), u16 *, 0x10);
    }
    return var_r0;
}
