/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct S {
    u32 f;
    u8 pad[0x60];
    s8 x;
    s8 y;
    u8 p2[6];
    s32 z;
    s32 w;
} S;
s32 GetCanThroughKai(s32, s32, s32, s32, s32);
void SetNowDownId_a(s32, s32, s32);

void SetNowDownId_a2(s8 a, s32 b, S *s) {
    u32 k = (s->f << 3) >> 29;
    if (k == 3 || k == 5) {
        if (GetCanThroughKai(s->x, s->y, s->z, a, b) == 0) {
            GetCanThroughKai(s->x, s->y, -2, a, b);
        }
        s->x = a;
        s->y = b;
    } else {
        SetNowDownId_a(a, b, s->w);
    }
}
