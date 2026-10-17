#include "m2c.h"

s32 func_ov004_020c93b8(void *arg0, u16 *arg1) {
    if (arg1 == NULL) {
        return 0;
    }
    M2C_FIELD(arg0, u16 *, 4)   = (u16) *arg1;
    M2C_FIELD(arg0, void **, 8) = (void *) ((u8 *) arg1 + 4);
    return 1;
}
