#include "m2c.h"

M2C_UNK WaitSyncCounter(M2C_UNK);               /* extern */
M2C_UNK ObjSet(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK SetAikyoEffectWithXYZ(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */

void func_ov016_020d0a2c(M2C_UNK arg0) {
    ObjSet(arg0, 0x26, 0, 0);
    ObjSet(arg0, 0x12, 0, 0);
    WaitSyncCounter(1);
    SetAikyoEffectWithXYZ(0xB2, arg0, 0, 0, 0, 0, 0);
    ObjSet(arg0, 1, 0xC8, 0);
    ObjSet(arg0, 0xE, 7, 0);
    ObjSet(arg0, 0x1B, 1, 0);
    ObjSet(arg0, 0x15, 1, 0);
}
