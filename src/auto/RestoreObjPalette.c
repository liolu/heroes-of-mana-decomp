/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    s32 pad;
    s32 a;
    s32 b;
} Q;

typedef struct Obj {
    u32 f0 : 1;
    u32 r0 : 31;
    u32 w4;
    u32 l8 : 23;
    u32 k : 4;
    u32 m : 2;
    u32 b29 : 1;
    u32 h : 2;
    u32 wc;
    u32 w10;
    Q *q;
    u8 pad[0xbc - 0x18];
    s32 xbc;
    s32 xc0;
    u8 pad2[0xf0 - 0xc4];
    struct Obj *next;
    u8 pad3[0x110 - 0xf4];
} Obj;

typedef struct {
    u8 pad[0x10];
    Q *q;
    s32 pad4;
    s32 x18;
    u8 pad2[0x7c - 0x1c];
} D;

typedef struct {
    u8 pad[0x1c];
    u32 l : 12;
    u32 cnt : 8;
    u32 h : 12;
    u8 pad1[0x248 - 0x20];
    D *d248;
    Obj *o24c;
    u8 pad2[0x2f0 - 0x250];
    Obj *o2f0;
    u8 pad3[0x4dc - 0x2f4];
    s32 x4dc[3];
} G;

extern Obj data_ov003_020b08b0[];
extern Obj data_ov003_020b0cf0[];
extern G *data_ov000_02051548;
void SetTexPaletteData(s32, s32, s32, s32);
void ChgPalletToDarkByHP(void *);
Q *SearchObjPal(s32, s32);

void RestoreObjPalette(void) {
    s32 i;
    Obj *o;
    Q *pal[3];
    D *d;
    for (i = 0; i < 4; i++) {
        o = &data_ov003_020b08b0[i];
        if (o->q != 0) {
            SetTexPaletteData(o->q->a, o->xbc, o->q->b, 0);
        }
    }
    for (i = 0; i < 0x42; i++) {
        o = &data_ov003_020b0cf0[i];
        if (o->f0 && !o->b29 && o->q != 0) {
            SetTexPaletteData(o->q->a, o->xc0, o->q->b, 0);
            if ((u32) (o->k - 5) <= 1) {
                ChgPalletToDarkByHP(o);
            }
        }
    }
    o = data_ov000_02051548->o2f0;
    if (o != 0) {
        do {
            if (o->f0 && !o->b29 && o->q != 0) {
                SetTexPaletteData(o->q->a, o->xbc, o->q->b, 0);
            }
            o = o->next;
        } while (o != 0);
    }
    pal[0] = SearchObjPal(4, 2);
    pal[1] = SearchObjPal(3, 2);
    pal[2] = SearchObjPal(5, 2);
    for (i = 0; i < 3; i++) {
        if (pal[i] != 0) {
            SetTexPaletteData(pal[i]->a, data_ov000_02051548->x4dc[i], pal[i]->b, 0);
        }
    }
    d = data_ov000_02051548->d248;
    if (d != 0) {
        i = 0;
        if (data_ov000_02051548->cnt != 0) {
            for (; i < data_ov000_02051548->cnt; i++) {
                if (d->q != 0) {
                    SetTexPaletteData(d->q->a, d->x18, d->q->b, 0);
                }
                d++;
            }
        }
    }
    o = data_ov000_02051548->o24c;
    if (o != 0 && o->q != 0) {
        SetTexPaletteData(o->q->a, o->xbc, o->q->b, 0);
    }
}
