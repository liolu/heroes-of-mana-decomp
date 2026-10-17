#include "m2c.h"

M2C_UNK SetShisetuLevel(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK SetLogicNoForShipIn(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK SetLogicParaNoForShipIn(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK SetDropItemBySetNo(M2C_UNK);               /* extern */
u32 GetGameLevelMode();                          /* extern */
extern void *data_0203673c;
extern void *data_ov000_02051548;

u32 func_ov026_020d0160(void) {
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

    temp_r0 = GetGameLevelMode();
    switch (temp_r0) {
        case 0:
            temp_r3 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                      M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_r3, s32 *, 0x210) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x210) & ~0x3FFF);
            temp_r5 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                      M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_r5, s32 *, 0x210) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x210) & 0xF0003FFF);
            temp_r5_2 = ((((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) ^ 1) * 0x2D0) +
                        M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_r5_2, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_r5_2, s32 *, 0x210) & ~0x3FFF) | 0x64);
            temp_r2 = ((((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) ^ 1) * 0x2D0) +
                      M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_r2, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_r2, s32 *, 0x210) & 0xF0003FFF) | 0x1E0000);
            SetDropItemBySetNo(0x15);
            break;
        case 1:
            temp_r3_2 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                        M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_r3_2, s32 *, 0x210) = (s32) (M2C_FIELD(temp_r3_2, s32 *, 0x210) & ~0x3FFF);
            temp_r5_3 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                        M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_r5_3, s32 *, 0x210) = (s32) (M2C_FIELD(temp_r5_3, s32 *, 0x210) & 0xF0003FFF);
            temp_r5_4 = ((((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) ^ 1) * 0x2D0) +
                        M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_r5_4, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_r5_4, s32 *, 0x210) & ~0x3FFF) | 0x64);
            temp_r2_2 = ((((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) ^ 1) * 0x2D0) +
                        M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_r2_2, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_r2_2, s32 *, 0x210) & 0xF0003FFF) | 0x3C0000);
            SetDropItemBySetNo(0x2F);
            break;
        case 2:
            temp_r4_3 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                        M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_r4_3, s32 *, 0x210) = (s32) (M2C_FIELD(temp_r4_3, s32 *, 0x210) & ~0x3FFF);
            temp_lr_2 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                        M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_lr_2, s32 *, 0x210) = (s32) (M2C_FIELD(temp_lr_2, s32 *, 0x210) & 0xF0003FFF);
            temp_lr_3 = ((((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) ^ 1) * 0x2D0) +
                        M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_lr_3, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_lr_3, s32 *, 0x210) & ~0x3FFF) | 0x64);
            temp_r1_2 = ((((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) ^ 1) * 0x2D0) +
                        M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_r1_2, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_r1_2, s32 *, 0x210) & 0xF0003FFF) | 0x780000);
            break;
        case 3:
            temp_r4_4 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                        M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_r4_4, s32 *, 0x210) = (s32) (M2C_FIELD(temp_r4_4, s32 *, 0x210) & ~0x3FFF);
            temp_lr_4 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                        M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_lr_4, s32 *, 0x210) = (s32) (M2C_FIELD(temp_lr_4, s32 *, 0x210) & 0xF0003FFF);
            temp_lr_5 = ((((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) ^ 1) * 0x2D0) +
                        M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_lr_5, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_lr_5, s32 *, 0x210) & ~0x3FFF) | 0x64);
            temp_r1_3 = ((((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) ^ 1) * 0x2D0) +
                        M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_r1_3, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_r1_3, s32 *, 0x210) & 0xF0003FFF) | 0xF00000);
            break;
        default:
            temp_r4 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                      M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_r4, s32 *, 0x210) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x210) & ~0x3FFF);
            temp_lr = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                      M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_lr, s32 *, 0x210) = (s32) (M2C_FIELD(temp_lr, s32 *, 0x210) & 0xF0003FFF);
            temp_r4_2 = ((((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) ^ 1) * 0x2D0) +
                        M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_r4_2, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_r4_2, s32 *, 0x210) & ~0x3FFF) | 0x64);
            temp_r1 = ((((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) ^ 1) * 0x2D0) +
                      M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_r1, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_r1, s32 *, 0x210) & 0xF0003FFF) | 0x1E0000);
            break;
    }
    SetShisetuLevel(0, 5);
    SetShisetuLevel(1, 5);
    SetShisetuLevel(2, 4);
    SetShisetuLevel(3, 4);
    SetShisetuLevel(4, 1);
    SetShisetuLevel(5, 2);
    SetShisetuLevel(6, 1);
    SetShisetuLevel(7, 4);
    SetShisetuLevel(0xC, 1);
    SetShisetuLevel(0xA, 1);
    SetShisetuLevel(0xF, 1);
    SetShisetuLevel(8, 1);
    SetShisetuLevel(0xB, 1);
    SetShisetuLevel(0xD, 1);
    SetShisetuLevel(0xE, 1);
    SetShisetuLevel(9, 0);
    SetLogicNoForShipIn(1, 1);
    SetLogicParaNoForShipIn(1, 9);
    var_r0 = (u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0xD0) << 0x1A) >> 0x1F;
    if (var_r0 != 0) {
        var_r0                                      = 0x14;
        M2C_FIELD(data_ov000_02051548, s32 *, 0x90) = 0x14;
    }
    return var_r0;
}
