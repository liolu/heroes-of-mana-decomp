/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u32 a : 8;
    u32 b : 3;
    u32 c : 3;
    u32 d : 8;
    u32 e : 8;
    u32 f : 2;
    u32 w1;
    u32 g : 23;
    u32 h : 4;
    u32 i : 5;
    u8 pad[0x2e - 0xc];
    u16 t;
    u8 pad2[0x3c - 0x30];
    s32 z;
} O;
void changeAnimationObj(O *o, s32 a, s32 b);
s32 GetRnd(void);
void SetObjIdling(O *o) {
    if (o->h < 4) {
        changeAnimationObj(o, 0, o->b);
    }
    o->d = 5;
    o->t = (GetRnd() & 0x1f) + 0x3c;
    o->z = 0;
}
