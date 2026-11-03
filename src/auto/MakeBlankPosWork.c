/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct QE {
    u16 x;
    u16 y;
    u32 id;
} QE;

typedef struct GG {
    u8 pad[0x2e0];
    u8 *tab;
} GG;

typedef struct PI {
    u8 pad[8];
    u32 pad8 : 23;
    u32 b23 : 1;
    u32 rest : 8;
} PI;

typedef struct Obj {
    u32 f0 : 1;
    u32 rest0 : 31;
    u8 pad4[4];
    u32 w8a : 29;
    u32 b29 : 1;
    u32 w8rest : 2;
    u8 pad0c[0xe8 - 0xc];
    PI *pi;
} Obj;

typedef struct OB {
    u8 pad0[0x60];
    s8 a;
    s8 b;
    u8 pad62[4];
    s8 c;
    s8 d;
    u8 pad68[0x110 - 0x68];
} OB;

extern void *func_0200ed38(s32, s32, s32);
extern void MIi_CpuClear16(s32, void *, s32);
extern void MIi_CpuCopy16(void *, void *, s32);
extern void OS_FreeToHeap(s32, s32, void *);
extern s32 SetNowDownId_a(s32, s32, s32);
extern s32 SetNowDownId_i(s32, s32, s32);

extern GG *data_ov000_02051548;
extern OB data_ov003_020b0cf0[];

s32 *MakeBlankPosWork(s32 x, s32 y) {
    s32 *g;
    QE *q;
    s32 px;
    s32 py;
    s32 dx;
    s32 dy;
    s32 n;
    u32 m;
    s32 idx;
    OB *o;
    s32 i;
    u8 *base;

    g = func_0200ed38(0, -1, 0x1e4);
    MIi_CpuClear16(0, g, 0x1e4);
    q = func_0200ed38(0, -1, 0x3c8);
    MIi_CpuClear16(0, q, 0x3c8);
    q->x  = x;
    q->y  = y;
    q->id = SetNowDownId_i(x, y, SetNowDownId_a(x, y, -1));
    if (q->id == 0) {
        q->id = 0xfffffe;
    }
    n = 1;
    do {
        px  = q->x;
        dx  = px - x + 5;
        py  = q->y;
        dy  = py - y + 5;
        m   = q->id & ~1;
        idx = dy * 11 + dx;
        if (g[idx + 1] == 0 && px + 1 < 0x28 && dx + 1 < 0xb) {
            base = data_ov000_02051548->tab;
            if (m & *(u32 *) (base + ((u16 *) base)[py * 0x28 + px + 1])) {
                g[idx + 1] = 1;
                q[n].x     = px + 1;
                q[n].y     = py;
                q[n].id    = SetNowDownId_i(px + 1, py, SetNowDownId_a(px + 1, py, q->id));
                n++;
            }
        }
        if (g[idx - 1] == 0 && px - 1 >= 0 && dx - 1 >= 0) {
            base = data_ov000_02051548->tab;
            if (m & *(u32 *) (base + ((u16 *) base)[py * 0x28 + px - 1])) {
                g[idx - 1] = 1;
                q[n].x     = px - 1;
                q[n].y     = py;
                q[n].id    = SetNowDownId_i(px - 1, py, SetNowDownId_a(px - 1, py, q->id));
                n++;
            }
        }
        if (g[(dy + 1) * 11 + dx] == 0 && py + 1 < 0x28 && dy + 1 < 0xb) {
            base = data_ov000_02051548->tab;
            if (m & *(u32 *) (base + ((u16 *) base)[(py + 1) * 0x28 + px])) {
                g[(dy + 1) * 11 + dx] = 1;
                q[n].x                = px;
                q[n].y                = py + 1;
                q[n].id               = SetNowDownId_i(px, py + 1, SetNowDownId_a(px, py + 1, q->id));
                n++;
            }
        }
        if (g[(dy - 1) * 11 + dx] == 0 && py - 1 >= 0 && dy - 1 >= 0) {
            base = data_ov000_02051548->tab;
            if (m & *(u32 *) (base + ((u16 *) base)[(py - 1) * 0x28 + px])) {
                g[(dy - 1) * 11 + dx] = 1;
                q[n].x                = px;
                q[n].y                = py - 1;
                q[n].id               = SetNowDownId_i(px, py - 1, SetNowDownId_a(px, py - 1, q->id));
                n++;
            }
        }
        if (n - 1 != 0) {
            MIi_CpuCopy16(q + 1, q, (n - 1) * 8);
        }
        n--;
        if (!((((m != 0xffffff) & ~1) == 0) && px == x && py == y)) {
            g[idx] = 2;
        }
    } while (n != 0);
    for (i = 0, o = data_ov003_020b0cf0; i < 0x42; i++, o++) {
        Obj *ob = (Obj *) o;
        if (ob->f0 != 0 && ob->pi != 0 && ob->pi->b23 == 0 && ob->b29 == 0) {
            if (o->a >= x - 5 && o->b >= y - 5 && o->a <= x + 5 && o->b <= y + 5) {
                g[(o->a - (x - 5)) + (o->b - (y - 5)) * 11] = 0;
            }
            if (o->c >= x - 5 && o->d >= y - 5 && o->c <= x + 5 && o->d <= y + 5) {
                g[(o->c - (x - 5)) + (o->d - (y - 5)) * 11] = 0;
            }
        }
    }
    if (q != 0) {
        OS_FreeToHeap(0, -1, q);
    }
    return g;
}
