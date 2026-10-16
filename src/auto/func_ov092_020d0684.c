#include "m2c.h"

s32 func_ov003_0209cb30(s32);                       /* extern */
extern void *data_0203673c;
extern void *data_ov000_02051548;

void func_ov092_020d0684(s32 *arg0) {
    s32 temp_r2;
    s32 temp_r5;
    s32 temp_r0;
    s32 var_r8;
    s32 temp_r5_2;
    s32 temp_r0_2;
    s32 temp_r9;
    s32 temp_r3;

    var_r8 = 0;
    do {
        temp_r5 = *arg0 & (1 << var_r8);
        if ((func_ov003_0209cb30(var_r8 + 0xF0C) == 1) && (temp_r5 == (1 << var_r8))) {
            temp_r0 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                      M2C_FIELD(data_0203673c, s32 *, 0x28);
            temp_r2 = M2C_FIELD(temp_r0, s32 *, 0x210);
            M2C_FIELD(temp_r0, s32 *, 0x210) =
                (s32) ((temp_r2 & ~0x3FFF) | ((((u32) (temp_r2 << 0x12) >> 0x12) + 5) & (-0x4000U >> 0x12)));
            *arg0 ^= 1 << var_r8;
        }
        temp_r5_2 = var_r8 + 6;
        temp_r9   = *arg0 & (1 << temp_r5_2);
        if ((func_ov003_0209cb30(var_r8 + 0xF12) == 1) && (temp_r9 == (1 << temp_r5_2))) {
            temp_r0_2 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                        M2C_FIELD(data_0203673c, s32 *, 0x28);
            temp_r3 = M2C_FIELD(temp_r0_2, s32 *, 0x210);
            M2C_FIELD(temp_r0_2, s32 *, 0x210) =
                (s32) ((temp_r3 & 0xF0003FFF) | ((u32) ((((u32) (temp_r3 * 0x10) >> 0x12) + 5) << 0x12) >> 4));
            *arg0 ^= 1 << temp_r5_2;
        }
        var_r8 += 1;
    } while (var_r8 < 6);
}
