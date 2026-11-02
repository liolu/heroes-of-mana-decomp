/* compiler: 2.0/sp1p5 -profile */
/* near start: 23 diffs with profile "1.2/sp3 -profile" */
#include "m2c.h"

typedef struct {
    s32 pad[4];
    s32 f10;
} R;
typedef struct {
    u32 p0 : 6;
    u32 f6 : 1;
    u32 f7 : 1;
    u32 r0 : 24;
    u32 w4;
    u32 p8 : 27;
    u32 kind : 2;
    u32 r8 : 3;
    u32 wc;
    R *f10;
    u8 pad[0xf4 - 0x14];
    u16 f4;
    u16 f6b;
    u16 pad2;
    u16 fa;
    u16 fc;
} U;

extern void getAnimation(s32, u32, u16, s32 *);

void changeUnitPatNo(U *arg0) {
    s32 sp[3];

    switch (arg0->kind) {
        case 1:
            getAnimation(arg0->f10->f10, arg0->f4, arg0->f6b, sp);
            break;
        case 2:
            getAnimation(arg0->f10->f10, arg0->f4, arg0->f6b, sp);
            break;
        default:
            getAnimation(arg0->f10->f10, ((u32) arg0->f4 >= 8U) ? (((s32) (arg0->f4 - 8) >> 1) + 8) : arg0->f4, arg0->f6b, sp);
            break;
    }
    arg0->fa = sp[0];
    if (arg0->f6 != 0 && arg0->fc != sp[2]) {
        arg0->f7 = 1;
    }
    arg0->fc = sp[2];
}
