#include "m2c.h"
typedef struct {
    s32 cap;
    s32 size;
    u8 *data;
} V;
extern u8 *func_0202f470(s32);
extern void func_0202f49c(u8 *);
void func_ov123_020cea30(V **arg0, s32 arg1) {
    s32 need;
    u8 lo;
    u8 *dst;
    u8 hi;
    u8 *src;
    u8 *nd;
    V *a;
    s32 n;
    V *b;
    s32 ncap;
    s32 i;
    s32 need2;
    s32 ncap2;
    s32 n2;
    s32 i2;
    u8 *nd2;
    u8 *dst2;
    u8 *src2;
    lo   = arg1;
    a    = *arg0;
    need = a->size + 1;
    if (a->cap < need) {
        ncap = a->cap + (a->cap >> 1);
        if (ncap <= need) {
            ncap = need;
        }
        nd  = func_0202f470(ncap);
        dst = nd;
        n   = a->size;
        src = a->data;
        for (i = 0; i < n; i++) {
            *dst++ = *src++;
        }
        func_0202f49c(a->data);
        a->cap  = ncap;
        a->data = nd;
    }
    n          = a->size;
    a->size    = n + 1;
    a->data[n] = lo;
    hi         = arg1 >> 8;
    b          = *arg0;
    need2      = b->size + 1;
    if (b->cap < need2) {
        ncap2 = b->cap + (b->cap >> 1);
        if (ncap2 <= need2) {
            ncap2 = need2;
        }
        nd2  = func_0202f470(ncap2);
        dst2 = nd2;
        n2   = b->size;
        src2 = b->data;
        for (i2 = 0; i2 < n2; i2++) {
            *dst2++ = *src2++;
        }
        func_0202f49c(b->data);
        b->cap  = ncap2;
        b->data = nd2;
    }
    n2          = b->size;
    b->size     = n2 + 1;
    b->data[n2] = hi;
}
