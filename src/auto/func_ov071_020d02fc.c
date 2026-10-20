#include "m2c.h"

M2C_UNK EquipItem(M2C_UNK, M2C_UNK);      /* extern */
extern void *data_ov000_02051548;

void func_ov071_020d02fc(void) {
    s32 *obj;
    u32 flags;

    if ((s32) M2C_FIELD(data_ov000_02051548, s32 *, 0x90) >= 4) {
        return;
    }
    EquipItem(6, -1);
    EquipItem(6, -2);
    EquipItem(6, -3);
    obj = data_ov000_02051548;
    flags = M2C_FIELD(obj, u32 *, 0x8C) & 0x800000;
    if (M2C_FIELD(obj, s32 *, 0x90) != 3) {
        return;
    }
    if (flags == 0x800000) {
        return;
    }
    EquipItem(6, 0x3B);
    EquipItem(6, 0xEC);
    EquipItem(6, 0xE0);
}
