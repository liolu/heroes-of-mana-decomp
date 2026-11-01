#include "m2c.h"
struct VA {
    virtual s32 f0();
    virtual s32 f1();
    virtual s32 f2();
    virtual s32 f3();
    virtual s32 f4();
    virtual s32 f5();
    virtual void f6(s32 a, s32 b, s32 c);
    virtual s32 f7();
    virtual s32 f8();
    virtual s32 f9();
    virtual s32 f10();
    virtual s32 f11();
    virtual s32 f12();
    virtual s32 f13();
    virtual s32 f14();
    virtual s32 f15();
};
extern "C" {
void func_ov004_020bbc34(void *arg0, s32 arg1, s32 arg2) {
    s32 v;
    s32 w;
    s32 m;
    v = ((VA *) arg0)->f3();
    m = arg1;
    if (m >= v) {
        m = v;
    }
    w = ((VA *) arg0)->f4();
    ((VA *) arg0)->f6(arg2, w, m * 2);
}
}
