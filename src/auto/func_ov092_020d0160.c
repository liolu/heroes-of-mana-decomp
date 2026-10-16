#include "m2c.h"

M2C_UNK func_ov003_0209b898(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov003_0209b8f4(M2C_UNK);               /* extern */
M2C_UNK func_ov003_0209d244(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov003_0209dd38(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov003_0209ebb4(M2C_UNK);               /* extern */
M2C_UNK func_ov003_020a2278();                      /* extern */
extern void *data_0203673c;
extern void *data_ov000_02051548;

void func_ov092_020d0160(void) {
    s32 temp_lr;
    s32 temp_r3;

    if (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0xD0) << 0x1A) >> 0x1F) != 0) {
        M2C_FIELD(data_ov000_02051548, s32 *, 0x90) = 0x1A;
    }
    temp_lr = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
              M2C_FIELD(data_0203673c, s32 *, 0x28);
    M2C_FIELD(temp_lr, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_lr, s32 *, 0x210) & ~0x3FFF) | 1);
    temp_r3                          = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
              M2C_FIELD(data_0203673c, s32 *, 0x28);
    M2C_FIELD(temp_r3, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_r3, s32 *, 0x210) & 0xF0003FFF) | 0x2C000);
    func_ov003_0209ebb4(0x5B);
    func_ov003_020a2278();
    func_ov003_0209dd38(0x3C, 0);
    func_ov003_0209dd38(3, 2);
    func_ov003_0209dd38(4, 3);
    func_ov003_0209dd38(5, 4);
    func_ov003_0209dd38(6, 5);
    func_ov003_0209dd38(7, 6);
    func_ov003_0209dd38(8, 7);
    func_ov003_0209dd38(9, 8);
    func_ov003_0209dd38(0xA, 9);
    func_ov003_0209dd38(0xB, 0xA);
    func_ov003_0209d244(1, 0);
    func_ov003_0209b8f4(0);
    func_ov003_0209b898(0xB, 0);
}
