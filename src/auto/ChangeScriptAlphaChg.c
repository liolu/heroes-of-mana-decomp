/* compiler: 1.2/sp2p3 -profile */
#include "m2c.h"

extern M2C_UNK data_ov003_020a7f24;

s32 ChangeScriptAlphaChg(M2C_UNK arg0) {
    M2C_UNK var_r0;
    s32 temp_r2;

    temp_r2 = M2C_FIELD(arg0, s32 *, 8);
    if (((u32) (temp_r2 << 9) >> 0x1F) == 0) {
        var_r0 = 1;
    } else if (((u32) (temp_r2 << 0x13) >> 0x18) == ((u32) (temp_r2 << 0xB) >> 0x18)) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
