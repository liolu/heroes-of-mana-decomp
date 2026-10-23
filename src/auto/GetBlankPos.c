/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 GetBlankPos(s32 *grid, s32 *ox, s32 *oy) {
    s32 x   = 5;
    s32 y   = 5;
    s32 cnt = 0x79;
    s32 dir = 6;
    s32 n   = 1;
    s32 k   = 1;
    do {
        if (x >= 0 && x < 11 && y >= 0 && y < 11 && grid[y * 11 + x] != 0) {
            *ox = x;
            *oy = y;
            return 1;
        }
        switch (dir) {
            case 6:
                if (n != 0) {
                    n--;
                }
                x--;
                if (n == 0) {
                    dir = 4;
                    n   = k;
                }
                break;
            case 4:
                y++;
                if (n != 0) {
                    n--;
                }
                if (n == 0) {
                    k++;
                    dir = 2;
                    n   = k;
                }
                break;
            case 2:
                if (n != 0) {
                    n--;
                }
                x++;
                if (n == 0) {
                    dir = 0;
                    n   = k;
                }
                break;
            case 0:
                if (n != 0) {
                    n--;
                }
                y--;
                if (n == 0) {
                    k++;
                    dir = 6;
                    n   = k;
                }
                break;
        }
        cnt--;
    } while (cnt > 0);
    return 0;
}
