/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct A0 {
    u32 pad : 13;
    u32 sel : 4;
    u32 rest : 15;
    u8 pad3[0x50 - 4];
    void *pal;
} A0;
typedef struct En {
    u8 pad[0x21c];
    u32 pad2 : 4;
    u32 k : 4;
    u32 rest : 24;
    u16 h0;
    u16 h1;
} En;
typedef struct G {
    u8 pad[0x28];
    u8 *base;
} G;
extern A0 *data_ov109_020ea340;
extern G *data_0203673c;
extern void chgPalData(void *, void *, u16, u16);
extern void *func_0200ed38(u32, s32, s32);
void *ChgColorShisetu(s32 idx) {
    u8 *base = data_0203673c->base + data_ov109_020ea340->sel * 0x2d0;
    En *e;
    void *buf;
    if (idx >= 8) {
        idx = 8;
    }
    buf = func_0200ed38(0, -1, 0x20);
    e   = (En *) (base + idx * 8);
    chgPalData(*(void **) ((u8 *) data_ov109_020ea340 + e->k * 0x14 + 0x50), buf, e->h0, e->h1);
    return buf;
}
