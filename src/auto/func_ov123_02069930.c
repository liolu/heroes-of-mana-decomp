/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct KV {
    u16 k;
    u16 v;
} KV;
typedef struct T {
    u16 base;
    u16 pad;
    u16 mode;
    u16 pad2[3];
    u16 cnt;
    u16 first[1];
} T;

u16 func_ov123_02069930(T *t, u32 key) {
    u16 r = 0xFFFF;
    switch (t->mode) {
        case 0:
            r = t->cnt + (key - t->base);
            break;
        case 1:
            r = (&t->cnt)[key - t->base];
            break;
        case 2: {
            u8 *b = (u8 *) t + 0xC;
            KV *lo;
            KV *hi;
            b += 2;
            lo = (KV *) b;
            hi = lo + (t->cnt - 1);
            while (lo <= hi) {
                KV *mid = lo + (hi - lo) / 2;
                if (mid->k < key) {
                    lo = mid + 1;
                } else if (key < mid->k) {
                    hi = mid - 1;
                } else {
                    r = mid->v;
                    break;
                }
            }
            break;
        }
    }
    return r;
}
