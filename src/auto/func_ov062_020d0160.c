#include "m2c.h"

M2C_UNK func_ov003_0209b898(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov003_0209b8f4(M2C_UNK);               /* extern */
M2C_UNK func_ov003_0209d244(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov003_0209d3a8(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov003_0209ebb4(M2C_UNK);               /* extern */
M2C_UNK func_ov003_020a2278();                      /* extern */
extern void *data_0203673c;
extern void *data_ov000_02051548;

void func_ov062_020d0160(void) {
    s32 temp_r2;
    s32 temp_r3;
    s32 temp_r5;
    s32 temp_r5_2;

    temp_r3 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
              M2C_FIELD(data_0203673c, s32 *, 0x28);
    M2C_FIELD(temp_r3, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_r3, s32 *, 0x210) & ~0x3FFF) | 2);
    temp_r5                          = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
              M2C_FIELD(data_0203673c, s32 *, 0x28);
    M2C_FIELD(temp_r5, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_r5, s32 *, 0x210) & 0xF0003FFF) | 0x8000);
    temp_r5_2                        = ((((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) ^ 1) * 0x2D0) +
                M2C_FIELD(data_0203673c, s32 *, 0x28);
    M2C_FIELD(temp_r5_2, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_r5_2, s32 *, 0x210) & ~0x3FFF) | 5);
    temp_r2 = ((((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) ^ 1) * 0x2D0) +
              M2C_FIELD(data_0203673c, s32 *, 0x28);
    M2C_FIELD(temp_r2, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_r2, s32 *, 0x210) & 0xF0003FFF) | 0x8000);
    func_ov003_0209ebb4(0x3D);
    func_ov003_020a2278();
    func_ov003_0209d244(1, 1);
    func_ov003_0209d3a8(1, 0xE);
    func_ov003_0209b8f4(0);
    func_ov003_0209b898(0xB, 0);
    M2C_FIELD(data_ov000_02051548, s32 *, 0x7C) = 0;
    M2C_FIELD(data_ov000_02051548, s32 *, 0x80) = 0x27;
    M2C_FIELD(data_ov000_02051548, s32 *, 0x84) = 0;
    M2C_FIELD(data_ov000_02051548, s32 *, 0x88) = 0x27;
    M2C_FIELD(data_ov000_02051548, s32 *, 0x6C) = 0x19;
    M2C_FIELD(data_ov000_02051548, s32 *, 0x70) = 0x19;
    M2C_FIELD(data_ov000_02051548, s32 *, 0x74) = 5;
    M2C_FIELD(data_ov000_02051548, s32 *, 0x78) = 0x19;
    M2C_FIELD(data_ov000_02051548, s32 *, 0x8C) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x8C) & 0xFFF0F3);
    M2C_FIELD(data_ov000_02051548, s32 *, 0xA0) = 0x22;
    M2C_FIELD(data_ov000_02051548, s32 *, 0xA4) = 0;
}
