#include "m2c.h"

M2C_UNK ObjSet(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 GetUnitStatus(M2C_UNK);                   /* extern */

void func_ov084_020d02f8(M2C_UNK arg0) {
    if (GetUnitStatus(0xF00) == 0) {
        return;
    }
    ObjSet(0xF00, 0x19, arg0, 0);
}
