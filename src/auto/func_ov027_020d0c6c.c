#include "m2c.h"

M2C_UNK WaitSyncAikyoEffect(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK WaitSyncCounter(M2C_UNK);               /* extern */
M2C_UNK Routine_SetEvPos(M2C_UNK);               /* extern */
M2C_UNK ObjSet(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK Routine_SoundEffect(s32);                   /* extern */
M2C_UNK SetAikyoEffectWithXYZ(M2C_UNK, s32, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */

void func_ov027_020d0c6c(M2C_UNK arg0, M2C_UNK arg1) {
    Routine_SetEvPos(5);
    ObjSet(0xF16, 0x21, 0, 0);
    ObjSet(0xF16, 7, arg0, arg1);
    ObjSet(0xF16, 0x26, 1, 0);
    ObjSet(0xF16, 0x12, 0, 0);
    WaitSyncCounter(1);
    SetAikyoEffectWithXYZ(0xA5, 0xF16, 0, 0, 0, 0, 0);
    Routine_SoundEffect(0x1FB);
    WaitSyncAikyoEffect(-1, -1);
}
