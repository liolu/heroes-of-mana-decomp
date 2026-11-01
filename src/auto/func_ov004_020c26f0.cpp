#include "m2c.h"
struct VY {
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
    virtual void f25();
};
extern "C" void func_ov004_020c26f0(void *arg0);
extern "C" void func_ov004_020c26f0(void *arg0) {
    s32 i;
    u8 *p = (u8 *) arg0;
    if (*(void **) (p + 0x18) != 0) {
        ((VY *) *(void **) (p + 0x18))->f25();
    }
    i = 0;
    if (*(s32 *) (p + 0x20) <= 0) {
        return;
    }
    do {
        ((VY *) (*(void ***) (p + 0x24))[i])->f25();
        i += 1;
    } while (i < *(s32 *) (p + 0x20));
}
