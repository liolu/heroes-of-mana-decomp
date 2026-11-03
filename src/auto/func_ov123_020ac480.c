/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

s32 func_ov123_020ac7a4(void *, s32 *, s32 *);
void func_ov123_020ab624(void *, s32, s32, s32, s32);
void func_02021318(void *, s32, s32);

s32 func_ov123_020ac480(void *arg0, s32 arg1, void *arg2, s32 arg3) {
    s32 a;
    s32 b;
    s32 t;

    t = func_ov123_020ac7a4(arg0, &a, &b);
    if (t == 0) {
        return 0;
    }
    if (a != arg1) {
        return 0;
    }
    if (arg3 != 0) {
        func_ov123_020ab624(arg2, t, b, arg3, 0x10);
        b -= 8;
    } else {
        func_02021318(arg2, t, b);
    }
    return b;
}
