#include "m2c.h"

struct VE {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual s32 f6();
    u8 pad[8];
};

struct OW {
    s32 p0;
    s32 p1;
    s32 count;
    VE *arr;
};
extern "C" s32 func_ov004_020bcbf4(OW *arg0) {
    s32 r5;
    s32 r6;
    s32 r7;

    r5 = 0;
    r6 = 0;
    if (arg0->count > 0) {
        r7 = 0;
        do {
            VE *e = (VE *) ((u8 *) arg0->arr + r7);
            r5 += e->f6();
            r6 += 1;
            r7 += 12;
        } while (r6 < arg0->count);
    }
    return r5;
}
