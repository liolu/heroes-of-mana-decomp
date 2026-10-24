#include "m2c.h"

typedef struct Ent {
    s16 x;
    s16 y;
    u16 tn : 10;
    u16 tr : 6;
    u16 w : 3;
    u16 wr : 13;
} Ent;

typedef struct Res {
    s32 n;
    u8 *data;
    u16 cnt;
    Ent ent[128];
} Res;

typedef struct Glob {
    s32 a;
    s32 b;
} Glob;

extern Glob data_ov122_02065604;
u16 *func_0200a7b8(void);
u8 *func_0200aa50(void);
u16 *func_0200a7ec(void);
u8 *func_0200aa84(void);
u16 *G2_GetBG2ScrPtr(void);
u8 *G2_GetBG2CharPtr(void);
u16 *G2S_GetBG2ScrPtr(void);
u8 *G2S_GetBG2CharPtr(void);
void func_ov122_02053c0c(u8 *, u8 *, s32, Res *);
u8 *GetFilePosForSkana(s32, s32, s32 *);
u8 *ReadOneString(u8 *, s32, s32 *);
void func_ov122_02053b24(s32, s32, s32, s32, s32, s32);
void MIi_CpuCopy16(u8 *, u8 *, s32);
void OS_FreeToHeap(s32, s32, u8 *);

s32 func_ov122_02053f44(s32 a, s32 b, s32 c, s32 d, s32 mode, s32 flags, s32 e, s32 g, s32 h) {
    s32 i;
    Res res;
    s32 base;
    s32 len;
    u16 *dst;
    u8 *chr;
    s32 k;
    u16 *scr;
    s32 attr;
    s32 side;
    s32 sp8;
    s32 j;
    s32 ti;
    u8 *str;
    u8 *p;

    if (!(flags & 2)) {
        side = flags & 1;
        if (side == 0) {
            scr = func_0200a7b8();
            chr = func_0200aa50();
        } else {
            scr = func_0200a7ec();
            chr = func_0200aa84();
        }
    } else {
        side = flags & 1;
        if (side == 0) {
            scr = G2_GetBG2ScrPtr();
            chr = G2_GetBG2CharPtr();
        } else {
            scr = G2S_GetBG2ScrPtr();
            chr = G2S_GetBG2CharPtr();
        }
        if (flags & 4) {
            scr += 0x400;
        }
    }
    if (flags & 8) {
        scr = (u16 *) 0x6810000;
        chr = (u8 *) scr - 0x8000;
    }
    if (flags & 0x10) {
        scr = (u16 *) 0x6810000;
        chr = (u8 *) scr + 0x8000;
    }
    p = ReadOneString(GetFilePosForSkana(a, e, &sp8), d, &len);
    func_ov122_02053c0c(p, p + len, 2, &res);
    OS_FreeToHeap(0, -1, p);
    if (side == 0) {
        base                  = data_ov122_02065604.a;
        data_ov122_02065604.a = base + res.n / 32;
    } else {
        base                  = data_ov122_02065604.b;
        data_ov122_02065604.b = base + res.n / 32;
    }
    switch (mode) {
        case 2:
            attr = 0xd000;
            break;
        case 4:
            attr = 0xe000;
            break;
        default:
            attr = 0xf000;
            break;
    }
    if (mode & 1) {
        for (i = 0; i < res.n; i++) {
            res.data[i] |= 0x88;
        }
    }
    MIi_CpuCopy16(res.data, chr + base * 32, res.n);
    func_ov122_02053b24(b, c, g, h, mode, flags);
    for (j = 0; j < res.cnt; j++) {
        dst = scr + (res.ent[j].x >> 3) + (res.ent[j].y >> 4) * 0x40 + (b + c * 32);
        ti  = res.ent[j].tn * 4;
        for (i = 0; i < 2; i++) {
            for (k = 0; k < res.ent[j].w; k++) {
                dst[k] = attr | (base + ti);
                ti++;
            }
            dst += 0x20;
        }
    }
    k = j - 1;
    i = res.ent[k].y / 16;
    OS_FreeToHeap(0, -1, res.data);
    return i + 1;
}
