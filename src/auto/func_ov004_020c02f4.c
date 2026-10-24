#include "m2c.h"
typedef struct {
    u8 p0[0x1b4];
    u32 a, b, c, d, e, f;
    u8 p1[0x1e0 - 0x1cc];
    u32 g, h;
    u8 p2[0x20c - 0x1e8];
    u32 i;
    u8 p3[0x214 - 0x210];
    u32 j;
    u8 p4[0x21c - 0x218];
    u32 k;
} G;
extern G *data_ov000_02051548;
void func_ov004_020c02f4(u32 *o) {
    G *g  = data_ov000_02051548;
    o[1]  = g->a;
    o[2]  = g->b;
    o[3]  = g->c;
    g     = data_ov000_02051548;
    o[4]  = g->d;
    o[5]  = g->e;
    o[6]  = g->f;
    o[7]  = data_ov000_02051548->g;
    o[8]  = data_ov000_02051548->i;
    o[9]  = data_ov000_02051548->h;
    o[10] = data_ov000_02051548->j;
    o[11] = *(u32 *) ((u8 *) data_ov000_02051548 + 0x1e8);
    o[12] = data_ov000_02051548->k;
}
