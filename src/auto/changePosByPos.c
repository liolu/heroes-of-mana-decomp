/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern void ChangeXYtoAreaMapScreenXY2(s32 *, s32 *);
extern u8 *data_ov000_02051548;

void changePosByPos(s32 *obj) {
    s32 x;
    s32 y;
    s32 v;
    x = *(s32 *) (data_ov000_02051548 + 0x1b4);
    y = *(s32 *) (data_ov000_02051548 + 0x1bc);
    ChangeXYtoAreaMapScreenXY2(&x, &y);
    obj[0] = x;
    obj[1] = y;
    v      = ((((u16) ((*(s32 *) (data_ov000_02051548 + 0x1e0) - 675 << 16) / 1200)) >> 14) + 2 & 3) + 0x3b;
    if (*(u16 *) ((u8 *) obj + 0x2a) != v) {
        *(s16 *) ((u8 *) obj + 0x2e) = 0;
        *(u16 *) ((u8 *) obj + 0x2a) = v;
        *(u16 *) ((u8 *) obj + 0x38) = 0x8000;
    }
}
