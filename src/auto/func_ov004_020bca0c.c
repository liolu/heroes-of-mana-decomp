#include "m2c.h"

typedef struct {
    s32 v;
} W;

typedef struct {
    s32 (**vt)(void *);
} VO;

typedef struct {
    u8 p0[4];
    void *a;
    s32 cnt;
    VO *obj;
    s32 i;
    VO *obj2;
    W out;
} T;

VO *func_ov004_020bcba0(void *, VO *);
void func_ov004_020b94e0(W *, s32 *, s32);
void func_ov004_020b91ec(W *, W, W, W);

void func_ov004_020bca0c(T *t) {
    W d;
    s32 tmp;
    W r;
    W b;
    W c;
    VO *p;
    t->cnt = t->cnt + 1;
    t->i   = t->i + 1;
    if (t->i >= (*t->obj->vt[6])(t->obj)) {
        p = func_ov004_020bcba0(t->a, t->obj);
        if (p != 0) {
            t->obj = p;
        }
        t->i    = 0;
        t->obj2 = func_ov004_020bcba0(t->a, t->obj);
        if (t->obj2 == 0) {
            t->obj2 = t->obj;
        }
    }
    tmp = t->i << 16;
    func_ov004_020b94e0(&d, &tmp, (*t->obj->vt[6])(t->obj));
    (*(void (**)(W *, VO *))((u8 *) t->obj->vt + 0x1c))(&b, t->obj);
    (*(void (**)(W *, VO *))((u8 *) t->obj2->vt + 0x1c))(&c, t->obj2);
    func_ov004_020b91ec(&r, b, c, d);
    t->out = r;
}
