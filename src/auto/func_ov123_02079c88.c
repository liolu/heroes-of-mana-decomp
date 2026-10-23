#include "m2c.h"
u8 *func_ov123_02079c88(void *a, u8 *base, s32 n, s32 stride, s32 (*cb)(void *, u8 *)) {
    s32 off;
    s32 i = 0;
    if (i < n) {
        off = i;
        do {
            if (cb(a, base + off) == 0) {
                return base + stride * i;
            }
            i++;
            off += stride;
        } while (i < n);
    }
    return NULL;
}
