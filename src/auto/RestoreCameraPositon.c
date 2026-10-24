/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u8 p0[0x14];
    u32 r0 : 13;
    u32 b : 1;
    u32 r1 : 18;
    u8 p1[8];
    u32 s0 : 28;
    u32 q : 1;
    u32 s1 : 3;
} G;
void CameraMoveAndWait(s32, s32, s32, s32, s32, s32, s32);
extern G *data_ov000_02051548;
extern M2C_UNK data_ov003_020ac274;

void RestoreCameraPositon(s32 a) {
    G *g = data_ov000_02051548;
    g->b = g->q;
    CameraMoveAndWait(a, 0x200, 0, 0, 0, 0, 0);
}
