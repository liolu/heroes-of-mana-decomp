#include "m2c.h"

M2C_UNK ObjSet(s32, M2C_UNK, M2C_UNK, s32); /* extern */
s32 GetUnitStatus(s32);                       /* extern */

void func_ov030_020d04f8(M2C_UNK arg0) {
    s32 var_r7;
    s32 var_r7_2;
    s32 var_r7_3;

    var_r7 = 0;
    do {
        if (GetUnitStatus(var_r7 + 0xF0B) != 0) {
            ObjSet(var_r7 + 0xF0B, 0x19, arg0, 0);
        }
        var_r7 += 1;
    } while (var_r7 < 3);
    var_r7_2 = 0;
    do {
        if (GetUnitStatus(var_r7_2 + 0xF11) != 0) {
            ObjSet(var_r7_2 + 0xF11, 0x19, arg0, 0);
        }
        var_r7_2 += 1;
    } while (var_r7_2 < 2);
    var_r7_3 = 0;
    do {
        if (GetUnitStatus(var_r7_3 + 0xF17) != 0) {
            ObjSet(var_r7_3 + 0xF17, 0x19, arg0, 0);
        }
        var_r7_3 += 1;
    } while (var_r7_3 < 0xA);
}
