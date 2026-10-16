#include "m2c.h"

void func_ov004_020bd098(void *arg0) {
    M2C_FIELD(arg0, s32 *, 8)   = -1;
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 4);
}
