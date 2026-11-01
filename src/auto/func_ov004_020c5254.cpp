#include "m2c.h"
struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2(s32);
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual void f8();
    virtual void f9();
    virtual void f10();
    virtual void f11();
    virtual void f12(s32);
    virtual void f13();
    virtual void f14(s32);
};
struct VB {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void *f6();
    virtual void f7();
    virtual void f8();
    virtual void f9();
    virtual void f10();
    virtual void f11();
    virtual void f12();
    virtual void f13();
    virtual void f14();
    virtual void f15();
    virtual void f16();
    virtual void f17();
    virtual void f18();
    virtual void f19();
    virtual void f20();
    virtual void f21();
    virtual void f22();
    virtual void f23();
    virtual void f24();
    virtual void f25();
    virtual void f26();
    virtual void f27();
    virtual void f28();
    virtual void f29();
    virtual void f30();
    virtual void f31();
    virtual void f32();
    virtual void f33();
    virtual void f34();
    virtual void f35();
    virtual void f36();
    virtual void f37();
    virtual void f38();
    virtual void f39();
    virtual void f40();
    virtual void f41();
    virtual void f42();
    virtual void f43();
    virtual void f44();
    virtual void f45();
    virtual void f46();
    virtual void f47();
    virtual void f48();
    virtual void f49();
    virtual void f50();
    virtual void f51();
    virtual void f52();
    virtual void f53();
    virtual void f54();
    virtual void f55();
    virtual void f56();
    virtual void f57();
    virtual void f58();
    virtual void f59();
    virtual void f60();
    virtual void f61();
    virtual void f62();
    virtual void f63();
    virtual void f64();
    virtual void f65();
    virtual void f66();
    virtual void f67();
    virtual void f68();
    virtual void f69();
    virtual void f70();
    virtual void f71();
    virtual void f72();
    virtual void f73();
    virtual void f74();
    virtual void f75();
    virtual void f76();
    virtual void f77();
    virtual void f78();
    virtual void f79();
    virtual void f80();
    virtual void f81();
    virtual void f82();
    virtual void f83();
    virtual void f84();
    virtual void f85();
    virtual void f86();
    virtual void f87();
    virtual void f88();
    virtual void f89();
    virtual void f90();
    virtual void f91();
    virtual void f92();
    virtual void f93();
    virtual void f94();
    virtual void f95();
    virtual void f96();
    virtual void f97();
    virtual void f98();
    virtual void f99();
};
struct S2 {
    void *a;
    void *b;
};
struct V3 {
    s32 x, y, z;
};
struct M9 {
    s32 a[9];
};
struct O {
    void *vt;
    u8 pad4[0x10];
    s32 f14;
    s32 m[9];
    VA *s3c;
    s32 f40;
    void *f44;
    void *f48;
    s32 v4c, v50, v54;
    void *f58;
    void *f5c;
    void *f60;
};
extern "C" {
extern u8 data_ov004_020ce3b8[];
extern u8 data_ov004_020ce7e4[];
extern u8 data_ov004_020cea30[];
extern u8 data_ov004_020cea68[];
extern u8 data_ov004_020ceb28[];
void *func_0202f3f8(s32);
s32 func_ov004_020b8f1c(s32, s32);
s32 func_ov004_020b9160(s32, s32);
void func_ov004_020b972c(void *);
void *func_ov004_020bf9e0(void *, s32);
s32 func_ov004_020c1f9c(void *);
s32 func_ov004_020c1fa4(void *);
s32 func_ov004_020c1fac(void *);
void func_ov004_020c28fc(O *, s32, void *, s32, s32);
void func_ov004_020c29ec(s32 *, s32);
void func_ov004_020c29f4(M9 *, s32 *, s32, s32, s32);
void *func_ov004_020c319c(void *, s32, void *, void *);
void func_ov004_020c37e0(V3 *, void *);
void *func_ov004_020c3c90(void *, s32, void *);
void *func_ov004_020c3fb4(void *, s32, void *);
s32 func_ov004_020c6018(s32);
s32 func_ov004_020c6020(s32);
void func_ov004_020c6030(s32 *, s32);
s32 func_ov004_020c6044(s32);
VB *func_ov004_020c604c(s32);
s32 func_ov004_020c6054(s32);
s32 func_ov004_020c605c(s32);
s32 func_ov004_020c6064(s32);
s32 func_ov004_020c6074(s32);
s32 func_ov004_020c607c(s32);
O *func_ov004_020c5254(O *o, s32 arg1, void *arg2, s32 arg3, s32 arg4);
}
O *func_ov004_020c5254(O *o, s32 arg1, void *arg2, s32 arg3, s32 arg4) {
    M9 d;
    V3 c;
    s32 b[2];
    s32 a;
    s32 t8, t4;
    u8 *p;
    func_ov004_020c28fc(o, arg1, arg2, arg3, arg4);
    o->vt = data_ov004_020cea30;
    func_ov004_020b972c(&o->m[0]);
    o->v4c = 0;
    o->v50 = 0;
    o->v54 = 0;
    o->v4c = 0;
    o->v50 = 0;
    o->v54 = 0;
    o->f14 = arg1;
    func_ov004_020c29ec(&a, func_ov004_020c6018(arg1));
    t8 = func_ov004_020c1f9c(arg2);
    t4 = func_ov004_020c1fa4(arg2);
    func_ov004_020c29f4(&d, &a, t8, t4, func_ov004_020c1fac(arg2));
    o->m[0] = d.a[0];
    o->m[1] = d.a[1];
    o->m[2] = d.a[2];
    o->m[3] = d.a[3];
    o->m[4] = d.a[4];
    o->m[5] = d.a[5];
    o->m[6] = d.a[6];
    o->m[7] = d.a[7];
    o->m[8] = d.a[8];
    o->f40  = arg4;
    if (func_ov004_020c6020(arg1) != 0) {
        p = (u8 *) func_0202f3f8(0x64);
        if (p != 0) {
            p = (u8 *) func_ov004_020bf9e0(p, func_ov004_020c6020(arg1));
        }
        o->s3c = (VA *) p;
        func_ov004_020c6030(b, arg1);
        if (func_ov004_020c6044(arg1) == 0) {
            o->s3c->f2(b[0] + func_ov004_020b8f1c(o->f40, b[1] - b[0] + 1));
        } else {
            o->s3c->f2(func_ov004_020b9160(b[0], b[1]));
        }
        o->s3c->f12(func_ov004_020c605c(arg1));
        o->s3c->f14(func_ov004_020c6064(arg1));
    } else {
        p = (u8 *) func_0202f3f8(0x64);
        if (p != 0) {
            *(void **) p        = data_ov004_020ce3b8;
            p[0xc]              = 0;
            p[0xd]              = 0;
            p[0xe]              = 0;
            p[0xf]              = 0xFF;
            *(s32 *) (p + 0x10) = 0;
            *(s32 *) (p + 0x14) = 0;
            *(s32 *) (p + 0x18) = 0;
            *(s32 *) (p + 0x10) = 0;
            *(s32 *) (p + 0x14) = 0;
            *(s32 *) (p + 0x18) = 0;
            *(s32 *) (p + 0x1c) = 0;
            *(s32 *) (p + 0x20) = 0;
            *(s32 *) (p + 0x24) = 0;
            *(s32 *) (p + 0x1c) = 0;
            *(s32 *) (p + 0x20) = 0;
            *(s32 *) (p + 0x24) = 0;
            *(s32 *) (p + 0x28) = 0;
            *(s32 *) (p + 0x2c) = 0;
            *(s32 *) (p + 0x30) = 0;
            *(s32 *) (p + 0x28) = 0;
            *(s32 *) (p + 0x2c) = 0;
            *(s32 *) (p + 0x30) = 0;
            func_ov004_020b972c(p + 0x38);
            *(s32 *) (p + 0x5c) = 0;
            *(s32 *) (p + 0x60) = 0;
            *(void **) p        = data_ov004_020ceb28;
        }
        o->s3c = (VA *) p;
    }
    if (func_ov004_020c604c(arg1) != 0) {
        p = (u8 *) func_ov004_020c604c(arg1)->f6();
    } else {
        p = (u8 *) func_0202f3f8(4);
        if (p != 0) {
            *(void **) p = data_ov004_020ce7e4;
        }
    }
    o->f44 = p;
    p      = (u8 *) func_0202f3f8(0x78);
    if (p != 0) {
        p = (u8 *) func_ov004_020c319c(p, func_ov004_020c6054(arg1), &o->m[0], arg2);
    }
    o->f48 = p;
    func_ov004_020c37e0(&c, p);
    o->v4c = c.x;
    o->v50 = c.y;
    o->v54 = c.z;
    p      = (u8 *) func_0202f3f8(8);
    if (p != 0) {
        S2 tmp;
        tmp.a     = data_ov004_020cea68;
        tmp.b     = o->s3c;
        *(S2 *) p = tmp;
    }
    o->f58 = p;
    p      = (u8 *) func_0202f3f8(8);
    if (p != 0) {
        p = (u8 *) func_ov004_020c3c90(p, func_ov004_020c6074(arg1), o->f58);
    }
    o->f5c = p;
    p      = (u8 *) func_0202f3f8(0x18);
    if (p != 0) {
        p = (u8 *) func_ov004_020c3fb4(p, func_ov004_020c607c(arg1), o->f58);
    }
    o->f60 = p;
    return o;
}
