/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

u32 MoveScriptAlphaChg(s32 *);                     /* extern */
extern M2C_UNK data_ov003_020a7f9c;
extern s32 data_ov003_020b0cf0;

s32 MoveScriptAlphaChgAll(s32 arg4) {
    s32 var_r4;
    s32 *var_r5;
    u32 var_r0;

    var_r5 = &data_ov003_020b0cf0;
    var_r4 = 0;
    do {
        var_r0 = (u32) (*var_r5 << 0x1F) >> 0x1F;
        if (var_r0 != 0) {
            var_r0 = MoveScriptAlphaChg(var_r5);
        }
        var_r4 += 1;
        var_r5 += 0x44;
    } while (var_r4 < 0x42);
    return var_r0;
}
