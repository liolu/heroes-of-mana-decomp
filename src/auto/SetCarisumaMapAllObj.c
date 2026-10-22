/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

u32 SetCarisumaMap(s8, s8, s32, M2C_UNK, u32); /* extern */
extern M2C_UNK data_ov003_020a8db4;
extern M2C_UNK data_ov003_020b0cf0;

s32 SetCarisumaMapAllObj(s32 argA) {
    s32 var_r9;
    u8 *var_r10;
    u32 temp_r1_2;
    u32 var_r0;
    void *temp_r1;

    var_r9  = 0;
    var_r10 = (u8 *) (&data_ov003_020b0cf0);
    do {
        var_r0 = (u32) (M2C_FIELD(var_r10, s32 *, 0) << 0x1F) >> 0x1F;
        if ((var_r0 != 0) && (var_r0 = M2C_FIELD(var_r10, u32 *, 0xE8), (var_r0 != 0))) {
            var_r0 = (u32) (M2C_FIELD(var_r0, s32 *, 8) << 8) >> 0x1F;
            if (var_r0 == 0) {
                var_r0 = (u32) (M2C_FIELD(var_r10, s32 *, 8) << 5) >> 0x1C;
                if (var_r0 < 4U) {
                    temp_r1 = M2C_FIELD(var_r10, void **, 0xEC);
                    var_r0  = (u32) M2C_FIELD(temp_r1, u8 *, 0xE);
                    if (var_r0 != 0) {
                        temp_r1_2 = (u32) (M2C_FIELD(temp_r1, s32 *, 0) << 0x12) >> 0x1C;
                        if (temp_r1_2 == 5) {
                            var_r0 =
                                SetCarisumaMap(M2C_FIELD(var_r10, s8 *, 0x60), M2C_FIELD(var_r10, s8 *, 0x61),
                                               1 << (var_r0 - 1), 5, (u32) (M2C_FIELD(var_r10, u16 *, 0x2C) << 0x1F) >> 0x1F);
                        } else if (temp_r1_2 == 7) {
                            var_r0 =
                                SetCarisumaMap(M2C_FIELD(var_r10, s8 *, 0x60), M2C_FIELD(var_r10, s8 *, 0x61),
                                               1 << (var_r0 - 1), 1, (u32) (M2C_FIELD(var_r10, u16 *, 0x2C) << 0x1F) >> 0x1F);
                        }
                    }
                } else if (var_r0 == 7) {
                    SetCarisumaMap(M2C_FIELD(var_r10, s8 *, 0x60), M2C_FIELD(var_r10, s8 *, 0x61), 0x04000000, 3, 0U);
                    var_r0 = SetCarisumaMap(M2C_FIELD(var_r10, s8 *, 0x60), M2C_FIELD(var_r10, s8 *, 0x61), 0x04000000, 3, 1U);
                }
            }
        }
        var_r9 += 1;
        var_r10 += 0x110;
    } while (var_r9 < 0x42);
    return var_r0;
}
