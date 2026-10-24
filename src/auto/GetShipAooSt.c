/* compiler: 2.0/sp1p5 -profile */
/* MATCH 2.0/sp1p5 -profile */
/* near start: 9 diffs with profile "2.0/sp1p5 -profile" */
#include "m2c.h"

typedef struct {
    u32 on : 1;
    u32 rest : 31;
    u8 pad[0x25];
    s8 kind;
    u8 pad2[0x0a];
} Ship;

typedef struct {
    u32 on : 1;
    u32 a : 31;
    u32 w1;
    u32 c : 29;
    u32 flag : 1;
    u32 d : 2;
    u8 pad[0x104];
} Aoo;

typedef struct {
    u8 pad[0x24];
    Ship *ships;
    u8 *grp;
} Glob;

extern Glob *data_0203673c;
extern Aoo data_ov003_020b0cf0[];

Aoo *GetShipAooSt(s32 arg0) {
    Glob *g = data_0203673c;
    u16 *q  = (u16 *) (g->grp + arg0 * 0x2d0 + 0x200);
    s32 k;
    Aoo *a;
    u32 idx = q[0xae / 2];
    if (idx == 0xFFFF) {
        return 0;
    }
    if (!g->ships[idx].on) {
        return 0;
    }
    k = g->ships[idx].kind;
    if (k == -1) {
        return 0;
    }
    a = &data_ov003_020b0cf0[k];
    if (!a->on) {
        return 0;
    }
    if (!a->flag) {
        return 0;
    }
    return a;
}
