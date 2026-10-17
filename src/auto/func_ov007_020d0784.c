#include "m2c.h"

M2C_UNK WaitSyncCounter(M2C_UNK);               /* extern */
M2C_UNK TG_objLookObj_withRelay(M2C_UNK, M2C_UNK);      /* extern */

void func_ov007_020d0784(void) {
    TG_objLookObj_withRelay(0, 1);
    WaitSyncCounter(0x10);
    TG_objLookObj_withRelay(1, 0);
}
