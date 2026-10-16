#include "m2c.h"

M2C_UNK MIi_CpuCopy16(void *, s32, M2C_UNK);        /* extern */
extern void *data_0203673c;
extern M2C_UNK data_ov121_020f5b80;

void func_ov121_020ea0c8(void) {
    s32 var_r4;
    s32 var_r5;
    s32 var_r6;
    s32 var_r7;
    u32 temp_r1;
    void *temp_r0;

    var_r5 = 0;
    var_r7 = 0;
    var_r4 = 0x32;
    var_r6 = 0x3E8;
    do {
        temp_r0 = M2C_FIELD(data_0203673c, s32 *, 0x2C) + var_r6;
        temp_r1 = (u32) (M2C_FIELD(temp_r0, s32 *, 0x10) * 4) >> 0x18;
        if ((temp_r1 >= 0x32U) && (temp_r1 <= 0x5CU)) {
            MIi_CpuCopy16(temp_r0, M2C_FIELD(&data_ov121_020f5b80, s32 *, 4) + var_r7, 0x14);
            var_r7 += 0x14;
            var_r5 += 1;
        }
        var_r4 += 1;
        var_r6 += 0x14;
    } while (var_r4 <= 0x5C);
    M2C_FIELD(&data_ov121_020f5b80, s32 *, 0x138) = var_r5;
}
