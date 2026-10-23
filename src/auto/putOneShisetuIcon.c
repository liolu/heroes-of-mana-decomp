/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u8 pad0[0x18];
    s32 w18;
    u8 pad1[0x3c - 0x1c];
    u8 a3c[0x34c - 0x3c];
    u8 b34c;
    u8 pad2[0x368 - 0x34d];
    s32 k[0x10];
    s32 m[0x10];
} G;

typedef struct {
    u8 pad[0x72];
    u16 h72;
} Ic;

extern G *data_ov109_020ea340;
extern u8 data_ov109_020e9abc[];
Ic *SetStatusIcon(s32, s32, s32, s32, s32, s32, s32, u8 *, s32, s32);

void putOneShisetuIcon(s32 i, s32 y) {
    G *g    = data_ov109_020ea340;
    Ic *ic  = SetStatusIcon(g->k[i] + 0xa + 0xff00, data_ov109_020e9abc[g->k[i]] + g->m[i] * 2, y, 0xb0, g->b34c, 0, 0, g->a3c,
                            g->w18, 0);
    ic->h72 = data_ov109_020e9abc[data_ov109_020ea340->k[i]] + data_ov109_020ea340->m[i] * 2;
}
