#include "m2c.h"

M2C_UNK SetShisetuLevel(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK SetLogicNoForShipIn(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK EquipSeirei(s32, M2C_UNK);          /* extern */
M2C_UNK SetDropItemBySetNo(M2C_UNK);               /* extern */
u32 GetGameLevelMode();                          /* extern */
extern void *data_0203673c;
extern void *data_ov000_02051548;

u32 func_ov029_020d0160(void) {
    s32 temp_ip;
    s32 temp_ip_2;
    s32 temp_ip_3;
    s32 temp_ip_4;
    s32 temp_ip_5;
    s32 temp_r2;
    s32 temp_r2_2;
    s32 temp_r2_3;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 var_r5;
    u32 temp_r0;
    u32 var_r0;

    temp_r0 = GetGameLevelMode();
    switch (temp_r0) {
        case 0:
            temp_ip_2 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                        M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_ip_2, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_ip_2, s32 *, 0x210) & ~0x3FFF) | 5);
            temp_r3 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                      M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_r3, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_r3, s32 *, 0x210) & 0xF0003FFF) | 0x2C000);
            SetDropItemBySetNo(0x18);
            break;
        case 1:
            temp_ip_3 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                        M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_ip_3, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_ip_3, s32 *, 0x210) & ~0x3FFF) | 1);
            temp_r3_2 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                        M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_r3_2, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_r3_2, s32 *, 0x210) & 0xF0003FFF) | 0x10000);
            SetDropItemBySetNo(0x32);
            break;
        case 2:
            temp_ip_4 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                        M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_ip_4, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_ip_4, s32 *, 0x210) & ~0x3FFF) | 1);
            temp_r2_2 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                        M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_r2_2, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_r2_2, s32 *, 0x210) & 0xF0003FFF) | 0x8000);
            break;
        case 3:
            temp_ip_5 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                        M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_ip_5, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_ip_5, s32 *, 0x210) & ~0x3FFF) | 1);
            temp_r2_3 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                        M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_r2_3, s32 *, 0x210) = (s32) (M2C_FIELD(temp_r2_3, s32 *, 0x210) & 0xF0003FFF);
            break;
        default:
            temp_ip = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                      M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_ip, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_ip, s32 *, 0x210) & ~0x3FFF) | 5);
            temp_r2 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                      M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_r2, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_r2, s32 *, 0x210) & 0xF0003FFF) | 0x2C000);
            break;
    }
    SetShisetuLevel(0, 6);
    SetShisetuLevel(1, 5);
    SetShisetuLevel(2, 5);
    SetShisetuLevel(3, 5);
    SetShisetuLevel(4, 1);
    SetShisetuLevel(5, 3);
    SetShisetuLevel(6, 1);
    SetShisetuLevel(7, 4);
    SetShisetuLevel(0xC, 0);
    SetShisetuLevel(0xA, 0);
    SetShisetuLevel(0xF, 0);
    SetShisetuLevel(8, 0);
    SetShisetuLevel(0xB, 0);
    SetShisetuLevel(0xD, 0);
    SetShisetuLevel(0xE, 0);
    SetShisetuLevel(9, 0);
    var_r5 = 0;
    do {
        EquipSeirei(var_r5, -1);
        var_r5 += 1;
    } while (var_r5 < 0xB);
    SetLogicNoForShipIn(1, 0);
    var_r0 = (u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0xD0) << 0x1A) >> 0x1F;
    if (var_r0 != 0) {
        var_r0                                      = 0x17;
        M2C_FIELD(data_ov000_02051548, s32 *, 0x90) = 0x17;
    }
    return var_r0;
}
