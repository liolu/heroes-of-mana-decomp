#include "m2c.h"

M2C_UNK ObjSet(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK Routine_SoundEffect(M2C_UNK);               /* extern */

void func_ov086_020d042c(void) {
    ObjSet(0xF10, 0xE, 0xC, 0);
    Routine_SoundEffect(0xD0);
    ObjSet(0xF10, 0x23, 0x35, 0);
}
