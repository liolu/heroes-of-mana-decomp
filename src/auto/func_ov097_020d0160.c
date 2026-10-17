#include "m2c.h"

M2C_UNK SetShisetuLevel(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK SetLogicNoForShipIn(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK SetLogicParaNoForShipIn(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK SetDropItemBySetNo(M2C_UNK);               /* extern */
M2C_UNK SG_setSisetuFree();                      /* extern */
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
    SetDropItemBySetNo(0x60);
    SG_setSisetuFree();
    SetShisetuLevel(0, 0);
    SetShisetuLevel(1, 0);
    SetShisetuLevel(2, 0);
    SetShisetuLevel(3, 0);
    SetShisetuLevel(4, 0);
    SetShisetuLevel(5, 0);
    SetShisetuLevel(6, 0);
    SetShisetuLevel(0xC, 0);
    SetShisetuLevel(0xA, 0);
    SetShisetuLevel(0xF, 0);
    SetShisetuLevel(8, 0);
    SetShisetuLevel(0xB, 0);
    SetShisetuLevel(0xD, 0);
    SetShisetuLevel(0xE, 0);
    SetShisetuLevel(9, 0);
    SetLogicNoForShipIn(1, 1);
    SetLogicParaNoForShipIn(1, 0x39);
}
