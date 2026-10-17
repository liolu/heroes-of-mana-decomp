/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

void func_02008404(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0)   = arg2;
    M2C_FIELD(arg0, s32 *, 4)   = arg1;
    M2C_FIELD(arg0, s32 *, 8)   = (s32) (0 - arg1);
    M2C_FIELD(arg0, s32 *, 0xC) = arg2;
}
