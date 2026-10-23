/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u8 x;
    u8 y;
    u8 one;
    u8 len;
    u16 b : 12;
    u16 a : 4;
    u16 pad;
    u32 w;
} Out;

typedef struct {
    u8 pad0[0x2d8];
    u32 *grid;
    u16 cnt;
    u8 pad1[2];
    u8 *base;
} G;

extern G *data_ov000_02051548;
u32 SetNowDownId_a(s32, s32, u32);
u32 SetNowDownId_i(s32, s32, u32);

Out *CheckOneTATEline(u16 a0, Out *out, s32 x, s32 y0, s32 n, u16 b, u32 mask) {
    s32 i, y, ofs;
    u32 v, t5;
    G *g;

    for (i = 0; i < n; i++) {
        y   = y0 + i;
        ofs = y * 0x28;
        g   = data_ov000_02051548;
        if (mask & g->grid[x + ofs]) {
            continue;
        }
        t5 = *(u32 *) (g->base + ((u16 *) g->base)[x + ofs]);
        if (!(mask & t5) || (t5 & 1)) {
            continue;
        }
        v = SetNowDownId_i(x, y, SetNowDownId_a(x, y, mask)) & ~1;
        if (v & data_ov000_02051548->grid[x + ofs]) {
            continue;
        }
        out->x = x;
        out->y = y;
        out->w = SetNowDownId_i(x, y, SetNowDownId_a(x, y, mask)) & ~1;
        g      = data_ov000_02051548;
        t5     = *(u32 *) (g->base + ((u16 *) g->base)[x + ofs]);
        for (; i < n; i++) {
            if (mask & g->grid[x + (y0 + i) * 0x28]) {
                break;
            }
            if (t5 != *(u32 *) (g->base + ((u16 *) g->base)[x + (y0 + i) * 0x28])) {
                break;
            }
        }
        out->one = 1;
        out->len = y0 + i - out->y;
        out->a   = a0;
        out->b   = b;
        out++;
        data_ov000_02051548->cnt++;
    }
    return out;
}
