#include "m2c.h"
typedef struct {
    u16 r : 5;
    u16 g : 5;
    u16 b : 5;
    u16 x : 1;
} Col;
typedef struct {
    u32 a;
    u32 p0 : 10;
    u32 alpha : 5;
    u32 p1 : 17;
    u8 pad[0x108];
} Elem;
struct Sink {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual void set(s32, Col *);
};
struct Obj {
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
    virtual s32 test();
    s32 idx;
    u8 p0[8];
    u8 cr;
    u8 cg;
    u8 cb;
    u8 ca;
    u8 p1[8];
    Col src[16];
    Col dst[16];
    Sink *sink;
};
extern "C" {
extern Elem data_ov003_020b0cf0[];
extern s32 func_ov004_020b8f08(s32, s32);
extern void ScriptAlphaToDis(Elem *, s32, s32);
void func_ov004_020c1670(Obj *o);
}

void func_ov004_020c1670(Obj *o) {
    u32 r;
    u32 g;
    u32 b;
    s32 i;
    if (o->sink == 0) {
        return;
    }
    r = (u32) o->cr >> 3;
    g = (u32) o->cg >> 3;
    b = (u32) o->cb >> 3;
    for (i = 0; i < 16; i++) {
        o->dst[i].r = (u16) func_ov004_020b8f08(r * o->src[i].r, 0x1f);
        o->dst[i].g = (u16) func_ov004_020b8f08(g * o->src[i].g, 0x1f);
        o->dst[i].b = (u16) func_ov004_020b8f08(b * o->src[i].b, 0x1f);
    }
    o->sink->set(0x10, o->dst);
    if (o->test() != 0) {
        ScriptAlphaToDis(&data_ov003_020b0cf0[o->idx], (u32) o->ca >> 3, 1);
        return;
    }
    data_ov003_020b0cf0[o->idx].alpha = (u32) o->ca >> 3;
}
