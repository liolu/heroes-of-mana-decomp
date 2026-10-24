/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u8 pad[0x10];
    s32 *anim;
} Pat;

typedef struct {
    u32 lo : 7;
    u32 f7 : 1;
    u32 mid : 22;
    u32 f30 : 1;
    u32 f31 : 1;
    u8 pad0[0x10 - 4];
    Pat *pat;
    s32 pal;
    u16 padx;
    u16 id1;
    u16 id2;
    u8 pad1[0xb0 - 0x1e];
    s32 w_b0;
    u8 pad2[0xca - 0xb4];
    s16 s_ca;
    u8 pad3[0xf4 - 0xcc];
    u16 a;
    u16 b;
    s16 o8;
    s16 oa;
    s16 oc;
    u8 pad4[0x110 - 0xfe];
} Kage;

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Out;

extern Kage data_ov003_020b08b0[];
void MIi_CpuClear16(s32, void *, s32);
void TensouKagePatPal(s32);
Pat *getNewPattern(u16, s32);
s32 getNewPatternPalette(u16, s32);
void getAnimation(s32 *, u16, u16, Out *);

void SetKageTexAndPal(s32 unused, s32 arg) {
    Out o;
    s32 i;
    Kage *k;
    i = 0;
    k = data_ov003_020b08b0;
    do {
        MIi_CpuClear16(0, k, 0x110);
        k->s_ca = 0;
        k->id1  = 1;
        k->id2  = 1;
        k->pat  = getNewPattern(k->id1, 2);
        k->pal  = getNewPatternPalette(k->id2, 2);
        k->w_b0 = *k->pat->anim;
        k->a    = i;
        k->b    = 0;
        getAnimation(k->pat->anim, k->a, k->b, &o);
        k->o8  = o.y;
        k->oa  = o.x;
        k->oc  = o.z;
        k->f31 = 0;
        k->f30 = 0;
        k->f7  = 1;
        TensouKagePatPal(i);
        k++;
        i++;
    } while (i < 4);
}
