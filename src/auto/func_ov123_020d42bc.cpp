#include "m2c.h"
struct VP {
    virtual void *f0();
    virtual void *f1();
    virtual void *f2();
    virtual void *f3();
    virtual void *f4();
    virtual void *f5();
    virtual void *f6();
    virtual void *f7(void *a);
    virtual void *f8();
    virtual void *f9();
    virtual void *f10();
    virtual void *f11();
    virtual void *f12();
    virtual void *f13();
    virtual void *f14();
    virtual void *f15();
};
extern "C" {
extern s32 data_ov123_020e47e8[];
void func_ov123_020d42bc(void *arg0) {
    void *o;
    o = ((VP *) ((u8 *) *(void **) data_ov123_020e47e8 + 0x3bc + 0x2400))->f7(arg0);
    o = ((VP *) o)->f11();
    ((VP *) o)->f6();
}
}
