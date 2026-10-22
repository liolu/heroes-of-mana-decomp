#include "m2c.h"
typedef struct E {
    s32 a;
    s32 b;
    s32 c;
} E;
typedef struct V {
    u8 pad[0xC];
    s32 cap;
    s32 size;
    E *data;
} V;
E *func_0202f470(s32);
void func_0202f49c(E *);
void func_ov004_020ba184(V *v, s32 arg1, s32 arg2, s32 arg3) {
    s32 idx;
    E *e;
    E *nd;
    E *src;
    E *dst;
    s32 n;
    s32 need = v->size + 1;
    s32 cap  = v->cap;
    s32 i;
    if (cap < need) {
        cap = cap + (cap >> 1);
        if (cap <= need) {
            cap = need;
        }
        nd  = func_0202f470(cap * 0xC);
        n   = v->size;
        dst = nd;
        src = v->data;
        i   = 0;
        if (n > 0) {
            do {
                E *s   = src;
                E *d   = dst;
                dst->a = src->a;
                src++;
                dst++;
                i++;
                d->b = s->b;
                d->c = s->c;
            } while (i < n);
        }
        func_0202f49c(v->data);
        v->cap  = cap;
        v->data = nd;
    }
    idx     = v->size;
    v->size = idx + 1;
    e       = (E *) ((u8 *) v->data + idx * 0xC);
    e->a    = arg1;
    e->b    = arg2;
    e->c    = arg3;
}
