#include "m2c.h"

struct VA {
    virtual void f0();
    virtual void f1();
    virtual s32 f2(s32);
    virtual void f3();
    virtual void f4();
    virtual s32 f5();
    virtual s32 f6(s32);
};

extern "C" {
void func_ov004_020ca980(void *, s32);
void func_ov004_020caa00(void *);

void func_ov004_020ca90c(u8 *arg0, s32 arg1) {
    s32 r;
    volatile s32 zero;

    if (arg1 >= ((VA *) (arg0 + 4))->f5()) {
        return;
    }
    r = ((VA *) (arg0 + 4))->f6(arg1);
    if (((VA *) (arg0 + 0x28))->f2(r) != 1) {
        return;
    }
    *(s32 *) (arg0 + 0x38) = arg1;
    zero                   = 0;
    func_ov004_020ca980(arg0, 0);
    func_ov004_020caa00(arg0);
}
}
