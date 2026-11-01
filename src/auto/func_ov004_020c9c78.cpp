#include "m2c.h"
struct VA {
    virtual s32 f0();
    virtual s32 f1();
    virtual s32 f2();
    virtual s32 f3();
    virtual s32 f4();
    virtual s32 f5();
    virtual s32 f6();
    virtual s32 f7(void *a);
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
void *func_ov004_020bb458(void *arg0);
void func_ov004_020c9c78(void *arg0, void *arg1) {
    void *p;
    s32 r;
    p = func_ov004_020bb458(arg0);
    r = ((VA *) p)->f7(arg1);
    if (r != 1) {
        return;
    }
    if (arg1 == 0) {
        return;
    }
    ((VA *) arg1)->f1();
}
}
