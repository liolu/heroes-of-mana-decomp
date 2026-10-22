/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    s32 f0;
    u32 pad4;
    s32 f8;
    u8 padC[0x60 - 0xC];
    s8 x;
    s8 y;
    u8 pad62[0xA8 - 0x62];
    u16 lo : 7;
    u16 hi : 7;
    u16 top : 2;
    u8 padAA[0xE8 - 0xAA];
    void *fE8;
} ShipObj;

void *Get_aONEOBJadrsByCharno(s32);                     /* extern */

s32 checkIsThereShip(void *arg0, void *arg1) {
    ShipObj *p1;
    ShipObj *p2;
    void *q;

    p1 = (ShipObj *) Get_aONEOBJadrsByCharno((s32) arg0);
    p2 = (ShipObj *) Get_aONEOBJadrsByCharno((s32) arg1);
    if ((p1 != NULL) && (p2 != NULL) && (((u32) (p2->f0 << 0x1F) >> 0x1F) != 0) && (((u32) (p2->f8 << 2) >> 0x1F) != 0) &&
        ((q = p2->fE8) != NULL) && (((u32) (M2C_FIELD(q, s32 *, 8) << 8) >> 0x1F) == 0) && (p2->top == 2) &&
        (p2->lo == p1->x) && (p2->hi == p1->y)) {
        return 1;
    }
    return 0;
}
