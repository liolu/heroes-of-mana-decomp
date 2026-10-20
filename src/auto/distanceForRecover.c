/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    s32 flag;
    u8 pad0[4];
    u32 kind;
    u8 pad1[0x60 - 0xC];
    s8 x;
    s8 y;
    u8 pad2[0x110 - 0x62];
} RecoverData;

extern RecoverData data_ov003_020b0cf0[];

s32 distanceForRecover(s32 arg0, s8 *arg1) {
    RecoverData *p;
    s32 dx;
    s32 dy;

    p = &data_ov003_020b0cf0[arg0];
    if (((u32) (p->flag << 31) >> 31) == 0) {
        return 0;
    }
    switch ((p->kind << 5) >> 28) {
    case 4:
        dx = arg1[0x60] - p->x;
        if (dx < 0) {
            dx = -dx;
        }
        if (dx > 5) {
            goto fail;
        }
        dy = arg1[0x61] - p->y;
        if (dy < 0) {
            dy = -dy;
        }
        if (dy > 5) {
            goto fail;
        }
        return 1;
    case 7:
        dx = arg1[0x60] - p->x;
        if (dx < 0) {
            dx = -dx;
        }
        if (dx > 3) {
            goto fail;
        }
        dy = arg1[0x61] - p->y;
        if (dy < 0) {
            dy = -dy;
        }
        if (dy > 3) {
            goto fail;
        }
        return 1;
    }
fail:
    return 0;
}
