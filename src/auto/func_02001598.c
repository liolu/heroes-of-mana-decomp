#include "m2c.h"

s32 func_02002e48(s32 arg0, void *arg1, s32 *arg2);

s32 func_02001598(u32 param_1, s32 *param_2) {
    s32 buf[4];

    buf[0] = 5;
    buf[1] = 2;
    buf[2] = param_1;
    return func_02002e48(3, buf, param_2);
}
