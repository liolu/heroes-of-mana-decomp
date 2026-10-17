#include "m2c.h"

M2C_UNK EquipItem(M2C_UNK, M2C_UNK);      /* extern */
extern void *data_ov000_02051548;

void func_ov091_020d0218(void) {
    if ((s32) M2C_FIELD(data_ov000_02051548, s32 *, 0x90) >= 5) {
        return;
    }
    EquipItem(8, -1);
    EquipItem(8, -2);
    EquipItem(8, -3);
}
