#include "m2c.h"

M2C_UNK EquipItem(M2C_UNK, M2C_UNK);      /* extern */
extern void *data_ov000_02051548;

void func_ov063_020d02fc(void) {
    s32 temp_r1;
    s32 temp_r2;

    if ((s32) M2C_FIELD(data_ov000_02051548, s32 *, 0x90) >= 0xB) {
        return;
    }
    EquipItem(7, -1);
    EquipItem(7, -2);
    EquipItem(7, -3);
    temp_r1 = M2C_FIELD(data_ov000_02051548, s32 *, 0x8C) & 0x800000;
    temp_r2 = M2C_FIELD(data_ov000_02051548, s32 *, 0x90);
    if ((temp_r2 == 0xA) && (temp_r1 != 0x800000)) {
        EquipItem(7, 0xF4);
        EquipItem(7, 0x53);
        EquipItem(7, 0xA0);
        return;
    }
    if ((u32) (temp_r2 - 8) > 1U) {
        return;
    }
    if (temp_r1 == 0x800000) {
        return;
    }
    EquipItem(7, 0xF4);
}
