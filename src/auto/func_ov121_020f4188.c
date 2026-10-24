#include "m2c.h"

typedef struct {
    u32 w0_0 : 1;
    u32 idx : 6;
    u32 w0_r : 25;
    u32 x0 : 12;
    u32 x1 : 12;
    u32 x2 : 5;
    u32 type : 3;
    u32 y0 : 4;
    u32 y1 : 6;
    u32 y2 : 12;
    u32 w8_r : 10;
    u32 pad;
} Src;

typedef struct {
    u32 k : 1;
    u32 l : 1;
    u32 i : 8;
    u32 j : 4;
    u32 g : 4;
    u32 m : 4;
    u32 h : 4;
    u32 e : 6;
} W58;

typedef struct {
    u8 p0;
    s8 b1;
    u8 p1[0x16];
    s16 h18;
    u8 p2[0x36];
    u32 a : 16;
    u32 b : 16;
    u32 c : 16;
    u32 d : 16;
    W58 w58;
} Dst;

void MIi_CpuCopy16(void *, void *, s32);
Dst *func_ov121_020f40b4(u32);
Dst *func_ov121_020f40f8(u16);
typedef struct {
    u8 pad[0x2B8];
    u32 f;
} G;
extern G data_ov121_020f5d60;

s32 func_ov121_020f4188(Src *arg0) {
    Dst *d;
    u32 t;

    t = arg0->type;
    if (t == 0) {
        d = func_ov121_020f40b4(t);
        if (d != NULL) {
            MIi_CpuCopy16((u8 *) arg0 + 0xC, (u8 *) d + 4, 0x14);
            d->h18   = arg0->y0;
            d->b1    = arg0->y1;
            d->a     = (arg0->x0 + arg0->y2) + arg0->x1;
            d->b     = arg0->x0;
            d->c     = arg0->y2;
            d->w58.e = arg0->x2;
            d->d     = arg0->idx;
            d->w58.g = arg0->x2;
            d->w58.h = 0;
            d->w58.i = 0;
            d->w58.j = 0;
            d->w58.k = 1;
        }
    } else {
        d = func_ov121_020f40f8(arg0->idx);
        if (d != NULL) {
            d->w58.k = 0;
        }
    }
    data_ov121_020f5d60.f |= 4;
    return 0;
}
