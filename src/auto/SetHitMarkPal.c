/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u8 pad[4];
    s32 f4;
    u32 f8;
} T;
typedef struct {
    u8 pad[0x14];
    T *t;
    u8 pad2[0xA4];
    s32 bc;
} O;
s32 SearchTexPalMap(u32);
void SetTexPaletteData(s32, s32, u32, s32);

void SetHitMarkPal(O *o) {
    o->bc = SearchTexPalMap(o->t->f8 >> 5);
    SetTexPaletteData(o->t->f4, o->bc, o->t->f8, 0);
}
