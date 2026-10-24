/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct I {
    u32 on : 1;
    u32 r : 31;
    u8 pad[0x3c];
    s32 x;
    u32 pad2;
    s32 y;
    u8 pad3[0x30];
    s32 *dst;
    u8 pad4[0x90];
} I;
extern I data_ov003_020b0cf0[];
void ChangeXYtoAreaMapScreenXY2(s32 *, s32 *);

void MovePartysIconInAreaMapByMapXY(void) {
    s32 x;
    s32 y;
    s32 i;
    I *p = data_ov003_020b0cf0;
    for (i = 0; i < 0x42; i++, p++) {
        if (p->on) {
            x = p->x;
            y = p->y;
            ChangeXYtoAreaMapScreenXY2(&x, &y);
            if (p->dst != NULL) {
                p->dst[0] = x;
                p->dst[1] = y;
            }
        }
    }
}
