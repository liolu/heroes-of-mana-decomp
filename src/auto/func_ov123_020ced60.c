#include "m2c.h"

typedef struct {
    s32 cap;
    s32 len;
    u8 *data;
} Buf;

u8 *func_0202f470(s32);
void func_0202f49c(u8 *);

void func_ov123_020ced60(Buf **arg0, u8 *src, s32 n) {
    s32 i;
    Buf *b;
    u8 *nd;
    s32 ncap;
    s32 len;
    u8 *sp;
    u8 *dp;
    s32 k;
    for (i = 0; i < n; i++) {
        b = *arg0;
        if (b->cap < b->len + 1) {
            ncap = b->cap + (b->cap >> 1);
            if (ncap <= b->len + 1) {
                ncap = b->len + 1;
            }
            nd  = func_0202f470(ncap);
            len = b->len;
            dp  = nd;
            sp  = b->data;
            for (k = 0; k < len; k++) {
                *dp++ = *sp++;
            }
            func_0202f49c(b->data);
            b->cap  = ncap;
            b->data = nd;
        }
        b->data[b->len++] = src[i];
    }
}
