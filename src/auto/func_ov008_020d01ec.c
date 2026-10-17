#include "m2c.h"

M2C_UNK SetShisetuLevel(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK SetLogicNoForShipIn(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK SetDropItemBySetNo(M2C_UNK);               /* extern */
u32 GetGameLevelMode();                          /* extern */
extern void *data_0203673c;
extern void *data_ov000_02051548;

u32 func_ov008_020d01ec(void) {
    s32 temp_lr;
    s32 temp_lr_2;
    s32 temp_lr_3;
    s32 temp_lr_4;
    s32 temp_lr_5;
    s32 temp_r2;
    s32 temp_r2_2;
    s32 temp_r2_3;
    s32 temp_r3;
    s32 temp_r3_2;
    u32 temp_r0;
    u32 var_r0;

    temp_r0 = GetGameLevelMode();
    switch (temp_r0) {
        case 0:
            temp_lr_2 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                        M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_lr_2, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_lr_2, s32 *, 0x210) & ~0x3FFF) | 1);
            temp_r3 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                      M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_r3, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_r3, s32 *, 0x210) & 0xF0003FFF) | 0x4000);
            SetDropItemBySetNo(3);
            break;
        case 1:
            temp_lr_3 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                        M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_lr_3, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_lr_3, s32 *, 0x210) & ~0x3FFF) | 1);
            temp_r3_2 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                        M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_r3_2, s32 *, 0x210) = (s32) (M2C_FIELD(temp_r3_2, s32 *, 0x210) & 0xF0003FFF);
            SetDropItemBySetNo(0x1D);
            break;
        case 2:
            temp_lr_4 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                        M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_lr_4, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_lr_4, s32 *, 0x210) & ~0x3FFF) | 1);
            temp_r2_2 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                        M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_r2_2, s32 *, 0x210) = (s32) (M2C_FIELD(temp_r2_2, s32 *, 0x210) & 0xF0003FFF);
            break;
        case 3:
            temp_lr_5 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                        M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_lr_5, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_lr_5, s32 *, 0x210) & ~0x3FFF) | 1);
            temp_r2_3 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                        M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_r2_3, s32 *, 0x210) = (s32) (M2C_FIELD(temp_r2_3, s32 *, 0x210) & 0xF0003FFF);
            break;
        default:
            temp_lr = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                      M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_lr, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_lr, s32 *, 0x210) & ~0x3FFF) | 1);
            temp_r2 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                      M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_r2, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_r2, s32 *, 0x210) & 0xF0003FFF) | 0x4000);
            break;
    }
    SetShisetuLevel(0, 1);
    SetShisetuLevel(1, 0);
    SetShisetuLevel(2, 0);
    SetShisetuLevel(3, 0);
    SetShisetuLevel(4, 0);
    SetShisetuLevel(5, 0);
    SetShisetuLevel(6, 0);
    SetShisetuLevel(7, 1);
    SetShisetuLevel(0xC, 0);
    SetShisetuLevel(0xA, 0);
    SetShisetuLevel(0xF, 0);
    SetShisetuLevel(8, 0);
    SetShisetuLevel(0xB, 0);
    SetShisetuLevel(0xD, 0);
    SetShisetuLevel(0xE, 0);
    SetShisetuLevel(9, 0);
    SetLogicNoForShipIn(1, 0);
    var_r0 = (u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0xD0) << 0x1A) >> 0x1F;
    if (var_r0 != 0) {
        var_r0                                      = 2;
        M2C_FIELD(data_ov000_02051548, s32 *, 0x90) = 2;
    }
    return var_r0;
}
