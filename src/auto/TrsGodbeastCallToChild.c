/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u32 t : 5;
    u32 a : 7;
    u32 b : 7;
    u32 rest : 13;
} W;
typedef struct {
    u8 pad[0x4c4];
    u8 *base;
    u8 pad2[8];
    s32 off;
} G;
extern G *data_ov000_02051548;
void TrsGodbeastCallToChild(u32 a, u32 b) {
    G *g = data_ov000_02051548;
    W *w = (W *) (g->base + g->off);
    w->t = 11;
    w->a = a;
    w->b = b;
    data_ov000_02051548->off += 4;
}
