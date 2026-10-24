#include "m2c.h"
typedef struct {
    u32 p : 2;
    u32 c : 10;
    u32 b : 10;
    u32 a : 10;
    u32 w4;
    u32 w8;
    u32 v2 : 14;
    u32 v1 : 14;
    u32 pad : 3;
    u32 flag : 1;
    u32 x1 : 14;
    u32 x2 : 8;
    u32 rest : 10;
} Src;
typedef struct {
    u8 pad[0x2c];
    Src *tab;
} Tab;
typedef struct {
    u8 pad[8];
    s32 f8;
    s32 fc;
    s32 f10;
    s32 f14;
    s32 f18;
    s32 f1c;
    s32 f20;
    s32 f24;
    s32 f28;
    s32 f2c;
} Dst;
extern Tab *data_0203673c;
extern s32 func_ov122_020518f4(u16);

void func_ov123_020d0e78(Dst *d, s32 idx) {
    Src *s;
    if (idx == 0x7f) {
        return;
    }
    s = &data_0203673c->tab[idx];
    if (s->flag == 0) {
        return;
    }
    d->f8  = 1;
    d->fc  = func_ov122_020518f4(idx - 0x32);
    d->f10 = s->w4;
    d->f14 = s->a;
    d->f18 = s->b;
    d->f1c = s->v1;
    d->f20 = s->v2;
    d->f24 = s->c;
    d->f28 = s->x1;
    d->f2c = s->x2;
}
