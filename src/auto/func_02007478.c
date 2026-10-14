#include "m2c.h"

void func_02007478(void *arg0) {
    s32 *temp_r2;

    temp_r2 = M2C_FIELD(arg0, s32 **, 0x14C);
    if (temp_r2 != NULL) {
        *temp_r2                       = 0;
        M2C_FIELD(arg0, s32 **, 0x14C) = NULL;
    }
    M2C_FIELD(arg0, volatile s32 *, 0x110) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x110) & ~1);
    M2C_FIELD(arg0, volatile s32 *, 0x110) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x110) & ~4);
    M2C_FIELD(arg0, volatile s32 *, 0x110) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x110) & ~2);
}
