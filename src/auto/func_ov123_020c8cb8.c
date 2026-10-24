/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct {
    u32 w0;
    u16 h;
    u16 z;
} Ent;
typedef struct {
    u32 x;
    u32 y;
    Ent *ents;
    u8 n;
} Tbl;
void func_ov123_020c8cb8(Tbl *t, s32 idx, u32 v) {
    Ent *e = t->ents;
    s32 i;
    if (idx >= 0) {
        e[idx].h = (e[idx].h & ~0xc00) | (v << 10);
        return;
    }
    for (i = 0; i < t->n; i++) {
        {
            u32 w = e[i].h;
            w &= ~0xc00;
            w |= v << 10;
            e[i].h = w;
        }
    }
}
