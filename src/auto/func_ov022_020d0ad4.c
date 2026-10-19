#include "m2c.h"

M2C_UNK WaitSyncCounter(M2C_UNK);               /* extern */
M2C_UNK ObjSet(s32, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK Routine_SoundEffect(M2C_UNK);               /* extern */

void func_ov022_020d0ad4(s32 arg0) {
    s32 var_r8;
    s32 var_r9;
    s32 var_r10;

    if (arg0 == 1) {
        var_r9  = 1;
        var_r10 = 0xF09;
    } else if (arg0 == 2) {
        var_r9  = 3;
        var_r10 = 0xF0A;
    } else {
        var_r9 = 2;
        if (arg0 == 3) {
            var_r10 = 0xF0D;
        } else {
            var_r10 = 0xF0F;
        }
    }
    var_r8 = 0;
    if (var_r9 <= 0) {
        return;
    }
    do {
        Routine_SoundEffect(0x27C);
        ObjSet(var_r10 + var_r8, 0x15, 1, 0);
        WaitSyncCounter(2);
        var_r8 += 1;
    } while (var_r8 < var_r9);
}
