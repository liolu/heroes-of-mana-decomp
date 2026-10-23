/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u8 pad0[0x1c4];
    u8 *t0;
    u8 pad1[0x1e4 - 0x1c8];
    u8 *t1;
    u8 pad2[0x204 - 0x1e8];
    u8 *t2;
    u8 pad3[0x338 - 0x208];
    u16 a : 1;
    u16 b : 1;
} S;

extern S *data_ov000_02051550;

s32 GetOneMojiHaba(u32 c) {
    S *p = data_ov000_02051550;
    if (p->b) {
        return ((s32) p->t2[c >> 1] >> ((c << 31) >> 29)) & 0xf;
    } else if (p->a && c < 0x100) {
        return ((s32) p->t1[c >> 1] >> ((c << 31) >> 29)) & 0xf;
    }
    return ((s32) p->t0[c >> 1] >> ((c << 31) >> 29)) & 0xf;
}
