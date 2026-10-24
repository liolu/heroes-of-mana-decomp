/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u32 b0 : 1;
    u32 pad : 31;
    u8 pad1[0x10C];
} H;
typedef struct {
    u32 pad[2];
    u32 pad8 : 23;
    u32 flag : 1;
} Q;
typedef struct {
    Q *q;
    u8 pad[0x10C];
} H2;
s32 searchSamePosObj(s32, s32, s32);
extern H data_ov003_020b0cf0[];
extern H2 data_ov003_020b0dd8[];

s32 GetUnitNoFromConsider(s32 a, s8 *p) {
    s32 r;
    switch ((u8) p[0]) {
        case 0:
        case 5:
            r = -1;
            break;
        case 1:
            r = searchSamePosObj(a, p[2], p[3]);
            break;
        case 6:
            r = p[1];
            if (data_ov003_020b0cf0[r].b0 != 0 && data_ov003_020b0dd8[r].q != NULL && data_ov003_020b0dd8[r].q->flag == 0) {
            } else {
                r = -1;
            }
            break;
        case 2:
        case 3:
        case 7:
            r = p[1];
            if (data_ov003_020b0cf0[r].b0 != 0 && data_ov003_020b0dd8[r].q != NULL && data_ov003_020b0dd8[r].q->flag == 0) {
            } else {
                r = -1;
            }
            break;
        default:
            r = -1;
            break;
    }
    return r;
}
