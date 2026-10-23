/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u32 lo : 2;
    u32 mid : 16;
    u32 hi : 14;
} F434;
typedef struct {
    u32 pad0 : 18;
    u32 pat : 8;
    u32 pad1 : 6;
} F10;
typedef struct {
    u32 pad0 : 11;
    u32 b11 : 1;
    u32 pad1 : 5;
    u32 b17 : 1;
    u32 pad2 : 14;
} TF;
typedef struct {
    u32 pad0 : 13;
    u32 id : 8;
    u32 pad1 : 11;
} UF;

typedef struct {
    u8 pad0[0x10];
    F10 f10;
    u8 pad1[0x1a8 - 0x14];
    s8 b1a8;
    u8 pad2[0x27c - 0x1a9];
    s32 s27c;
    s32 s280;
    s32 s284;
    u8 pad3[8];
    s32 *p290;
    u8 pad4[0x434 - 0x294];
    F434 f434;
    u16 h438;
    u16 h43a;
    u16 h43c;
} G;

extern G *data_ov000_02051548;
extern u8 data_ov003_020b0cf0[];
typedef struct {
    u8 pad[0x10];
    struct {
        u8 pad[8];
        TF arr[1];
    } *tb;
} T0;
extern T0 *data_0203673c;

s32 GetDisPos(u8 *, s32 *, s32 *);
void AreaAZtoObjAZ(s32 *, s32 *);
s32 GetHighPlace(s32, s32);
void GetHata3Dto2DZahyou(s32 *, s32 *);
void PutHataIconFor3D(s32, s32);
void setHataPat3D(u32, s32, s32);

void SetNow3Dhata(s32 idx) {
    u8 *o;
    s32 x, y, u, v, p, q;
    G *g;
    u32 *e;

    o = data_ov003_020b0cf0 + idx * 0x110;
    if (*(s32 *) (o + 0xC4) != 0 && *(u16 *) (o + 0xC8) != 0) {
        data_ov000_02051548->b1a8 = idx;
        x                         = *(s8 *) (o + 0x66);
        y                         = *(s8 *) (o + 0x67);
    } else {
        data_ov000_02051548->b1a8 = idx;
        if (GetDisPos(o, &x, &y) == 0) {
            data_ov000_02051548->b1a8 = -1;
            x                         = *(s8 *) (o + 0x60);
            y                         = *(s8 *) (o + 0x61);
        }
    }
    u = x;
    v = y;
    AreaAZtoObjAZ(&u, &v);
    data_ov000_02051548->s27c     = u;
    data_ov000_02051548->s284     = v;
    g                             = data_ov000_02051548;
    g->s280                       = (0x28 << *g->p290) * GetHighPlace(x, y);
    data_ov000_02051548->f434.lo  = 1;
    data_ov000_02051548->f434.mid = 0;
    data_ov000_02051548->h438     = x;
    data_ov000_02051548->h43a     = y;
    data_ov000_02051548->h43c     = 0x7c00;
    {
        TF *ent = &data_0203673c->tb->arr[(**(u32 **) (o + 0xE8) << 13) >> 24];
        if (ent->b11 == 0 && ent->b17 == 0) {
            GetHata3Dto2DZahyou(&p, &q);
            PutHataIconFor3D(p, q);
            g = data_ov000_02051548;
            setHataPat3D(g->f10.pat, g->s27c, g->s284);
        }
    }
}
