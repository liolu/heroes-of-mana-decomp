#include "m2c.h"

M2C_UNK DeleteItemOne(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK EquipItem(M2C_UNK, M2C_UNK);      /* extern */

void func_ov014_020d08bc(void) {
    EquipItem(5, -1);
    EquipItem(7, -1);
    DeleteItemOne(0xF4, 2);
}
