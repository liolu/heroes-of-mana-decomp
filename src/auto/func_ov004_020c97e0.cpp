/* near start: 2 diffs with profile "2.0/sp1p5" */
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
    virtual u16 f11(s32);
};
typedef struct {
    u16 r : 5;
    u16 g : 5;
    u16 b : 5;
    u16 a : 1;
} C;
typedef struct {
    u8 pad[0x18];
    VA **arr;
} P;
extern "C" void func_ov004_020c97e0(u8 *out, P *p, s32 idx);
void func_ov004_020c97e0(u8 *out, P *p, s32 idx) {
    C c;
    u16 col;
    col    = p->arr[idx / 16]->f11(idx % 16);
    c      = *(C *) &col;
    out[0] = c.r << 3;
    out[1] = c.g << 3;
    out[2] = c.b << 3;
    out[3] = 0xff;
}
