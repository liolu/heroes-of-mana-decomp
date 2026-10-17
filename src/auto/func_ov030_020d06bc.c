#include "m2c.h"

M2C_UNK WaitSyncUnit(s32);                   /* extern */
M2C_UNK ObjSet(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK Routine_SoundEffect(M2C_UNK);               /* extern */

void func_ov030_020d06bc(void) {
    ObjSet(0xF0E, 0xE, 0xC, 0);
    WaitSyncUnit(0xF0E);
    ObjSet(0xF0E, 0x23, 0xBA, 0);
    Routine_SoundEffect(0x82);
}
