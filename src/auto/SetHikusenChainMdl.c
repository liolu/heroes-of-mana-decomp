/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

void *AddModel(s32, s32, s32 *, s32 *, s16 *, s32, s32, s32);

void SetHikusenChainMdl(void) {
    s16 rot[3];
    s32 scale[3];
    s32 pos[3];
    u16 *m;
    scale[0] = 0x199;
    scale[1] = 0x199;
    scale[2] = 0x199;
    pos[0]   = 0;
    pos[1]   = 0;
    pos[2]   = 0;
    rot[0]   = 0;
    rot[1]   = 0;
    rot[2]   = 0;
    m        = AddModel(5, 0, scale, pos, rot, 0, 0, 0);
    m[2]     = m[2] & ~1;
}
