/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u16 b0:1;
    u16 rest:15;
} Bit16;

typedef struct {
    u8 pad0[8];
    u32 f8;
    u8 pad1[0x2C - 0xC];
    Bit16 f2C;
    u8 pad2[0xA8 - 0x2E];
    u16 lo:7;
    u16 hi:7;
    u16 top:2;
} ShipObj;

void *GetShipAooSt(s32);                     /* extern */
u32 SetCarisumaMap(u32, u32, u32, u32, u32); /* extern */
s32 GetHookObjNo(void *, void *);            /* extern */
u32 IsThereRecoverHouse(s32);                /* extern */

void SetHookRecover(void) {
    s32 i;
    ShipObj *p;

    for (i = 0; i < 4; i++) {
        p = (ShipObj *) GetShipAooSt(i);
        if (p != NULL) {
            if (((u32) (p->f8 << 2) >> 31) != 0) {
                if (p->top == 2) {
                    if (IsThereRecoverHouse(i) == 1) {
                        if (GetHookObjNo((void *) p->lo, (void *) p->hi) != -1) {
                            SetCarisumaMap(p->lo, p->hi, 0x02000000, 5, p->f2C.b0);
                        }
                    }
                }
            }
        }
    }
}
