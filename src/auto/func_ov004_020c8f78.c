#include "m2c.h"

M2C_UNK MI_UncompressLZ8(void *, s32);              /* extern */
s32 func_0202f470();                                /* extern */

s32 func_ov004_020c8f78(void *arg0, void *arg1) {
    if (arg1 == NULL) {
        return 0;
    }
    M2C_FIELD(arg0, u32 *, 4) = (u32) ((u32) M2C_FIELD(arg1, u32 *, 4) >> 8);
    M2C_FIELD(arg0, s32 *, 8) = func_0202f470();
    MI_UncompressLZ8((u8 *) arg1 + 4, M2C_FIELD(arg0, s32 *, 8));
    return 1;
}
