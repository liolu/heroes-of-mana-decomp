#include "m2c.h"

typedef struct R {
    u32 a : 3;
    u32 t : 3;
    u32 v : 12;
    u32 b : 14;
    u32 pad;
} R;
typedef struct G {
    u8 pad[0xc];
    u8 *tab;
} G;
extern G *data_0203673c;

s32 func_ov112_020e7168(u32 *a, u32 *b) {
    s32 va, vb;
    R *t;
    u8 *tab;
    a = (u32 *) (*a >> 16);
    if (a == 0) {
        if ((*b >> 16) == 0) {
            return 0;
        }
    }
    if (a == 0) {
        return 1;
    }
    b = (u32 *) (*b >> 16);
    if (b == 0) {
        return -1;
    }
    tab = data_0203673c->tab;
    t   = (R *) (tab + 8);
    va  = (t[(u32) a].t == 4) ? t[(u32) a].v : 0;
    t   = (R *) (tab + 8);
    vb  = (t[(u32) b].t == 4) ? t[(u32) b].v : 0;
    if (va == vb) {
        return (u32) a - (u32) b;
    }
    return vb - va;
}
