#include "m2c.h"

struct A {
    virtual void a0();
    virtual void a1();
    virtual void a2(s32);
    virtual void a3(s32);
    virtual void g4();
    virtual void g5();
    virtual void g6();
    virtual void g7();
    virtual void g8();
    virtual void g9();
    virtual void g10();
    virtual void g11();
    virtual void g12();
    virtual void g13();
    virtual void g14();
    virtual void g15();
    virtual void g16();
    virtual void g17();
    virtual void g18();
    virtual void g19();
    virtual void g20();
    virtual void g21();
    virtual void g22();
    virtual void a23(s32, s32, s32, s32, s32, s32);
};
struct B {
    virtual void b0();
    virtual void b1();
    virtual void b2();
    virtual void b3();
    virtual void b4();
    virtual void b5();
    virtual void b6();
    virtual void b7();
    virtual void b8(s32, s32);
};
struct M1 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5(A *, s32);
    virtual A *m6(s32);
};
struct M2 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5(B *, s32);
    virtual B *m6(s32);
};
struct Self {
    u8 pad[0xC];
    void *w;
    s32 w10;
    A *a;
    B *b;
};

extern "C" {
s32 func_ov004_020becf8(void *);
s32 func_ov004_020bed00(void *);
M1 *func_ov004_020bb458(void);
s32 func_ov004_020bed08(void *);
A *func_0202f3f8(s32);
A *func_ov004_020bb26c(A *, s32, s32);
M2 *func_ov004_020bbd58(void);
s32 func_ov004_020bed18(void *);
s32 func_ov004_020bed10(void *);
B *func_ov004_020bbbdc(B *, s32);
void func_ov004_020be79c(Self *self);
}

void func_ov004_020be79c(Self *self) {
    s32 a;
    s32 b;
    M1 *o;
    A *p;
    B *q;
    M2 *o2;
    s32 t;

    if (self->w == 0) {
        return;
    }
    a       = func_ov004_020becf8(self->w);
    b       = func_ov004_020bed00(self->w);
    o       = func_ov004_020bb458();
    self->a = o->m6(func_ov004_020bed08(self->w));
    if (self->a == 0) {
        p = func_0202f3f8(0x40);
        if (p != 0) {
            p = func_ov004_020bb26c(p, a, b);
        }
        self->a = p;
        p->a2(1);
        self->a->a3(1);
        self->a->a23(0, 0, a, b, func_ov004_020bed08(self->w), a);
        o = func_ov004_020bb458();
        o->m5(self->a, func_ov004_020bed08(self->w));
    }
    o2      = func_ov004_020bbd58();
    self->b = o2->m6(func_ov004_020bed18(self->w));
    if (self->b != 0) {
        return;
    }
    q = (B *) func_0202f3f8(0x1C);
    if (q != 0) {
        q = func_ov004_020bbbdc(q, func_ov004_020bed10(self->w));
    }
    self->b = q;
    t       = func_ov004_020bed10(self->w);
    self->b->b8(t, func_ov004_020bed18(self->w));
    o2 = func_ov004_020bbd58();
    o2->m5(self->b, func_ov004_020bed18(self->w));
}
