/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct S {
    u8 pad[0xa8];
    u16 x : 7;
    u16 y : 7;
    u16 k : 2;
} S;
typedef struct O {
    u8 pad[8];
    u32 a : 23;
    u32 t : 4;
    u32 b : 5;
    u8 pad2[0x54];
    s8 px;
    s8 py;
} O;
S *GetShipAooSt(s32);

s32 SearchGoddessOrHookWithShipFunc(O *o, s32 id) {
    S *s;
    if (o->t == 4) {
        s = GetShipAooSt(id);
        if (s != 0 && s->k == 2 && s->x == o->px && s->y == o->py) {
            return 1;
        }
    } else if (o->t == 7) {
        return 1;
    }
    return 0;
}
