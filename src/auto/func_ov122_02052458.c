#include "m2c.h"

M2C_UNK MIi_CpuCopy16(s32, s32, M2C_UNK);           /* extern */
extern void *data_0203673c;
extern M2C_UNK data_ov122_02062b20;
extern M2C_UNK data_ov122_020647c0;

void func_ov122_02052458(void) {
    s32 var_r7;
    s32 var_r8;
    u32 temp_r1_2;
    u8 temp_r1;
    u8 *var_r9;
    s32 var_r10;
    s32 temp_r0;

    var_r7  = 0;
    var_r9  = (u8 *) &data_ov122_020647c0;
    var_r8  = 0;
    var_r10 = 0;
    do {
        temp_r1 = M2C_FIELD(var_r9, u8 *, 0xCC);
        if ((temp_r1 != 0) && ((u32) temp_r1 >= 0x32U) && ((u32) temp_r1 <= 0x5CU)) {
            temp_r0   = (temp_r1 * 0x14) + M2C_FIELD(data_0203673c, s32 *, 0x2C);
            temp_r1_2 = (u32) (M2C_FIELD(temp_r0, s32 *, 0x10) * 4) >> 0x18;
            if ((temp_r1_2 >= 0x32U) && (temp_r1_2 <= 0x5CU)) {
                MIi_CpuCopy16(temp_r0, M2C_FIELD(&data_ov122_02062b20, s32 *, 0) + var_r10, 0x14);
                var_r10 += 0x14;
                var_r8 += 1;
            }
        }
        var_r7 += 1;
        var_r9 += 1;
    } while (var_r7 < 5);
    M2C_FIELD(&data_ov122_02062b20, s32 *, 0x10) = var_r8;
}
