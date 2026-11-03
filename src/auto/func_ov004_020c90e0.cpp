#include "m2c.h"

extern "C" void func_ov004_020c8fc4(void *);
extern u8 data_ov004_020cf66c[];

struct EB {
    virtual void f0();
    virtual void f1();
    virtual void f2(s32);
};

extern "C" void *func_ov004_020c90e0(void *arg0, s32 arg1) {
    *(void **) arg0 = (void *) data_ov004_020cf66c;
    func_ov004_020c8fc4((u8 *) arg0 + 4);
    ((EB *) ((u8 *) arg0 + 4))->f2(arg1);
    return arg0;
}
