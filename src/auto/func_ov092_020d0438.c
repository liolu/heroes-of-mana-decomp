#include "m2c.h"

M2C_UNK WaitSyncCounter(M2C_UNK);               /* extern */
M2C_UNK ObjSet(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_ov092_020d0438(void) {
    ObjSet(0xF1A, 0xE, 0xD, 0);
    WaitSyncCounter(0x1E);
    ObjSet(0xF1A, 0x23, 0xB8, 0);
    WaitSyncCounter(0x1E);
}
