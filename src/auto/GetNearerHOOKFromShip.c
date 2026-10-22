/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 FX_Sqrt(s32);

typedef struct {
    u32 active : 1;
    u32 : 31;
    u32 pad0;
    u32 : 23;
    u32 kind : 4;
    u32 : 5;
    u8 pad1[0x54];
    s8 f60;
    s8 f61;
    u8 pad2[0x0E];
    u32 mask70;
    u8 pad3[0x74];
    void *obj;
    u8 pad4[0x24];
} Ent;

typedef struct {
    u8 pad0[8];
    u32 : 23;
    u32 f23 : 1;
    u32 : 8;
} Unit;

extern Ent data_ov003_020b0cf0[];

void *GetNearerHOOKFromShip(void *arg0) {
    Ent *e;
    Ent *best;
    s32 bestd;
    s32 i;
    Unit *unit;
    s32 dy;
    s32 dx;
    s32 d;

    best  = NULL;
    e     = data_ov003_020b0cf0;
    bestd = 0x02710000;
    i     = 0;
    do {
        if (e->active && (e != (Ent *) arg0) && ((unit = e->obj) != NULL) && (unit->f23 == 0) && (e->kind == 4)) {
            dy = e->f61 - M2C_FIELD(arg0, s8 *, 0x61);
            dx = e->f60 - M2C_FIELD(arg0, s8 *, 0x60);
            d  = FX_Sqrt((dx * dx + dy * dy) << 0xC);
            if ((e->mask70 & M2C_FIELD(arg0, s32 *, 0x6C)) == 0) {
                d += 0x64000;
            }
            if (bestd > d) {
                bestd = d;
                best  = e;
            }
        }
        i += 1;
        e += 1;
    } while (i < 0x42);
    return best;
}