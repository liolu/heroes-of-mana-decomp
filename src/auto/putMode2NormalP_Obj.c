/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern M2C_UNK data_ov003_020a80a0;
extern M2C_UNK data_ov003_020b0cf0;

s32 putMode2NormalP_Obj(void) {
    u8 *var_r2;
    s32 temp_r1;
    s32 var_r3;
    u32 *temp_r1_2;
    u32 var_r0;

    var_r2 = (u8 *) &data_ov003_020b0cf0;
    var_r3 = 0;
    do {
        temp_r1 = M2C_FIELD(var_r2, s32 *, 0);
        var_r0  = (u32) (temp_r1 << 0x1F) >> 0x1F;
        if (var_r0 != 0) {
            if (((u32) (temp_r1 << 0x1A) >> 0x1D) == 1) {
                M2C_FIELD(var_r2, s32 *, 0) = (s32) (temp_r1 & ~0x38);
            }
            var_r0 = (u32) (M2C_FIELD(var_r2, s32 *, 8) * 4) >> 0x1F;
            if (var_r0 != 0) {
                temp_r1_2  = M2C_FIELD(var_r2, u32 **, 0xAC);
                var_r0     = *temp_r1_2 & ~1;
                *temp_r1_2 = var_r0;
            }
        }
        var_r3 += 1;
        var_r2 += 0x110;
    } while (var_r3 < 0x42);
    return var_r0;
}
