/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct In {
    u8 pad[0x1000];
    u32 b[2];
} In;
typedef struct R {
    u8 pad[0x90];
    In in;
} R;
typedef struct G {
    u8 pad[0x2C];
    R *p;
} G;
extern G *data_0203673c;

void SetFreeScenarioOnOff(s32 no, s32 on) {
    if (no < 0x32) {
        In *q;
        if (on != 0) {
            q = &data_0203673c->p->in;
            q->b[no >> 5] |= 1 << (no & 0x1F);
        } else {
            q = &data_0203673c->p->in;
            q->b[no >> 5] &= ~(1 << (no & 0x1F));
        }
    }
}
