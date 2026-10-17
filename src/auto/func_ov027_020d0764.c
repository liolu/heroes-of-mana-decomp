#include "m2c.h"

M2C_UNK ObjSet(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK Routine_SoundEffect(M2C_UNK);               /* extern */

void func_ov027_020d0764(void) {
    ObjSet(0xF12, 0xE, 0xC, 0);
    Routine_SoundEffect(0xD0);
    ObjSet(0xF12, 0x23, 0x35, 0);
}
