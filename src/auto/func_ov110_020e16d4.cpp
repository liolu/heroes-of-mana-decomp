/* compiler: 1.2/sp3 */
#include "m2c.h"

struct A {
    virtual void f0();
    virtual void f1();
    s32 f4;
    s32 f8;
};

extern "C" {
extern s32 data_ov110_020e3c68[];
extern s32 data_ov110_020e3c8c[];
void *func_ov110_020e27e0(s32);
s32 func_ov110_020e2798(A *, s32);
void *func_ov110_020e227c(s32);
void *func_ov110_020e2240(void *);
s32 func_ov110_020e17fc(void *, A *, s32, s32);
void func_ov110_020e222c(void *);
void func_ov110_020e2270(void *);
void *func_ov110_020e16d4(s32 a0, s32 a1, s32 a2);
}

void *func_ov110_020e16d4(s32 a0, s32 a1, s32 a2) {
    A *p = (A *) func_ov110_020e27e0(0x14);
    void *q;
    if (p != 0) {
        *(s32 **) p = data_ov110_020e3c68;
        p->f4       = 0;
        p->f8       = 0;
        *(s32 **) p = data_ov110_020e3c8c;
    }
    if (p == 0) {
        return 0;
    }
    if (func_ov110_020e2798(p, a0) == 0) {
        if (p != 0) {
            p->f1();
        }
        return 0;
    }
    q = func_ov110_020e227c(0x130);
    if (q != 0) {
        q = func_ov110_020e2240(q);
    }
    if (func_ov110_020e17fc(q, p, a1, a2 != 0) == 0) {
        if (q != 0) {
            func_ov110_020e222c(q);
            func_ov110_020e2270(q);
        }
        return 0;
    }
    return q;
}
