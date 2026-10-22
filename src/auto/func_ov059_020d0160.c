#include "m2c.h"

M2C_UNK UnitSelCanOrNot(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK ShipUnitSelCanOrNot(M2C_UNK);               /* extern */
M2C_UNK SetLogicNoForShipIn(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK SetDropItemBySetNo(M2C_UNK);               /* extern */
M2C_UNK SG_setSisetuFree();                      /* extern */
extern void *data_0203673c;
extern void *data_ov000_02051548;

typedef struct {
    u8 pad0[0x6C];
    s32 f6C;
    s32 f70;
    s32 f74;
    s32 f78;
    s32 f7C;
    s32 f80;
    s32 f84;
    s32 f88;
    s32 f8C;
} Scene;

void func_ov059_020d0160(void) {
    s32 temp_r2;
    s32 temp_r3;
    s32 temp_r5;
    s32 temp_r5_2;

    temp_r3 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
              M2C_FIELD(data_0203673c, s32 *, 0x28);
    M2C_FIELD(temp_r3, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_r3, s32 *, 0x210) & ~0x3FFF) | 1);
    temp_r5                          = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
              M2C_FIELD(data_0203673c, s32 *, 0x28);
    M2C_FIELD(temp_r5, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_r5, s32 *, 0x210) & 0xF0003FFF) | 0x8000);
    temp_r5_2                        = ((((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) ^ 1) * 0x2D0) +
                M2C_FIELD(data_0203673c, s32 *, 0x28);
    M2C_FIELD(temp_r5_2, s32 *, 0x210) = (s32) (M2C_FIELD(temp_r5_2, s32 *, 0x210) & ~0x3FFF);
    temp_r2 = ((((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) ^ 1) * 0x2D0) +
              M2C_FIELD(data_0203673c, s32 *, 0x28);
    M2C_FIELD(temp_r2, s32 *, 0x210) = (s32) (M2C_FIELD(temp_r2, s32 *, 0x210) & 0xF0003FFF);
    SetDropItemBySetNo(0x3A);
    SG_setSisetuFree();
    SetLogicNoForShipIn(1, 0);
    ShipUnitSelCanOrNot(0);
    UnitSelCanOrNot(0xB, 0);
    ((Scene *) data_ov000_02051548)->f7C = 0;
    ((Scene *) data_ov000_02051548)->f80 = 0x27;
    ((Scene *) data_ov000_02051548)->f84 = 5;
    ((Scene *) data_ov000_02051548)->f88 = 0x1D;
    ((Scene *) data_ov000_02051548)->f6C = 3;
    ((Scene *) data_ov000_02051548)->f70 = 0x19;
    ((Scene *) data_ov000_02051548)->f74 = 5;
    ((Scene *) data_ov000_02051548)->f78 = 0xE;
    ((Scene *) data_ov000_02051548)->f8C &= 0xFFF0F3;
}
