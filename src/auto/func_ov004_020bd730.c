#include "m2c.h"
typedef struct {
    u8 c[4];
} Col;
typedef struct {
    s32 v;
} W;
typedef struct {
    s32 p0;
    void *p4;
    s32 w8;
    void *cur;
    s32 pos;
    void *next;
    u8 r;
    u8 g;
    u8 b;
    u8 a;
} P;
extern s32 func_ov004_020bdb84(void *);
extern void *func_ov004_020bd8e8(void *, void *);
extern void func_ov004_020b94e0(W *, s32 *, s32);
extern void func_ov004_020bdb8c(Col *, void *);
extern s32 func_ov004_020b91a4(s32, s32, W);

void func_ov004_020bd730(P *p) {
    W t;
    s32 u;
    Col a0;
    Col b0;
    Col a1;
    Col b1;
    Col a2;
    Col b2;
    Col a3;
    Col b3;
    s32 r0;
    s32 r1;
    s32 r2;
    s32 r3;
    void *n;
    p->w8  = p->w8 + 1;
    p->pos = p->pos + 1;
    if (p->pos >= func_ov004_020bdb84(p->cur)) {
        n = func_ov004_020bd8e8(p->p4, p->cur);
        if (n != 0) {
            p->cur = n;
        }
        p->pos  = 0;
        p->next = func_ov004_020bd8e8(p->p4, p->cur);
        if (p->next == 0) {
            p->next = p->cur;
        }
    }
    u = p->pos << 16;
    func_ov004_020b94e0(&t, &u, func_ov004_020bdb84(p->cur));
    func_ov004_020bdb8c(&a0, p->cur);
    func_ov004_020bdb8c(&b0, p->next);
    r0 = func_ov004_020b91a4(a0.c[0], b0.c[0], t);
    func_ov004_020bdb8c(&a1, p->cur);
    func_ov004_020bdb8c(&b1, p->next);
    r1 = func_ov004_020b91a4(a1.c[1], b1.c[1], t);
    func_ov004_020bdb8c(&a2, p->cur);
    func_ov004_020bdb8c(&b2, p->next);
    r2 = func_ov004_020b91a4(a2.c[2], b2.c[2], t);
    func_ov004_020bdb8c(&a3, p->cur);
    func_ov004_020bdb8c(&b3, p->next);
    r3   = func_ov004_020b91a4(a3.c[3], b3.c[3], t);
    p->r = r0;
    p->g = r1;
    p->b = r2;
    p->a = r3;
}
