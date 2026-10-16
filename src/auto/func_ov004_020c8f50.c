#include "m2c.h"

M2C_UNK func_0202f49c(s32);                         /* extern */

void func_ov004_020c8f50(void *arg0, s32 arg1) {
    if (arg1 == 1) {
        func_0202f49c(M2C_FIELD(arg0, s32 *, 8));
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
