/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

void *func_0202d478(s32, s32);
s32 func_ov123_020a8cc0(void *);
void func_ov123_020a8cac(void *);
void func_ov123_020a6a44(s32, void *, s32, s32, s32);
void func_ov123_020a6a18(void *, void *, s32);
void func_ov123_020a69dc(void *, s32, void *);

s32 func_ov123_020a6a90(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *r6;
    void *t;
    s32 i;

    r6 = (void *) func_ov123_020a8cc0(func_0202d478(arg1, 2));
    if (r6 == 0) {
        return ~0;
    }
    t = (void *) func_ov123_020a8cc0((void *) arg1);
    if (t == 0) {
        func_ov123_020a8cac(r6);
        return ~0;
    }
    i = 0;
    do {
        func_ov123_020a6a44(i, r6, arg1, arg2, arg3);
        func_ov123_020a6a18(r6, arg0, arg1);
        func_ov123_020a69dc(arg0, arg1, t);
        i++;
    } while (i < 2);
    func_ov123_020a8cac(r6);
    func_ov123_020a8cac(t);
    return 0;
}
