#include "m2c.h"

M2C_UNK WaitSyncUnit(s32);                   /* extern */
M2C_UNK WaitSyncAikyoEffect(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK ObjSet(s32, M2C_UNK, s32, M2C_UNK); /* extern */

void func_ov032_020d4460(void) {
    ObjSet(0xF19, 0xE, 0xE, 0);
    WaitSyncUnit(0xF19);
    ObjSet(0xF19, 0xE, 0xF, 0);
    ObjSet(0xF19, 0x1B, 1, 0);
    ObjSet(0xF19, 0x1E, 0x130, 0);
    ObjSet(0xF19, 0x1F, 1, 0);
    WaitSyncAikyoEffect(-1, -1);
    ObjSet(0xF19, 0xE, 0, 0);
    ObjSet(0xF19, 0x1B, 0, 0);
    ObjSet(0xF19, 0x1E, 0x12F, 0);
}
