#include "m2c.h"

M2C_UNK EquipItem(M2C_UNK, M2C_UNK);      /* extern */
extern void *data_ov000_02051548;

void func_ov073_020d0304(void) {
    s32 val;
    s32 flags;

    if ((s32) M2C_FIELD(data_ov000_02051548, s32 *, 0x90) < 5) {
        EquipItem(9, -1);
        EquipItem(9, -2);
        EquipItem(9, -3);
        flags = M2C_FIELD(data_ov000_02051548, s32 *, 0x8C) & 0x800000;
        val = M2C_FIELD(data_ov000_02051548, s32 *, 0x90);
        if ((val == 4) && (flags != 0x800000)) {
            EquipItem(9, 0x9D);
        }
    }
    if ((s32) M2C_FIELD(data_ov000_02051548, s32 *, 0x90) >= 6) {
        return;
    }
    EquipItem(0xA, -1);
    EquipItem(0xA, -2);
    EquipItem(0xA, -3);
    flags = M2C_FIELD(data_ov000_02051548, s32 *, 0x8C) & 0x800000;
    val = M2C_FIELD(data_ov000_02051548, s32 *, 0x90);
    if (val != 5) {
        return;
    }
    if (flags == 0x800000) {
        return;
    }
    EquipItem(0xA, 3);
    EquipItem(0xA, 0x9D);
}