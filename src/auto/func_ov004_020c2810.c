#include "m2c.h"
typedef struct {
    s32 pad;
    s32 cap;
    s32 size;
    s32 *data;
} V;
s32 func_ov004_020b9cf4(s32);
void func_ov004_020b9d44(s32, s32);
s32 null(s32);
s32 *func_0202f470(s32);
void func_0202f49c(s32 *);
void func_ov004_020c2810(V *v, s32 arg) {
    s32 n;
    s32 i;
    s32 val;
    s32 *nd;
    s32 ncap;
    s32 *dst;
    s32 *src;
    s32 sz;
    s32 j;
    n = func_ov004_020b9cf4(arg);
    func_ov004_020b9d44(arg, 2);
    for (i = 0; i < n; i++) {
        val = null(arg);
        if (v->cap < v->size + 1) {
            ncap = v->cap + (v->cap >> 1);
            if (ncap <= v->size + 1) {
                ncap = v->size + 1;
            }
            nd  = func_0202f470(ncap << 2);
            sz  = v->size;
            dst = nd;
            src = v->data;
            for (j = 0; j < sz; j++) {
                *dst++ = *src++;
            }
            func_0202f49c(v->data);
            v->cap  = ncap;
            v->data = nd;
        }
        v->data[v->size++] = val;
    }
}
