/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u8 p0[0x22];
    u16 w22;
    u8 p24[6];
    u16 w2a;
    u8 p2c[2];
    u16 w2e;
    u8 p30[8];
    u16 w38;
    u8 p3a[5];
    u8 b3f;
} P;

typedef struct {
    u32 b0 : 1;
    u32 r1 : 2;
    u32 mode : 3;
    u32 r2 : 26;
    u8 p4[4];
    u32 q0 : 29;
    u32 b2 : 1;
    u32 q1 : 2;
    u8 pc[0x70];
    P *p;
    u8 icon;
} O;

typedef struct {
    u8 p[0xA1E];
    u16 w;
} G1;

typedef struct {
    u8 p[0x134];
    s32 v;
} G2;

extern G1 *data_ov000_0205154c;
extern G2 *data_ov000_02051548;
s32 GetAreaMapIcon(O *);
s32 GetUsePalNoAob2data(s32, s32);
void TensouICON_pallet_B(s32, s32);

void ChangeUnitIconOnBengine(O *o) {
    s32 ic;
    if (o->b0 != 0 && o->p != 0) {
        ic = GetAreaMapIcon(o);
        if (o->icon != ic) {
            o->icon   = ic;
            o->p->w2e = 0;
            o->p->w2a = o->icon;
            o->p->w38 = 0x8000;
            if (o->b2 != 0 && o->mode != 0) {
                o->p->w22 = data_ov000_0205154c->w + 3;
                o->p->b3f |= 0x40;
                TensouICON_pallet_B(GetUsePalNoAob2data(data_ov000_02051548->v, GetAreaMapIcon(o)), 3);
            }
        }
    }
}
