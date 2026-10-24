/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u8 p0[4];
    u16 w4;
    u16 w6;
    u8 p8[0x28];
    struct {
        u8 q[4];
        u16 w4;
        u16 w6;
    } ent[32];
    s32 idx;
    s32 st;
    u32 f0 : 1;
    u32 cnt : 3;
    u32 rest : 28;
} G;

extern G *data_ov000_0205154c;
void func_020157a4(void *, void *);

void Ana_TPRecvCallback(s32 a0, s32 a1, s32 a2) {
    G *g;
    s32 i;
    if (a0 != 0x10 || a1 != 0) {
        return;
    }
    g = data_ov000_0205154c;
    i = g->idx;
    if (i >= 0x20) {
        return;
    }
    if (*(u16 *) ((u8 *) g + a2 * 8 + 4) == 0) {
        if (g->cnt != 0) {
            g->cnt = g->cnt - 1;
        } else if (g->st == 1) {
            *(u16 *) ((u8 *) g + i * 8 + 0x34) = 0;
            data_ov000_0205154c->idx++;
            data_ov000_0205154c->st = 0;
        }
    } else if (*(u16 *) ((u8 *) g + a2 * 8 + 6) == 0) {
        func_020157a4((u8 *) g + 0x30 + i * 8, (u8 *) g + a2 * 8);
        data_ov000_0205154c->idx++;
        data_ov000_0205154c->st  = 1;
        data_ov000_0205154c->cnt = 2;
    }
}
