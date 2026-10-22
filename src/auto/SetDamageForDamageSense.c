/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK changeAnimationObj(void *, u32, u32);   /* extern */
extern void *data_ov000_02051548;

s32 SetDamageForDamageSense(void *arg0) {
    u32 var_r0;

    var_r0 = (u32) (M2C_FIELD(M2C_FIELD(arg0, void **, 0xE8), s32 *, 8) << 0xA) >> 0x1C;
    if (var_r0 != 0) {
        if (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x24) << 0x17) >> 0x1F) != 0) {
            var_r0                      = ((M2C_FIELD(arg0, u32 *, 0xC) & ~0x38000000) | 0x18000000) & ~0x700;
            M2C_FIELD(arg0, u32 *, 0xC) = var_r0;
        } else {
            var_r0 = (u32) (M2C_FIELD(arg0, s32 *, 0) << 0xA) >> 0x18;
            if ((var_r0 != 0) && (var_r0 != 5) && (var_r0 != 6)) {

            } else {
                M2C_FIELD(arg0, s32 *, 0) = (M2C_FIELD(arg0, volatile s32 *, 0) & ~0x3FC000) | 0x18000;
                changeAnimationObj(arg0, (u32) (M2C_FIELD(M2C_FIELD(arg0, void **, 0xE8), s32 *, 8) << 0xA) >> 0x1C,
                                   (u32) (M2C_FIELD(arg0, s32 *, 0) << 0x15) >> 0x1D);
                var_r0                       = 1;
                M2C_FIELD(arg0, u32 *, 0xC)  = M2C_FIELD(arg0, u32 *, 0xC) & ~0x700;
                M2C_FIELD(arg0, s32 *, 0)    = (M2C_FIELD(arg0, s32 *, 0) & ~0x80000000) | 0x80000000;
                M2C_FIELD(arg0, s16 *, 0x2E) = 1;
            }
        }
    }
    return var_r0;
}