#include "m2c.h"
struct VA {
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
    virtual void f14();
    virtual void f15();
    virtual void f16();
    virtual void f17();
    virtual void f18();
    virtual void f19();
    virtual void f20();
};
extern "C" {
extern u8 data_ov004_020cf80c[];
}
extern "C" VA *func_ov004_020caac0(VA *o);
VA *func_ov004_020caac0(VA *o) {
    *(void **) o = (void *) data_ov004_020cf80c;
    o->f3();
    return o;
}
