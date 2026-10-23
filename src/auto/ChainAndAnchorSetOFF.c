/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u16 p0;
    u16 p2;
    u16 on : 1;
    u16 rest : 15;
} A;
typedef struct {
    u8 pad[0xA0];
    A *a0;
    A *a4;
    u8 pad2[2];
    u8 b : 7;
    u8 c : 1;
} O;

void ChainAndAnchorSetOFF(O *o) {
    o->a0->on = 0;
    o->a4->on = 0;
    o->b      = 0;
}
