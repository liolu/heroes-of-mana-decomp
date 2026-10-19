/* compiler: 1.2/sp2p3 -profile */
#include "m2c.h"

extern M2C_UNK data_ov003_020a7f8c;

s32 GetUsualAlpha(M2C_UNK arg0) {
    s32 temp_r1;
    u32 var_r0;

    temp_r1 = M2C_FIELD(arg0, s32 *, 4);
    var_r0  = (u32) (temp_r1 << 0xC) >> 0x1B;
    if (var_r0 == 0x1F) {
        var_r0 = (u32) (temp_r1 << 0x11) >> 0x1B;
    }
    return var_r0;
}
