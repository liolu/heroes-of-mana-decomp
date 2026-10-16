#include "m2c.h"

M2C_UNK func_ov003_0209b9d4(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov003_0209d244(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov003_0209d3a8(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov003_0209ebb4(M2C_UNK);               /* extern */
M2C_UNK func_ov003_020a2278();                      /* extern */
extern void *data_0203673c;
extern void *data_ov000_02051548;

void func_ov097_020d0160(void) {
    s32 temp_lr;
    s32 temp_r3;

    temp_lr = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
              M2C_FIELD(data_0203673c, s32 *, 0x28);
    M2C_FIELD(temp_lr, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_lr, s32 *, 0x210) & ~0x3FFF) | 1);
    temp_r3                          = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
              M2C_FIELD(data_0203673c, s32 *, 0x28);
    M2C_FIELD(temp_r3, s32 *, 0x210) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x210) & 0xF0003FFF);
    func_ov003_0209ebb4(0x60);
    func_ov003_020a2278();
    func_ov003_0209b9d4(0, 0);
    func_ov003_0209b9d4(1, 0);
    func_ov003_0209b9d4(2, 0);
    func_ov003_0209b9d4(3, 0);
    func_ov003_0209b9d4(4, 0);
    func_ov003_0209b9d4(5, 0);
    func_ov003_0209b9d4(6, 0);
    func_ov003_0209b9d4(0xC, 0);
    func_ov003_0209b9d4(0xA, 0);
    func_ov003_0209b9d4(0xF, 0);
    func_ov003_0209b9d4(8, 0);
    func_ov003_0209b9d4(0xB, 0);
    func_ov003_0209b9d4(0xD, 0);
    func_ov003_0209b9d4(0xE, 0);
    func_ov003_0209b9d4(9, 0);
    func_ov003_0209d244(1, 1);
    func_ov003_0209d3a8(1, 0x39);
}
