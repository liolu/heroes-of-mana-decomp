#include "m2c.h"

struct A {
    virtual void a0();
    virtual void a1();
    virtual void a2();
    virtual void a3();
    virtual void a4();
    virtual void a5();
    virtual void a6();
    virtual void a7();
    virtual void a8();
    virtual void a9();
    virtual void a10();
    virtual void a11();
    virtual void a12();
    virtual void a13();
    virtual void a14();
    virtual void a15();
    virtual void a16();
    virtual void a17();
    virtual void a18();
    virtual void a19();
    virtual void a20();
    virtual void a21();
    virtual void a22();
    virtual void a23(s32, s32, s32, s32, s32, s32);
};
struct M {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5(A *, s32);
    virtual A *m6(s32);
};
struct Src {
    virtual void s0();
    virtual void s1();
    virtual void s2();
    virtual void s3();
    virtual void s4();
    virtual void s5();
    virtual void s6();
    virtual void s7();
    virtual s32 s8();
};

extern "C" {
A *func_0202f3f8(s32);
A *func_ov004_020bb0b8(A *, u8, u8);
M *func_ov004_020bb458(void);
A *func_ov004_020c9a8c(void *unused, Src *arg1, u8 *arg2);
}

A *func_ov004_020c9a8c(void *unused, Src *arg1, u8 *arg2) {
    s32 spC;
    s32 var_r6;
    s32 var_r7;
    s32 var_r8;
    A *r;
    A *var_r9;

    spC = arg1->s8() + (*(u16 *) (arg2 + 8) << 5);
    r   = func_ov004_020bb458()->m6(spC);
    if (r != 0) {
        return r;
    }
    var_r9 = func_0202f3f8(0x40);
    if (var_r9 != 0) {
        var_r9 = func_ov004_020bb0b8(var_r9, arg2[5], arg2[6]);
    }
    var_r6 = arg1->s8() + (*(u16 *) (arg2 + 8) << 5);
    var_r7 = 0;
    if ((s32) arg2[6] > 0) {
        do {
            var_r8 = 0;
            if ((s32) arg2[5] > 0) {
                do {
                    var_r9->a23(var_r8, var_r7, 8, 8, var_r6, 4);
                    var_r8 += 8;
                    var_r6 += 0x20;
                } while (var_r8 < (s32) arg2[5]);
            }
            var_r7 += 8;
        } while (var_r7 < (s32) arg2[6]);
    }
    func_ov004_020bb458()->m5(var_r9, spC);
    return var_r9;
}
