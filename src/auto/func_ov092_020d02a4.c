#include "m2c.h"

M2C_UNK WaitSyncUnit(M2C_UNK);               /* extern */
M2C_UNK ObjSet(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK Routine_SoundEffect(M2C_UNK);               /* extern */

void func_ov092_020d02a4(void) {
    ObjSet(0xF20, 0xE, 0xC, 0);
    Routine_SoundEffect(0xD0);
    WaitSyncUnit(0xF20);
    ObjSet(0xF20, 0x23, 0x35, 0);
}
