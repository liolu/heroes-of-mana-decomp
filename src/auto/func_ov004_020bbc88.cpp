/* compiler: 2.0/sp1p5 -O2,p */
#include "m2c.h"

typedef struct {
    s32 v;
} Fx;

class VA {
public:
    virtual s32 f0(void);
    virtual s32 f1(void);
    virtual s32 f2(void);
    virtual s32 f3(void);
    virtual s32 f4(void);
    virtual void f5(void);
    virtual void f6(Fx *, s32, s32);
};

extern "C" void func_ov004_020bbc88(VA *o, s32 n, Fx out, s32 d) {
    s32 v;

    v = o->f4();
    o->f6(&out, v + (n << 1), 2);
}
