#include "m2c.h"

M2C_UNK func_ov003_0209b9d4(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov003_0209d244(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov003_0209d3a8(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov003_0209ebb4(M2C_UNK);               /* extern */
u32 func_ov003_0209fb2c();                          /* extern */
extern void *data_0203673c;
extern void *data_ov000_02051548;

u32 func_ov024_020d0190(void) {
    s32 temp_lr;
    s32 temp_lr_2;
    s32 temp_lr_3;
    s32 temp_lr_4;
    s32 temp_lr_5;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 temp_r2;
    s32 temp_r2_2;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r5_3;
    s32 temp_r5_4;
    u32 temp_r0;
    u32 var_r0;

    temp_r0 = func_ov003_0209fb2c();
    switch (temp_r0) {
        case 0:
            temp_r3 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                      M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_r3, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_r3, s32 *, 0x210) & ~0x3FFF) | 5);
            temp_r5 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                      M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_r5, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_r5, s32 *, 0x210) & 0xF0003FFF) | 0x20000);
            temp_r5_2 = ((((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) ^ 1) * 0x2D0) +
                        M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_r5_2, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_r5_2, s32 *, 0x210) & ~0x3FFF) | 7);
            temp_r2 = ((((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) ^ 1) * 0x2D0) +
                      M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_r2, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_r2, s32 *, 0x210) & 0xF0003FFF) | 0x78000);
            func_ov003_0209ebb4(0x13);
            break;
        case 1:
            temp_r3_2 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                        M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_r3_2, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_r3_2, s32 *, 0x210) & ~0x3FFF) | 1);
            temp_r5_3 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                        M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_r5_3, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_r5_3, s32 *, 0x210) & 0xF0003FFF) | 0x10000);
            temp_r5_4 = ((((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) ^ 1) * 0x2D0) +
                        M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_r5_4, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_r5_4, s32 *, 0x210) & ~0x3FFF) | 0xB);
            temp_r2_2 = ((((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) ^ 1) * 0x2D0) +
                        M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_r2_2, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_r2_2, s32 *, 0x210) & 0xF0003FFF) | 0xF0000);
            func_ov003_0209ebb4(0x2D);
            break;
        case 2:
            temp_r4_3 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                        M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_r4_3, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_r4_3, s32 *, 0x210) & ~0x3FFF) | 1);
            temp_lr_2 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                        M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_lr_2, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_lr_2, s32 *, 0x210) & 0xF0003FFF) | 0x8000);
            temp_lr_3 = ((((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) ^ 1) * 0x2D0) +
                        M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_lr_3, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_lr_3, s32 *, 0x210) & ~0x3FFF) | 0xF);
            temp_r1_2 = ((((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) ^ 1) * 0x2D0) +
                        M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_r1_2, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_r1_2, s32 *, 0x210) & 0xF0003FFF) | 0x1E0000);
            break;
        case 3:
            temp_r4_4 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                        M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_r4_4, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_r4_4, s32 *, 0x210) & ~0x3FFF) | 1);
            temp_lr_4 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                        M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_lr_4, s32 *, 0x210) = (s32) (M2C_FIELD(temp_lr_4, s32 *, 0x210) & 0xF0003FFF);
            temp_lr_5 = ((((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) ^ 1) * 0x2D0) +
                        M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_lr_5, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_lr_5, s32 *, 0x210) & ~0x3FFF) | 0x13);
            temp_r1_3 = ((((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) ^ 1) * 0x2D0) +
                        M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_r1_3, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_r1_3, s32 *, 0x210) & 0xF0003FFF) | 0x3C0000);
            break;
        default:
            temp_r4 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                      M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_r4, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_r4, s32 *, 0x210) & ~0x3FFF) | 5);
            temp_lr = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                      M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_lr, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_lr, s32 *, 0x210) & 0xF0003FFF) | 0x20000);
            temp_r4_2 = ((((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) ^ 1) * 0x2D0) +
                        M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_r4_2, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_r4_2, s32 *, 0x210) & ~0x3FFF) | 7);
            temp_r1 = ((((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) ^ 1) * 0x2D0) +
                      M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_r1, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_r1, s32 *, 0x210) & 0xF0003FFF) | 0x78000);
            break;
    }
    func_ov003_0209b9d4(0, 5);
    func_ov003_0209b9d4(1, 5);
    func_ov003_0209b9d4(2, 4);
    func_ov003_0209b9d4(3, 4);
    func_ov003_0209b9d4(4, 1);
    func_ov003_0209b9d4(5, 2);
    func_ov003_0209b9d4(6, 1);
    func_ov003_0209b9d4(7, 4);
    func_ov003_0209b9d4(0xC, 1);
    func_ov003_0209b9d4(0xA, 1);
    func_ov003_0209b9d4(0xF, 1);
    func_ov003_0209b9d4(8, 1);
    func_ov003_0209b9d4(0xB, 1);
    func_ov003_0209b9d4(0xD, 1);
    func_ov003_0209b9d4(0xE, 1);
    func_ov003_0209b9d4(9, 0);
    func_ov003_0209d244(1, 1);
    func_ov003_0209d3a8(1, 7);
    var_r0 = (u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0xD0) << 0x1A) >> 0x1F;
    if (var_r0 != 0) {
        var_r0                                      = 0x12;
        M2C_FIELD(data_ov000_02051548, s32 *, 0x90) = 0x12;
    }
    return var_r0;
}
