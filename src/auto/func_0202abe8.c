#include "m2c.h"

typedef struct N {
    u8 pad[2];
    s16 e;
    u8 len;
    u8 d[1];
} N;

s32 func_0202abe8(N *a, N *b) {
    s32 i;
    s32 m;
    s32 lb;
    s32 la;
    if (a->d[0] == 0) {
        if (b->d[0] != 0) {
            return 1;
        }
        return 0;
    }
    if (b->d[0] == 0) {
        return 0;
    }
    if (a->e == b->e) {
        la = a->len;
        lb = b->len;
        i  = 0;
        m  = la;
        if ((s32) la > (s32) lb) {
            m = lb;
        }
        if (m > 0) {
            do {
                if (a->d[i] < b->d[i]) {
                    return 1;
                }
                if (b->d[i] < a->d[i]) {
                    return 0;
                }
                i++;
            } while (i < m);
        }
        if (m == la && i < lb) {
            do {
                if (b->d[i] != 0) {
                    return 1;
                }
                i++;
            } while (i < *(volatile u8 *) &b->len);
        }
        return 0;
    }
    if (a->e < b->e) {
        return 1;
    }
    return 0;
}
