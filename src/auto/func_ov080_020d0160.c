#include "m2c.h"

M2C_UNK UnitSelCanOrNot(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK ShipUnitSelCanOrNot(M2C_UNK);               /* extern */
M2C_UNK SetLogicNoForShipIn(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK SetLogicParaNoForShipIn(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK SetDropItemBySetNo(M2C_UNK);               /* extern */
M2C_UNK SG_setSisetuFree();                      /* extern */
extern void *data_0203673c;
extern void *data_ov000_02051548;

void func_ov080_020d0160(void) {
    s32 temp_r2;
    s32 temp_r3;
    s32 temp_r5;
    s32 temp_r5_2;

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
    SetDropItemBySetNo(0x4F);
    SG_setSisetuFree();
    SetLogicNoForShipIn(1, 1);
    SetLogicParaNoForShipIn(1, 0x38);
    ShipUnitSelCanOrNot(0);
    UnitSelCanOrNot(0xB, 0);
    M2C_FIELD(data_ov000_02051548, s32 *, 0x7C) = 0;
    M2C_FIELD(data_ov000_02051548, s32 *, 0x80) = 0x27;
    M2C_FIELD(data_ov000_02051548, s32 *, 0x84) = 0;
    M2C_FIELD(data_ov000_02051548, s32 *, 0x88) = 0x27;
    M2C_FIELD(data_ov000_02051548, s32 *, 0x6C) = 3;
    M2C_FIELD(data_ov000_02051548, s32 *, 0x70) = 0x19;
    M2C_FIELD(data_ov000_02051548, s32 *, 0x74) = 5;
    M2C_FIELD(data_ov000_02051548, s32 *, 0x78) = 0xE;
    M2C_FIELD(data_ov000_02051548, s32 *, 0x8C) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x8C) & 0xFFF0F3);
    M2C_FIELD(data_ov000_02051548, s32 *, 0xA0) = 0;
    M2C_FIELD(data_ov000_02051548, s32 *, 0xA4) = 0x14;
}
