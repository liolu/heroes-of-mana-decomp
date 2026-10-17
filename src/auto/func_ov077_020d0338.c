#include "m2c.h"

M2C_UNK EquipItem(M2C_UNK, M2C_UNK);      /* extern */
extern void *data_ov000_02051548;

void func_ov077_020d0338(void) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r4 = M2C_FIELD(data_ov000_02051548, s32 *, 0x8C) & 0x800000;
    if ((s32) M2C_FIELD(data_ov000_02051548, s32 *, 0x90) < 4) {
        EquipItem(6, -1);
        EquipItem(6, -2);
        EquipItem(6, -3);
        if ((M2C_FIELD(data_ov000_02051548, s32 *, 0x90) == 3) && (temp_r4 != 0x800000)) {
            EquipItem(6, 0x3B);
            EquipItem(6, 0xEC);
            EquipItem(6, 0xE0);
        }
    }
    if ((s32) M2C_FIELD(data_ov000_02051548, s32 *, 0x90) < 5) {
        EquipItem(8, -1);
        EquipItem(8, -2);
        EquipItem(8, -3);
    }
    if ((s32) M2C_FIELD(data_ov000_02051548, s32 *, 0x90) < 9) {
        EquipItem(5, -1);
        EquipItem(5, -2);
        EquipItem(5, -3);
        if ((M2C_FIELD(data_ov000_02051548, s32 *, 0x90) == 8) && (temp_r4 != 0x800000)) {
            EquipItem(5, 0xF4);
            EquipItem(5, 0x4E);
            EquipItem(5, 0x9E);
        }
    }
    if ((s32) M2C_FIELD(data_ov000_02051548, s32 *, 0x90) >= 0xB) {
        return;
    }
    EquipItem(7, -1);
    EquipItem(7, -2);
    EquipItem(7, -3);
    temp_r0 = M2C_FIELD(data_ov000_02051548, s32 *, 0x90);
    if ((temp_r0 == 0xA) && (temp_r4 != 0x800000)) {
        EquipItem(7, 0xF4);
        EquipItem(7, 0x53);
        EquipItem(7, 0xA0);
        return;
    }
    if ((u32) (temp_r0 - 8) > 1U) {
        return;
    }
    if (temp_r4 == 0x800000) {
        return;
    }
    EquipItem(7, 0xF4);
}
