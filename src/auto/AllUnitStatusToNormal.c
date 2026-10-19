/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

u32 Status2Normal(M2C_UNK *);                 /* extern */
extern M2C_UNK data_ov003_020a85d4;
extern M2C_UNK data_ov003_020b0cf0;

s32 AllUnitStatusToNormal(s32 arg4) {
    u8 *var_r4;
    s32 var_r5;
    u32 var_r0;

    var_r4 = (u8 *) (&data_ov003_020b0cf0);
    var_r5 = 0;
    do {
        var_r0 = (u32) (M2C_FIELD(var_r4, s32 *, 0) << 0x1F) >> 0x1F;
        if ((var_r0 != 0) && (var_r0 = M2C_FIELD(var_r4, u32 *, 0xE8), (var_r0 != 0))) {
            var_r0 = (u32) (M2C_FIELD(var_r0, s32 *, 8) << 8) >> 0x1F;
            if (var_r0 == 0) {
                var_r0 = (u32) (M2C_FIELD(var_r4, s32 *, 8) * 4) >> 0x1F;
                if (var_r0 == 0) {
                    var_r0 = Status2Normal(var_r4);
                }
            }
        }
        var_r5 += 1;
        var_r4 += 0x110;
    } while (var_r5 < 0x42);
    return var_r0;
}
