#include "m2c.h"

M2C_UNK ObjSet(s32, M2C_UNK, M2C_UNK, s32); /* extern */
s32 GetUnitStatus(s32);                       /* extern */

void func_ov018_020d0530(M2C_UNK arg0) {
    s32 var_r6;

    var_r6 = 0;
    do {
        if (GetUnitStatus(var_r6 + 0xF11) != 0) {
            ObjSet(var_r6 + 0xF11, 0x19, arg0, 0);
        }
        var_r6 += 1;
    } while (var_r6 < 0x18);
}
