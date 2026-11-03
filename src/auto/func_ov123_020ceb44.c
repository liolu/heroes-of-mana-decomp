#include "m2c.h"

typedef struct {
    s32 cap;
    s32 size;
    u8 *data;
} Vec;
u8 *func_0202f470(s32);
void func_0202f49c(u8 *);

static inline void push(Vec *v, u8 b) {
    s32 n = v->size + 1;
    if (v->cap < n) {
        u8 *nd;
        s32 nc = v->cap + (v->cap >> 1);
        u8 *dst;
        u8 *src;
        s32 i;
        s32 sz;
        if (nc <= n) {
            nc = n;
        }
        nd  = func_0202f470(nc);
        dst = nd;
        sz  = v->size;
        src = v->data;
        for (i = 0; i < sz; i++) {
            *dst++ = *src++;
        }
        func_0202f49c(v->data);
        v->cap  = nc;
        v->data = nd;
    }
    v->data[v->size++] = b;
}

void func_ov123_020ceb44(Vec **p, s32 x) {
    u8 b0 = x;
    u8 b1;
    u8 b2;
    u8 b3;
    push(*p, b0);
    b1 = x >> 8;
    push(*p, b1);
    b2 = x >> 16;
    push(*p, b2);
    b3 = x >> 24;
    push(*p, b3);
}
