/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct Z {
    u8 pad[0x14];
    u16 w;
} Z;
typedef struct O {
    u8 pad[0x38];
    u8 b38;
    u8 pad2[0x9d];
    u16 d6;
    u8 pad3[0x10];
    Z *e8;
} O;
void *GetUnitForAttack(O *, u16, s32 *, s32 *, s32, s32);
void SetDamageAfterEffect(u16, u8, s32, void *, s32);
void SetUseWaza(O *, s32, u16);
void OS_FreeToHeap(s32, s32, void *);

void SetDamageForNoFlyArm(O *o) {
    s32 a;
    s32 b;
    void *u;
    u = GetUnitForAttack(o, o->d6, &a, &b, 1, 2);
    SetDamageAfterEffect(o->d6, o->b38, a, u, 0);
    SetUseWaza(o, 0, o->e8->w);
    if (u != NULL) {
        OS_FreeToHeap(0, -1, u);
    }
}
