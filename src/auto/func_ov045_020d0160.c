#include "m2c.h"

M2C_UNK UnitSelCanOrNot(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK ShipUnitSelCanOrNot(M2C_UNK);               /* extern */
M2C_UNK SetLogicNoForShipIn(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK AddCarisumaToParty(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK SetDropItemBySetNo(M2C_UNK);               /* extern */
M2C_UNK SG_setSisetuFree();                      /* extern */
extern void *data_0203673c;
extern void *data_ov000_02051548;

void func_ov045_020d0160(void) {
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
    SetDropItemBySetNo(0x5B);
    SG_setSisetuFree();
    AddCarisumaToParty(0x3C, 0);
    AddCarisumaToParty(3, 2);
    AddCarisumaToParty(4, 3);
    AddCarisumaToParty(5, 4);
    AddCarisumaToParty(6, 5);
    AddCarisumaToParty(7, 6);
    AddCarisumaToParty(8, 7);
    AddCarisumaToParty(9, 8);
    AddCarisumaToParty(0xA, 9);
    AddCarisumaToParty(0xB, 0xA);
    SetLogicNoForShipIn(1, 0);
    ShipUnitSelCanOrNot(0);
    UnitSelCanOrNot(0xB, 0);
}
