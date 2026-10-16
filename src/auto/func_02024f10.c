#include "m2c.h"
u8 *func_02024f10(u8 *s, u8 *t) {
    u8 c, d, e;
    u8 *p, *q, *r;
    if (t == NULL || (c = *t) == 0) {
        return s;
    }
    d = *s;
    p = s + 1;
    while (d != 0) {
        if (d == c) {
            q = t + 1;
            r = p;
            do {
                e = *q++;
                d = *r++;
                if (d != e) {
                    break;
                }
            } while (d != 0);
            if (e == 0) {
                return p - 1;
            }
        }
        d = *p++;
    }
    return NULL;
}
