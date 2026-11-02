#include "m2c.h"

class VA {
public:
    virtual s32 f0(void);
    virtual s32 f1(void);
    virtual s32 f2(void);
    virtual s32 f3(void);
    virtual s32 f4(void);
    virtual s32 f5(void);
    virtual void f6(s32, s32, s32);
};

extern "C" void func_ov004_020bbb08(VA *arg0, s32 arg1, s32 arg2) {
    s32 v1;
    s32 v2;
    s32 m;

    v1 = arg0->f3();
    m  = v1;
    if (v1 >= arg1) {
        m = arg1;
    }
    v2 = arg0->f4();
    arg0->f6(arg2, v2, m * 2);
}
