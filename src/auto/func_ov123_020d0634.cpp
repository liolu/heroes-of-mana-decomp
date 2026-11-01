#include "m2c.h"
struct VB {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual void f8();
    virtual void f9();
    virtual void f10();
    virtual void f11();
    virtual void f12();
    virtual void f13();
    virtual s32 f14();
    virtual void f15();
    virtual void f16();
    virtual void f17();
    virtual void f18();
    virtual void f19();
    virtual void f20();
};
extern "C" {
s32 func_ov123_020d0634(u8 *a, VB *o);
}
s32 func_ov123_020d0634(u8 *a, VB *o) {
    s8 v;
    if (o->f14() > 0) {
        v = 1;
    } else {
        v = 0;
    }
    *(s8 *) (a + 12) = v;
    return 1;
}
