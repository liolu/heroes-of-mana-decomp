#include "m2c.h"

M2C_UNK RestoreLoadGameData(void *, u16);           /* extern */

void func_ov114_020e505c(void *arg0) {
    RestoreLoadGameData(arg0 + 0x10, (u16) M2C_FIELD(arg0, s32 *, 0xC));
}
