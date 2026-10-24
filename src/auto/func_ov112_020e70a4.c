#include "m2c.h"
typedef struct {
    u32 a : 3;
    u32 t1 : 3;
    u32 v1 : 12;
    u32 t2 : 3;
    u32 v2 : 11;
    u32 w1;
} Ent;
typedef struct {
    u8 pad[0xc];
    Ent *tab;
} Tbl;
typedef struct {
    Tbl *t;
} Hold;
extern Tbl *data_0203673c;

s32 func_ov112_020e70a4(u32 *p, u32 *q) {
    s32 ka;
    s32 kb;
    u32 a;
    u32 b;
    Ent *e1;
    Ent *e2;
    a = *p >> 16;
    if (a == 0) {
        if ((*q >> 16) == 0) {
            return 0;
        }
    }
    if (a == 0) {
        return 1;
    }
    b = *q >> 16;
    if (b == 0) {
        return -1;
    }
    kb = 0;
    ka = kb;
    e1 = data_0203673c->tab + 1;
    if (e1[a].t1 == 3) {
        ka += e1[a].v1;
    }
    e2 = data_0203673c->tab + 1;
    if (e2[b].t1 == 3) {
        kb += e2[b].v1;
    }
    if (e1[a].t2 == 3) {
        ka = ka - e1[a].v2;
    }
    if (e2[b].t2 == 3) {
        kb = kb - e2[b].v2;
    }
    if (ka == kb) {
        return a - b;
    }
    return kb - ka;
}
