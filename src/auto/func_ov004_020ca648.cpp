#include "m2c.h"

class VA {
public:
    virtual s32 f0(void);
    virtual s32 f1(void);
    virtual s32 f2(void);
    virtual void f3(void);
};

extern "C" void func_ov004_020ca648(u8 *arg0) {
    VA *p = (VA *) (arg0 + 0x28);
    p->f3();
}
