/* compiler: 2.0/sp1p5 -profile */
/* near start: 2 diffs with profile "2.0/sp1p5 -profile" */
#include "m2c.h"

typedef struct {
    u32 kind : 2;
    u32 timer : 16;
    u32 rest : 14;
    s16 x;
    s16 y;
    u16 w8;
    u16 pad;
} Cur;

typedef struct {
    u8 pad[0x434];
    Cur c;
} EV;

typedef struct {
    u8 pad0[0x24];
    u32 pad24a : 8;
    u32 off : 1;
    u32 pad24b : 23;
} G;

extern s32 PutOneGridPol(s32, s32, s32, s32, s32);
extern void setMaskShadow(void);
extern void putBoxShadowAddSub(void *);
extern void setShadowPol(s32, u16);
extern G *data_ov000_02051548;
extern u8 *data_ov000_0205154c;
extern u8 data_ov003_020a9b54[];

void PutNowCurSorIn3D(void) {
    s32 i;
    s32 o;
    s32 left;
    EV *c;
    Cur *d;
    s32 xv;
    s32 yv;
    volatile u32 *r = (volatile u32 *) 0x4000444;

    if (data_ov000_02051548->off != 0) {
        return;
    }
    i = 0;
    o = 0;
    do {
        c = (EV *) ((u8 *) data_ov000_02051548 + o);
        if (c->c.kind == 2) {
            PutOneGridPol(c->c.x, c->c.y, 0x3E0, 2, 0x0FFFFFFF);
        } else if (c->c.kind != 0) {
            r[0] = 0;
            c    = (EV *) ((u8 *) data_ov000_02051548 + o);
            yv   = (c->c.y - 0x14) << 14;
            xv   = c->c.x - 0x14;
            xv <<= 14;
            r[0xB] = xv;
            r[0xB] = 0;
            r[0xB] = yv;
            r[0xA] = 0x28000;
            r[0xA] = 0x190000;
            r[0xA] = 0x28000;
            setMaskShadow();
            putBoxShadowAddSub(data_ov003_020a9b54);
            setShadowPol(1, ((EV *) ((u8 *) data_ov000_02051548 + o))->c.w8);
            putBoxShadowAddSub(data_ov003_020a9b54);
            r[1] = 1;
            d    = (Cur *) ((u8 *) data_ov000_02051548 + 0x434 + o);
            if (d->timer != 0) {
                left = d->timer - *(s32 *) (data_ov000_0205154c + 0xAF4);
                if (left <= 0) {
                    d->timer = 0;
                    d        = (Cur *) ((u8 *) data_ov000_02051548 + 0x434 + o);
                    d->kind  = 0;
                } else {
                    d->timer = left;
                }
            }
        }
        o += 12;
        i++;
    } while (i < 3);
}
