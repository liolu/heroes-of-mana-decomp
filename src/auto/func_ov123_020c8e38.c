/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct {
    u32 w;
    u16 h;
    u16 pad;
} Ent;
typedef struct {
    u8 pad[8];
    Ent *ent;
    u8 cnt;
} Tbl;

static inline void SetEnt(Ent *p, u32 b, u32 e) {
    p->w = (p->w & ~0xc00) | (b << 10);
    p->h = (p->h & ~0xf000) | (e << 12);
}

void func_ov123_020c8e38(Tbl *t, s32 idx, u32 b, u32 e) {
    Ent *p = t->ent;
    s32 i;
    if (idx >= 0) {
        SetEnt(&p[idx], b, e);
        return;
    }
    for (i = 0; i < t->cnt; i++) {
        SetEnt(&p[i], b, e);
    }
}
