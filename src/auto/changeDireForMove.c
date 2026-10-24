/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
extern s16 GetDirectionByAddXZ(s32, s32);
extern void changeAnimationObj(void *, s32, u32);
typedef struct {
    u32 a : 8;
    u32 dir : 3;
    u32 b : 21;
    u32 w4;
    u8 p[0x26];
    s16 s2e;
    s16 s30;
} O;
void changeDireForMove(O *o, s32 x, s32 z) {
    if (x == 0 && z == 0) {
        return;
    }
    o->s2e = 8;
    o->s30 = GetDirectionByAddXZ(x, z);
    if (o->s30 == o->dir) {
        changeAnimationObj(o, 1, o->dir);
    } else {
        *(u32 *) o |= 0x20000000;
        o->w4 &= ~2;
    }
}
