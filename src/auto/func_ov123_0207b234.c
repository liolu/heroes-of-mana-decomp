#include "m2c.h"
s32 func_ov123_0207ad3c(s32, s32, s32, s32 *, s32 *);
s32 func_ov123_0207b234(s32 arg0) {
    s32 sp8 = 4;
    s32 sp4;
    s32 r;
    if (func_ov123_0207ad3c(arg0, 0xFFFF, 0x1002, &sp4, &sp8) != -1) {
        r = sp4;
    } else {
        r = -1;
    }
    return r;
}
