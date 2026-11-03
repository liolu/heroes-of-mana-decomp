#include "m2c.h"

struct S1 {
    s32 v;
    s32 w[5];
};

struct VB {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual S1 f6();
};

extern "C" s32 func_ov123_020cfbec(u8 *arg0) {
    struct {
        S1 out;
    } L;
    s32 i;
    VB *p;

    i = 0;
    p = (VB *) (arg0 + 0x8);
    do {
        L.out = p->f6();
        if (L.out.v <= 0) {
            return i;
        }
        i += 1;
        p = (VB *) ((u8 *) p + 0x28);
    } while (i < 5);
    return 5;
}
