#include "m2c.h"

M2C_UNK func_ov003_0209d244(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov003_0209d3a8(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov003_0209dd38(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov003_0209ebb4(M2C_UNK);               /* extern */
M2C_UNK func_ov003_020a2278();                      /* extern */
extern void *data_0203673c;
extern void *data_ov000_02051548;

void func_ov093_020d0160(void) {
    s32 temp_r2;
    s32 temp_r3;
    s32 temp_r5;
    s32 temp_r5_2;

    if (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0xD0) << 0x1A) >> 0x1F) != 0) {
        M2C_FIELD(data_ov000_02051548, s32 *, 0x90) = 0x1A;
    }
    temp_r3 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
              M2C_FIELD(data_0203673c, s32 *, 0x28);
    M2C_FIELD(temp_r3, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_r3, s32 *, 0x210) & ~0x3FFF) | 1);
    temp_r5                          = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
              M2C_FIELD(data_0203673c, s32 *, 0x28);
    M2C_FIELD(temp_r5, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_r5, s32 *, 0x210) & 0xF0003FFF) | 0x2C000);
    temp_r5_2                        = ((((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) ^ 1) * 0x2D0) +
                M2C_FIELD(data_0203673c, s32 *, 0x28);
    M2C_FIELD(temp_r5_2, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_r5_2, s32 *, 0x210) & ~0x3FFF) | 0x13);
    temp_r2 = ((((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) ^ 1) * 0x2D0) +
              M2C_FIELD(data_0203673c, s32 *, 0x28);
    M2C_FIELD(temp_r2, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_r2, s32 *, 0x210) & 0xF0003FFF) | 0x38000);
    func_ov003_0209ebb4(0x5C);
    func_ov003_020a2278();
    func_ov003_0209dd38(3, 2);
    func_ov003_0209dd38(4, 3);
    func_ov003_0209dd38(5, 4);
    func_ov003_0209dd38(6, 5);
    func_ov003_0209dd38(7, 6);
    func_ov003_0209dd38(8, 7);
    func_ov003_0209dd38(9, 8);
    func_ov003_0209dd38(0xA, 9);
    func_ov003_0209dd38(0xB, 0xA);
    func_ov003_0209d244(1, 1);
    func_ov003_0209d3a8(1, 0x3C);
    M2C_FIELD(data_ov000_02051548, s32 *, 0x6C) = 3;
    M2C_FIELD(data_ov000_02051548, s32 *, 0x70) = 0x19;
    M2C_FIELD(data_ov000_02051548, s32 *, 0x74) = 5;
    M2C_FIELD(data_ov000_02051548, s32 *, 0x78) = 0xE;
}
