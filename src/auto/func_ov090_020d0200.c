#include "m2c.h"

M2C_UNK EquipItem(M2C_UNK, M2C_UNK);      /* extern */
extern void *data_ov000_02051548;

void func_ov090_020d0200(void) {
    s32 *obj;
    u32 flags;

    if ((s32) M2C_FIELD(data_ov000_02051548, s32 *, 0x90) >= 6) {
        return;
    }
    EquipItem(0xA, -1);
    EquipItem(0xA, -2);
    EquipItem(0xA, -3);
    obj = data_ov000_02051548;
    flags = M2C_FIELD(obj, u32 *, 0x8C) & 0x800000;
    if (M2C_FIELD(obj, s32 *, 0x90) != 5) {
        return;
    }
    if (flags == 0x800000) {
        return;
    }
    EquipItem(0xA, 3);
    EquipItem(0xA, 0x9D);
}
