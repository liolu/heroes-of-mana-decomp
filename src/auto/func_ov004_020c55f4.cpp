#include "m2c.h"
struct S {
    virtual void f0();
    virtual void f1();
};
struct B {
    u8 p[0x14];
    s32 v14;
};
struct A {
    u32 vt;
    u8 p[0x38];
    S *s3c;
    u8 q0[4];
    S *s44;
    S *s48;
    u8 q[0xc];
    S *s58;
    void *f5c;
    B *f60;
};
extern "C" {
extern u8 data_ov004_020cea30[];
void func_0202f45c(void *);
void func_0202f49c(s32);
void func_ov004_020c2938(void *);
A *func_ov004_020c55f4(A *a);
}
A *func_ov004_020c55f4(A *a) {
    B *b;
    *(u8 **) a = data_ov004_020cea30;
    b          = a->f60;
    if (b != 0) {
        func_0202f49c(b->v14);
        func_0202f45c(b);
    }
    func_0202f45c(a->f5c);
    if (a->s58 != 0) {
        a->s58->f1();
    }
    if (a->s48 != 0) {
        a->s48->f1();
    }
    if (a->s44 != 0) {
        a->s44->f1();
    }
    if (a->s3c != 0) {
        a->s3c->f1();
    }
    func_ov004_020c2938(a);
    return a;
}
