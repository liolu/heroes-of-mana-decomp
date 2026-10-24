/* compiler: 1.2/sp3 -profile */
#include "m2c.h"
typedef struct {
    u8 p[0x60];
    s8 x;
    s8 y;
} U;

s32 GetType_around(U *a, U *b, s32 r, s32 dir) {
    s32 d;
    s32 e;
    s32 n;
    s32 n2;
    s32 d2;
    switch (dir) {
        case 0:
            d = b->y - a->y;
            if (d >= 0 && d <= r) {
                e = b->x - a->x;
                if (e < 0) {
                    e = -e;
                }
                if (d < 0) {
                    d = -d;
                }
                if (d >= e) {
                    goto yes;
                }
            }
            return 0;
        case 4:
            d = b->y - a->y;
            n = -d;
            if (n >= 0 && n <= r) {
                e = b->x - a->x;
                if (e < 0) {
                    e = -e;
                }
                if (d >= 0) {
                    n = d;
                }
                if (n >= e) {
                    goto yes;
                }
            }
            return 0;
        case 6:
            d = b->x - a->x;
            if (d >= 0 && d <= r) {
                e = b->y - a->y;
                if (e < 0) {
                    e = -e;
                }
                if (d < 0) {
                    d = -d;
                }
                if (d >= e) {
                    goto yes;
                }
            }
            return 0;
        case 2:
            d2 = b->x - a->x;
            n2 = -d2;
            if (n2 >= 0 && n2 <= r) {
                e = b->y - a->y;
                if (e < 0) {
                    e = -e;
                }
                if (d2 >= 0) {
                    n2 = d2;
                }
                if (n2 >= e) {
                    goto yes;
                }
            }
            return 0;
        default:
            return 0;
    }
yes:
    return 1;
}
