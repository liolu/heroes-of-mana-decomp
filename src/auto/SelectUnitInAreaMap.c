/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u8 pad0[0x22];
    u16 icon;
    u8 pad1[0x1b];
    u8 fl;
} Spr;
typedef struct {
    u32 a : 1;
    u32 b : 2;
    u32 c : 3;
    u32 d : 26;
    u32 pad4;
    u32 e : 23;
    u32 f : 4;
    u32 g : 2;
    u32 h : 1;
    u32 i : 2;
    u8 pad[0x20];
    u16 w2c : 1;
    u16 w2cr : 15;
    u8 pad2[0x4e];
    Spr *spr;
    u8 pad3[0x90];
} Ent;
typedef struct {
    u8 pad[0x24];
    u32 p : 8;
    u32 q : 1;
    u32 r : 23;
    u8 pad2[0x10c];
    s32 pal;
} Hdr;
typedef struct {
    u8 pad[0xa00];
    u8 pad2[0x1e];
    u16 base;
} Hdr2;
extern Hdr *data_ov000_02051548;
extern Hdr2 *data_ov000_0205154c;
extern Ent data_ov003_020b0cf0[];
s32 GetAreaMapIcon(Ent *);
s32 GetUsePalNoAob2data(s32, s32);
void TensouICON_pallet_B(s32, s32);
void SelectUnitInAreaMap(void) {
    s32 i;
    Ent *e;
    e = data_ov003_020b0cf0;
    if (data_ov000_02051548->q == 0) {
        for (i = 0; i < 0x42; i++, e++) {
            if (e->a != 0 && e->spr != 0 && e->c == 1) {
                if (e->h != 0) {
                    e->spr->icon = data_ov000_0205154c->base + 3;
                    e->spr->fl |= 0x40;
                    TensouICON_pallet_B(GetUsePalNoAob2data(data_ov000_02051548->pal, GetAreaMapIcon(e)), 3);
                } else if (e->w2c != 0) {
                    e->spr->icon = data_ov000_0205154c->base + 1;
                } else if (e->f & 2) {
                    e->spr->icon = data_ov000_0205154c->base + 2;
                } else {
                    e->spr->icon = data_ov000_0205154c->base;
                }
                e->spr->fl |= 0x40;
            }
        }
    }
}
