#include "m2c.h"
struct VO {
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
    virtual s32 f11(s32);
};
struct VP {
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
    virtual void f21();
    virtual void f22();
    virtual void f23();
    virtual void f24();
    virtual void *f25(s32);
};
struct VQ {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
};
extern "C" {
extern u8 *data_ov123_020e47e8;
void func_ov123_020d4604(s32 arg0);
}
extern "C" void func_ov123_020d4604(s32 arg0) {
    s32 r;
    void *x;
    r = ((VO *) (data_ov123_020e47e8 + 0x3bc + 0x2400))->f11(arg0);
    x = ((VP *) (data_ov123_020e47e8 + 0x530 + 0x7000))->f25(r);
    ((VQ *) x)->f4();
}
