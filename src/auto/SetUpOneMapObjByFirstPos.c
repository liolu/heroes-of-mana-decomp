/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u32 w0;
    u16 h4;
    u16 pad6;
    u32 w8;
    u16 hc;
    u16 he;
    u16 h10;
    u16 h12;
    u16 h14;
    u8 pad16[0x24 - 0x16];
    s32 x24;
} Ent;

typedef struct {
    u32 lo : 4;
    u32 mid : 5;
    u32 c : 3;
    u32 fl : 1;
    u32 rest : 19;
} PBits;

typedef struct {
    s8 x;
    s8 y;
    u8 b2;
    u8 b3;
    PBits w4;
} Pos;

typedef struct {
    u32 a : 1;
    u32 x1 : 2;
    u32 b : 3;
    u32 x2 : 2;
    u32 c : 3;
    u32 x3 : 15;
    u32 e : 3;
    u32 x4 : 3;
} W0;

typedef struct {
    u32 x : 6;
    u32 k : 3;
    u32 y : 1;
    u32 m : 5;
    u32 n : 5;
    u32 rest : 12;
} W4;

typedef struct {
    u32 x : 23;
    u32 q : 4;
    u32 r : 2;
    u32 rest : 3;
} W8;

typedef struct {
    u32 lo : 8;
    u32 rest : 24;
} WC;

typedef struct {
    u16 a : 1;
    u16 b : 1;
    u16 rest : 14;
} H2C;

typedef struct {
    u32 x : 4;
    u32 v : 9;
    u32 rest : 19;
} EBits;

typedef struct {
    u32 pad0 : 19;
    u32 id : 12;
    u32 rest : 1;
} E0;

typedef struct {
    W0 w0;
    W4 w4;
    W8 w8;
    WC wc;
    void *p10;
    void *p14;
    u16 h18;
    u16 h1a;
    u16 h1c;
    u16 h1e;
    u8 b20;
    u8 pad21[0x2c - 0x21];
    H2C h2c;
    u8 pad2e[0x38 - 0x2e];
    u8 b38;
    u8 pad39[0x40 - 0x39];
    s32 w40;
    s32 w44;
    s32 w48;
    u8 pad4c[0x58 - 0x4c];
    s32 w58;
    s32 w5c;
    s8 x60;
    s8 x61;
    s8 x62;
    s8 x63;
    s8 x64;
    s8 x65;
    u8 b66;
    u8 b67;
    u8 pad68[4];
    s32 w6c;
    s32 w70;
    u8 pad74[0x94 - 0x74];
    s32 w94;
    u8 pad98[4];
    u16 h9c;
    u8 pad9e[0xac - 0x9e];
    s32 wac;
    s32 wb0;
    s32 wb4;
    s32 wb8;
    s32 wbc;
    s32 wc0;
    u8 pad_c4[4];
    u16 hc8;
    u16 hca;
    u8 padcc[0xd8 - 0xcc];
    u16 hd8;
    u8 padda[0xe8 - 0xda];
    Ent *e8;
    s32 wec;
    u8 padf0[4];
    u16 hf4;
    u16 hf6;
    u8 padf8[0x10c - 0xf8];
    s32 w10c;
} Obj;

typedef struct {
    u32 w0;
    u8 pad4[0x24 - 4];
    u8 *base;
} G;

typedef struct {
    u32 w0;
    s32 w4;
    u32 w8;
} Pat;

extern G *data_0203673c;
extern u16 data_ov003_020ad768[];
void MIi_CpuClear16(s32, void *, s32);
void *getNewPattern(s32, s32);
void *getNewPatternPalette(s32, s32);
void CancelTransTex2Vram(void *);
s32 SearchTexPalMap(s32);
s32 SetNowDownId_a(s32, s32, s32);
s32 SetNowDownId_i2(s32, s32, void *);
s32 SetObjsY2(void *);
void SetUnitIconByAreaMap(void *);
void SetObjActionToNONE(void *);
void SetConsiderFromData(void *, s32, s32, s32);
void *func_0200ed38(s32, s32, void *);
void changeAnimationObj(void *, s32, s32);
void SetTexPaletteData(s32, s32, s32, s32);
void ChgPalletToDarkByHP(void *);

s32 SetUpOneMapObjByFirstPos(s32 a, Obj *o, Pos *p, s32 d, s32 idx, s32 val) {
    s32 r4;
    s32 r5;
    Pat *pat;

    MIi_CpuClear16(0, o, 0x110);
    o->w8.q = p->w4.lo;
    if (idx == 0xFFFF) {
        return 0;
    }
    o->hd8   = idx;
    o->b20   = 0;
    o->w0.a  = 1;
    o->w94   = 0x1000;
    o->h2c.a = 1;
    o->h2c.b = 0;
    o->b38   = a;
    o->w4.k  = 1;
    o->w0.b  = 0;
    o->w0.c  = p->w4.c;
    o->hf4   = o->w0.c;
    o->hf6   = 0;
    o->w4.m  = 0x1F;
    o->w4.n  = 0x1F;
    o->hc8   = 0;
    if ((u32) (o->w8.q - 5) <= 1) {
        o->w8.r = 2;
    }
    o->w8.x                = o->w8.x;
    o->e8                  = (Ent *) (data_0203673c->base + idx * 0x34);
    o->e8->h12             = val & 0xFF;
    o->e8->h14             = val & 0xFF;
    o->e8->h10             = p->b2;
    *((u8 *) o->e8 + 0x29) = a;
    o->h1e                 = ((E0 *) o->e8)->id;
    o->wec                 = 0;
    o->hca                 = 2;
    o->h9c                 = 0x19;
    o->w0.e                = 0;
    o->h1a                 = (u16) d;
    o->h1c                 = (u16) d;
    {
        u32 ev = ((EBits *) ((u8 *) o->e8 + 8))->v;
        if (ev != 0) {
            o->hca = ev;
            o->h1a = data_ov003_020ad768[o->hca * 2];
            o->h1c = ((u16 *) ((u8 *) data_ov003_020ad768 + 2))[o->hca * 2];
            o->p10 = getNewPattern(o->h1a, 0);
            o->p14 = getNewPatternPalette(o->h1c, 0);
        } else {
            o->p10 = getNewPattern(o->h1a, o->hca);
            o->p14 = getNewPatternPalette(o->h1c, o->hca);
        }
    }
    o->wb8 = -1;
    o->wb4 = -1;
    CancelTransTex2Vram(o);
    o->w10c = 0;
    o->wbc  = SearchTexPalMap(((Pat *) o->p14)->w8 >> 5);
    o->wc0  = o->wbc;
    o->w70  = 0xFFFF;
    r4      = p->x;
    r5      = p->y;
    o->b66  = r4;
    o->x60  = r4;
    o->b67  = r5;
    o->x61  = r5;
    if (p->w4.fl != 0) {
        o->w6c = o->e8->x24;
    } else {
        o->w6c = SetNowDownId_a(r4, r5, 0xFFFF - 0x10000);
    }
    o->w70   = SetNowDownId_i2(r4, r5, o);
    o->x62   = r4;
    o->x63   = r5;
    o->x64   = r4;
    o->x65   = r5;
    o->w40   = (o->x60 << 14) - 0x4E000;
    o->w48   = (o->x61 << 14) - 0x4E000;
    o->w58   = o->w40;
    o->w5c   = o->w48;
    o->w44   = SetObjsY2(o);
    o->wc.lo = 0;
    SetUnitIconByAreaMap(o);
    SetObjActionToNONE(o);
    SetConsiderFromData(o, 0, 0, 0);
    o->wb0 = **(s32 **) (((u8 *) o->p10) + 0x10);
    o->wac = (s32) func_0200ed38(0, -1, (u8 *) 0 + o->wb0 + 0xC);
    changeAnimationObj(o, 0, o->w0.c);
    SetTexPaletteData(((Pat *) o->p14)->w4, o->wc0, ((Pat *) o->p14)->w8, 0);
    if ((u32) (o->w8.q - 5) <= 1) {
        ChgPalletToDarkByHP(o);
    }
    return 1;
}
