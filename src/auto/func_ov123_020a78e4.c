/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

s32 func_ov123_020a678c(u16);
s32 func_ov123_020a67a4(s32);
void func_ov123_020a8000(s32);
s32 func_ov123_020a7738(u8 *, u8 *, s32 *, u8 *);

s32 func_ov123_020a78e4(s32 arg0, u8 *arg1, s32 *arg2, u8 *arg3) {
    u8 *p;
    u8 *q;

    if (arg0 != 2) {
        *arg2 = *arg2 + 1;
        return arg0;
    }
    p = arg1 + 0x24;
    q = arg1 + 0xC;
    q += 0x10;
    if (func_ov123_020a7738(arg3 + 0x10, q, arg2, arg3 + 0x10) < 0) {
        *arg2 = *arg2 + 1;
        return arg0;
    }
    if (p[0] != 7) {
        *arg2 = *arg2 + 1;
        return arg0;
    }
    if (func_ov123_020a678c(*(u16 *) (p + 2)) == 0) {
        *arg2 = *arg2 + 1;
        return arg0;
    }
    if (func_ov123_020a67a4(*(s32 *) (p + 4)) == 0) {
        return 100;
    }
    if (func_ov123_020a67a4(*(s32 *) (p + 4)) == -2) {
        func_ov123_020a8000(0x14);
        return -1;
    }
    if (func_ov123_020a67a4(*(s32 *) (p + 4)) == -3) {
        func_ov123_020a8000(0x15);
        return -1;
    }
    func_ov123_020a8000(0x18);
    return -1;
}
