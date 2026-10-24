/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u32 a : 5;
    u32 b : 10;
    u32 c : 8;
    u32 d : 8;
    u32 e : 1;
    u32 len : 8;
    u32 rest : 24;
} Hd;

typedef struct {
    u8 p[0x4C4];
    u8 *base;
    u8 p2[8];
    s32 off;
} G;

extern G *data_ov000_02051548;

void TrsAikyoEffectToChild(u32 a0, u32 a1, u32 a2, s32 a3, u8 *src) {
    s32 i    = 0;
    u8 *base = data_ov000_02051548->base;
    s32 off  = data_ov000_02051548->off;
    Hd *h    = (Hd *) (base + off);
    s32 al   = 0;
    if (a3 != 0) {
        u8 *d;
        al = (a3 + 3) & ~3;
        if (a3 > 0) {
            d = (u8 *) h + 8;
            do {
                *d++ = src[i];
                i++;
            } while (i < a3);
        }
    }
    h->a                     = 10;
    h->b                     = a0;
    h->c                     = a1;
    h->d                     = a2;
    h->len                   = a3;
    data_ov000_02051548->off = data_ov000_02051548->off + (al + 8);
}
