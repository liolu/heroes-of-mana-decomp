#include "m2c.h"
typedef struct {
    s32 p0;
    u8 *a;
    s32 c;
    u8 *cur;
    s32 idx;
    u8 *p14;
} S;
extern u8 *func_ov004_020bf6c0(u8 *, u8 *);
void func_ov004_020bf1f0(S *s) {
    s32 i;
    s->c++;
    i      = s->idx + 1;
    s->idx = i;
    if (i < *(s32 *) (s->cur + 4)) {
        return;
    }
    {
        u8 *p = func_ov004_020bf6c0(s->a, s->cur);
        if (p != 0) {
            s->cur = p;
        }
    }
    s->idx = 0;
    s->p14 = func_ov004_020bf6c0(s->a, s->cur);
    if (s->p14 == 0) {
        s->p14 = s->cur;
    }
}
