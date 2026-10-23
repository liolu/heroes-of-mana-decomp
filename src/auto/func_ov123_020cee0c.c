#include "m2c.h"
typedef struct {
    s32 cap;
    s32 size;
    u8 *data;
} V;
extern u8 data_ov123_020de864;
u8 *func_0202f470(s32);
void func_0202f49c(u8 *);
void func_ov123_020cee0c(V **pv, s32 n) {
    u8 *nd;
    s32 i;
    V *v;
    s32 ncap;
    u8 *dst;
    u8 *src;
    s32 sz;
    s32 j;
    for (i = 0; i < n; i++) {
        v = *pv;
        if (v->cap < v->size + 1) {
            ncap = v->cap + (v->cap >> 1);
            if (ncap <= v->size + 1) {
                ncap = v->size + 1;
            }
            nd  = func_0202f470(ncap);
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
        v->data[v->size++] = data_ov123_020de864;
    }
}
