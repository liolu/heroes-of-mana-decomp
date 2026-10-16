#include "m2c.h"

M2C_UNK FS_WaitAsync(s32);                          /* extern */

void func_ov110_020e262c(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x10) == 1) {
        FS_WaitAsync(M2C_FIELD(arg0, s32 *, 0xC));
    }
    M2C_FIELD(arg0, u8 *, 0x10) = 0U;
}
