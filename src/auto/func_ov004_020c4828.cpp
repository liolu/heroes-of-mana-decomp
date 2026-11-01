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
    S *s40;
    S *s44;
    S *s48;
    u8 q[0xc];
    void *f58;
    B *f5c;
};
extern "C" {
extern u8 data_ov004_020ce858[];
void func_0202f45c(void *);
void func_0202f49c(s32);
void func_ov004_020c2938(void *);
A *func_ov004_020c4828(A *a);
}
A *func_ov004_020c4828(A *a) {
    B *b;
    *(u8 **) a = data_ov004_020ce858;
    func_0202f45c(a->f58);
    b = a->f5c;
    if (b != 0) {
        func_0202f49c(b->v14);
        func_0202f45c(b);
    }
    if (a->s48 != 0) {
        a->s48->f1();
    }
    if (a->s44 != 0) {
        a->s44->f1();
    }
    if (a->s40 != 0) {
        a->s40->f1();
    }
    if (a->s3c != 0) {
        a->s3c->f1();
    }
    func_ov004_020c2938(a);
    func_0202f45c(a);
    return a;
}
