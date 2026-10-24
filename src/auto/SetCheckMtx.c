/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec;
typedef struct {
    s32 m[12];
} Mtx;
extern u8 *data_ov000_02051548;
extern Vec data_ov003_020a5334;
extern void G3i_LookAt_(Vec *, Vec *, Vec *, s32, Mtx *);
extern void mtx_Scale(Mtx *, s32, s32, s32);
extern void mtx_Concat(Mtx *, Mtx *, void *);

void SetCheckMtx(void) {
    Vec up;
    Vec tgt;
    Mtx scale;
    Mtx look;
    Vec pos;
    u8 *g = data_ov000_02051548;
    up    = data_ov003_020a5334;
    tgt.x = *(s32 *) (g + 0x1b4) / 4 / 10;
    tgt.y = *(s32 *) (g + 0x1b8) / 4 / 10;
    tgt.z = *(s32 *) (g + 0x1bc) / 4 / 10;
    pos.x = *(s32 *) (g + 0x2f8) / 4 / 10;
    pos.y = *(s32 *) (g + 0x2fc) / 4 / 10;
    pos.z = *(s32 *) (g + 0x300) / 4 / 10;
    G3i_LookAt_(&pos, &up, &tgt, 0, &look);
    mtx_Scale(&scale, 0x1000, 0x1000, 0x1000);
    mtx_Concat(&look, &scale, data_ov000_02051548 + 0x30c);
}
