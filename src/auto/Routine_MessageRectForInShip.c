/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct R {
    u16 a;
    u16 b;
    u16 c;
    u16 d;
} R;
extern void MessageRectChangeForInShip(R *, s32);
void Routine_MessageRectForInShip(u16 a, u16 b, u16 c, u16 d) {
    R r;
    r.a = a;
    r.b = b;
    r.c = c;
    r.d = d;
    MessageRectChangeForInShip(&r, 0);
}
