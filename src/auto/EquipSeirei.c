/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct E {
    u32 lo : 2;
    u32 id : 9;
    u32 rest : 21;
    u32 f4;
    u32 lv : 4;
    u32 rest8 : 28;
    u8 pad[0xa];
    s16 f16;
    u8 pad2[0x34 - 0x18];
} E;

typedef struct G {
    u8 pad[0x14];
    u8 *f14;
    u8 pad2[0xc];
    E *f24;
} G;

s32 func_02002414(s32);
extern G *data_0203673c;

void EquipSeirei(s32 a, s32 b) {
    s32 i = func_02002414(a);
    E *e, *d;
    u32 id;
    u8 *t;
    if (i != -1) {
        if (b < 0) {
            data_0203673c->f24[i].lv  = 0;
            data_0203673c->f24[i].f16 = 0;
        } else {
            e      = &data_0203673c->f24[i];
            id     = e->id;
            e->lv  = b + 1;
            d      = &data_0203673c->f24[i];
            t      = data_0203673c->f14 + id * 8;
            d->f16 = t[b + 8];
        }
    }
}
