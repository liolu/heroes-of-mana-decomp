/* compiler: 2.0/sp1p5 -profile */
/* near start: 3 diffs with profile "2.0/sp1p5 -profile" */
#include "m2c.h"

extern M2C_UNK data_ov003_020aa3e0;
typedef struct {
    u8 pad[0x20];
    u32 r0 : 7;
    u32 f : 1;
    u32 r1 : 24;
} G;
extern G *data_ov000_02051548;

s32 CheckAreaMapMaskForEnemy(s32 x, s32 y) {
    G *g = data_ov000_02051548;
    s32 r;
    if (g->f) {
        r = 1;
    } else {
        s32 k = (x + y * 64) >> 5;
        u32 w = *(u32 *) ((u8 *) g + k * 4 + 0x540);
        u32 s = x & 0x1F;
        r     = 1;
        if (!((1 << s) & w)) {
            r = 0;
        }
    }
    return r;
}
