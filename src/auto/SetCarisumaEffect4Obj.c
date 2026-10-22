/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 GetCarisumaMap(s8, s8, u32);               /* extern */
extern M2C_UNK data_ov003_020a8ddc;
extern M2C_UNK data_ov003_020b0cf0;

s32 SetCarisumaEffect4Obj(s32 arg9) {
    s32 var_r8;
    u8 *var_r9;
    u32 temp_r0;
    u32 var_r0;

    var_r8 = 0;
    var_r9 = (u8 *) (&data_ov003_020b0cf0);
    do {
        var_r0 = (u32) (M2C_FIELD(var_r9, s32 *, 0) << 0x1F) >> 0x1F;
        if ((var_r0 != 0) && (var_r0 = M2C_FIELD(var_r9, u32 *, 0xE8), (var_r0 != 0))) {
            var_r0 = (u32) (M2C_FIELD(var_r0, s32 *, 8) << 8) >> 0x1F;
            if (var_r0 == 0) {
                var_r0 = (u32) (M2C_FIELD(var_r9, s32 *, 8) << 5) >> 0x1C;
                if (var_r0 < 4U) {
                    M2C_FIELD(var_r9, u32 *, 0xE0) = 0U;
                    temp_r0                        = (u32) (*M2C_FIELD(var_r9, s32 **, 0xEC) << 0x12) >> 0x1C;
                    switch (temp_r0) {
                        default:
                            break;
                        case 1:
                            M2C_FIELD(var_r9, u32 *, 0xE0) =
                                (u32) (GetCarisumaMap(M2C_FIELD(var_r9, s8 *, 0x60), M2C_FIELD(var_r9, s8 *, 0x61),
                                                      (u32) (M2C_FIELD(var_r9, u16 *, 0x2C) << 0x1F) >> 0x1F) &
                                       0x9DF);
                            break;
                        case 2:
                            M2C_FIELD(var_r9, u32 *, 0xE0) =
                                (u32) (GetCarisumaMap(M2C_FIELD(var_r9, s8 *, 0x60), M2C_FIELD(var_r9, s8 *, 0x61),
                                                      (u32) (M2C_FIELD(var_r9, u16 *, 0x2C) << 0x1F) >> 0x1F) &
                                       0x11BF);
                            break;
                        case 3:
                            M2C_FIELD(var_r9, u32 *, 0xE0) =
                                (u32) (GetCarisumaMap(M2C_FIELD(var_r9, s8 *, 0x60), M2C_FIELD(var_r9, s8 *, 0x61),
                                                      (u32) (M2C_FIELD(var_r9, u16 *, 0x2C) << 0x1F) >> 0x1F) &
                                       0x439F);
                            break;
                        case 4:
                            M2C_FIELD(var_r9, u32 *, 0xE0) =
                                (u32) (GetCarisumaMap(M2C_FIELD(var_r9, s8 *, 0x60), M2C_FIELD(var_r9, s8 *, 0x61),
                                                      (u32) (M2C_FIELD(var_r9, u16 *, 0x2C) << 0x1F) >> 0x1F) &
                                       0x259F);
                            break;
                    }
                    var_r0 = (u32) (M2C_FIELD(var_r9, s32 *, 8) * 4) >> 0x1F;
                    if (var_r0 == 0) {
                        var_r0 = (u32) (M2C_FIELD(M2C_FIELD(var_r9, u32 *, 0xE8), s32 *, 0) << 0x1E) >> 0x1F;
                        if (var_r0 != 0) {
                            var_r0 = M2C_FIELD(var_r9, u32 *, 0xE0) |
                                     (GetCarisumaMap(M2C_FIELD(var_r9, s8 *, 0x60), M2C_FIELD(var_r9, s8 *, 0x61),
                                                     (u32) (M2C_FIELD(var_r9, u16 *, 0x2C) << 0x1F) >> 0x1F) &
                                      0x06000000);
                            M2C_FIELD(var_r9, u32 *, 0xE0) = var_r0;
                        }
                    }
                }
            }
        }
        var_r8 += 1;
        var_r9 += 0x110;
    } while (var_r8 < 0x42);
    return var_r0;
}
