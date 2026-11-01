#include "m2c.h"

struct VT {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual void f8();
    virtual u16 f9();
    virtual void f10();
    virtual u16 f11();
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
void func_ov004_020bc818(u8 *arg0, VT *arg1, VT *arg2) {
    if (arg1 != 0) {
        *(u16 *) (arg0 + 0xC) = arg1->f9();
        *(u16 *) (arg0 + 0xE) = arg1->f11();
        arg1->f20();
    }
    if (arg2 == 0) {
        return;
    }
    arg2->f7();
}
}
