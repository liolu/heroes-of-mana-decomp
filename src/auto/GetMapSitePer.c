/* compiler: 2.0/sp1p5 -profile */
/* near start: 6 diffs with profile "2.0/sp1p5 -profile" */
#include "m2c.h"
void ChangeXYtoAreaMapScreenXY2(s32 *, s32 *);
s32 CheckAreaMapMaskDot(s32, s32);
extern u8 *data_ov000_02051548;

s32 GetMapSitePer(void) {
    s32 i;
    s32 j;
    s32 cnt;
    s32 row;
    s32 y;
    s32 x;
    s32 x0;
    s32 p[2];
    u8 *t;
    cnt = 0;
    y   = -0x4E000;
    i   = 0;
    row = 0;
    x0  = -0x4E000;
    do {
        x = x0;
        j = 0;
        do {
            t = *(u8 **) (data_ov000_02051548 + 0x2E0);
            if (*(s32 *) (t + ((u16 *) t + row)[j]) == 0) {
                cnt += 1;
            } else {
                p[1] = x;
                p[0] = y;
                ChangeXYtoAreaMapScreenXY2(&p[1], &p[0]);
                if (CheckAreaMapMaskDot(p[1], p[0]) == 1) {
                    cnt += 1;
                }
            }
            j += 1;
            x += 0x4000;
        } while (j < 0x28);
        row += 0x28;
        i += 1;
        y += 0x4000;
    } while (i < 0x28);
    return cnt * 100 / 1600;
}
