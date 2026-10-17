#include "m2c.h"

M2C_UNK DeleteItemOne(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK EquipItem(M2C_UNK, M2C_UNK);      /* extern */

void func_ov009_020d06b4(void) {
    EquipItem(6, -1);
    EquipItem(6, -2);
    EquipItem(6, -3);
    DeleteItemOne(0x3B, 1);
    DeleteItemOne(0xEC, 1);
    DeleteItemOne(0xE0, 1);
}
