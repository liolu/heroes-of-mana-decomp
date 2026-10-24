/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern s32 data_ov109_020ea1d4[];

s32 GetShisetuBoardPos(s32 x, s32 y) {
    s32 i;
    s32 j;
    for (i = 0, j = i; i < 8; i++, j += 2) {
        s32 dx = data_ov109_020ea1d4[j] - x;
        s32 dy;
        s32 t;
        if (dx < 0) {
            dx = -dx;
        }
        dy = data_ov109_020ea1d4[j + 1] - y;
        if (dy < 0) {
            dy = -dy;
        }
        t = dy * 20 / 14;
        if (dx * dx + t * t <= 400) {
            return i + 1;
        }
    }
    return 0;
}
