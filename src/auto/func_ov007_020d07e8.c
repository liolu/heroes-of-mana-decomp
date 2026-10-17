#include "m2c.h"

M2C_UNK WaitSyncCounter(M2C_UNK);               /* extern */
M2C_UNK CameraMoveAndWait(M2C_UNK, M2C_UNK, s32, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK ObjSet(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK TG_objLookObj_withRelay(M2C_UNK, s32);          /* extern */

void func_ov007_020d07e8(s32 arg0) {
    M2C_UNK var_r3;

    if (arg0 == 3) {
        var_r3 = 0x16;
    } else if (arg0 == 4) {
        var_r3 = 0x13;
    } else {
        var_r3 = 0x15;
    }
    ObjSet(arg0, 7, 5, var_r3);
    ObjSet(arg0, 1, 0x190, 0);
    ObjSet(arg0, 0xB, 9, 0);
    CameraMoveAndWait(0x3C, 1, arg0, 0, -1, -1, -1);
    TG_objLookObj_withRelay(0, arg0);
    WaitSyncCounter(4);
    TG_objLookObj_withRelay(1, arg0);
}
