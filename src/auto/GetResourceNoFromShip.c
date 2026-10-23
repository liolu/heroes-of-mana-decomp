/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u32 pad0;
    u32 w4;
    u32 pad : 23;
    u32 b23 : 1;
    u32 rest : 8;
    u32 pad1[1];
    u16 f10;
} P;
typedef struct O {
    u32 flag : 1;
    u32 pad : 31;
    u8 p4[4];
    u32 pad8 : 23;
    u32 team : 4;
    u32 rest8 : 5;
    u8 pc[0x54];
    u32 f60;
    u8 p64[8];
    u32 f6c;
    u32 f70;
    u8 p74[8];
    void *f7c;
    u8 p80;
    u8 b81;
    u8 p82[0x66];
    P *pe8;
    u8 pEC[0x24];
} O;
extern O data_ov003_020b0cf0[];
O *GetShipAooSt(s32);
s32 checkCanSeeUnitByUser(O *);
s32 CheckAreaMapMaskForEnemy(s32, s32);
s32 FX_Sqrt(s32);
s32 GetResourceNoFromShip(O *self, s32 t1, s32 t2) {
    O *o = data_ov003_020b0cf0;
    O *ship;
    s32 bestd = 0x2710000;
    s32 i;
    s32 best = -1;
    P *p;
    s32 r, d;
    ship = GetShipAooSt(self->team);
    if (ship == 0) {
        return best;
    }
    for (i = 0; i < 66; i++, o++) {
        if (o->flag != 0 && o != self && (p = o->pe8) != 0 && p->b23 == 0 && p->f10 != 0 && (o->team == t1 || o->team == t2) &&
            o->f7c != 0) {
            if (self->b81 == 2) {
                r = checkCanSeeUnitByUser(o);
            } else {
                r = CheckAreaMapMaskForEnemy(((s8 *) o)[0x60], ((s8 *) o)[0x61]);
            }
            if (r == 1) {
                d = FX_Sqrt((((s8 *) o)[0x60] - ((s8 *) ship)[0x60]) * (((s8 *) o)[0x60] - ((s8 *) ship)[0x60]) +
                                (((s8 *) o)[0x61] - ((s8 *) ship)[0x61]) * (((s8 *) o)[0x61] - ((s8 *) ship)[0x61])
                            << 12);
                if ((o->f70 & ship->f6c) == 0) {
                    d += 0x64000;
                }
                if (bestd > d) {
                    bestd = d;
                    best  = i;
                }
            }
        }
    }
    return best;
}
