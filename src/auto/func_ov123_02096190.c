#include "m2c.h"
s32 func_ov123_020961e4(s32, s32, u8 *, u32);
s32 func_02024c28(s32);
s32 func_ov123_020991e0(s32, s32, u8 *, u32);

s32 func_ov123_02096190(s32 arg0, s32 arg1, u8 *arg2, u32 arg3) {
    s32 r = func_ov123_020961e4(arg0, arg1, arg2, arg3);
    s32 res;
    if (r == 0) {
        return 0;
    }
    res = func_ov123_020991e0(r, func_02024c28(r), arg2, arg3);
    if (res == -1 || (u32) res >= arg3) {
        return res;
    }
    arg2[res] = 0;
    return res;
}
