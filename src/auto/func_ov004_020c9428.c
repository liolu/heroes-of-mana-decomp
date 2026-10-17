#include "m2c.h"

s32 func_ov004_020c9428(void *arg0, u16 *arg1) {
    if (arg1 == NULL) {
        return 0;
    }
    M2C_FIELD(arg0, u16 *, 0x1C)   = (u16) *arg1;
    M2C_FIELD(arg0, void **, 0x20) = (void *) ((u8 *) arg1 + 4);
    return 1;
}
