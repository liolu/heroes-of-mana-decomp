#include "m2c.h"

typedef struct N {
    s8 f0;
    s8 pad1;
    s8 f2;
    s8 f3;
    s8 f4;
    s8 f5;
    s8 f6;
    u8 pad[0x28 - 7];
} N;

typedef struct P {
    s32 a;
    s32 b;
} P;

typedef struct A {
    u8 pad[0x30];
    P *f30;
    u8 pad2[0xc];
    N *f40;
    u8 pad3[4];
    s32 *f48;
} A;

s32 func_ov111_020e22f4(A *, s32, s32, s32);
void func_01ff82ec(s32, s32, s32);
void MI_WaitDma(s32);

void func_ov111_020e2418(A *a, s32 idx, s32 arg2) {
    s32 i;
    N *n = &a->f40[idx];
    s32 j;
    s32 k;
    P *e;
    P *t;
    if (n->f5 > 0 && n->f4 == 1) {
        j = n->f6;
        i = 0;
        k = j + 1;
        if (n->f5 > 0) {
            do {
                if (func_ov111_020e22f4(a, a->f48[j], arg2, n->f0) == 1) {
                    func_01ff82ec(3, a->f30[a->f48[k]].a, a->f30[a->f48[k]].b);
                    MI_WaitDma(3);
                }
                i++;
                j += 2;
                k += 2;
            } while (i < n->f5);
        }
    }
    if (n->f2 != -1) {
        func_ov111_020e2418(a, n->f2, arg2);
    }
    if (n->f3 == -1) {
        return;
    }
    func_ov111_020e2418(a, n->f3, arg2);
}
