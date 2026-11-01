#include "m2c.h"
struct S {
    virtual void f0();
    virtual void f1();
};
struct E {
    u16 p;
    u16 id;
};
struct VC0 {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual E *f6(s32);
};
struct VC1 {
    virtual void f0();
    virtual void f1();
    virtual void f2(s32);
};
struct VC2 {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual s32 f4b(u16);
};
struct W {
    u32 vt;
    VC2 c4;
    u8 p[0x20];
    VC0 c28;
    u32 pad2c;
    VC1 c30;
    u8 q[0x08];
    s32 f3c;
    u8 r[0x30];
    E *f70;
    u8 t[4];
    S *f78;
};
extern "C" {
S *func_0202f3f8(s32);
S *func_ov004_020c98f4(S *, void *, u16);
void func_ov004_020caa00(W *w);
}
void func_ov004_020caa00(W *w) {
    E *e = w->c28.f6(w->f3c >> 16);
    S *s;
    if (e == w->f70) {
        return;
    }
    if (w->f78 != 0) {
        w->f78->f1();
    }
    w->f78 = 0;
    if (e != 0) {
        w->c30.f2(w->c4.f4b(e->id));
        s = func_0202f3f8(0x3c);
        if (s != 0) {
            s = func_ov004_020c98f4(s, &w->c4, e->id);
        }
        w->f78 = s;
    }
    w->f70 = e;
}
