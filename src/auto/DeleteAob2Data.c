/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

void ResetVramMapX(s32, s32, s32);

void DeleteAob2Data(u16 (*base)[2]) {
    u16 i;
    for (i = 0; i < 2; i++) {
        u16 j;
        for (j = 0; j < 2; j++) {
            if (base[i][j] != 0xFFFF) {
                ResetVramMapX(base[i][j], base[i][j + 4], i);
                base[i][j]              = 0xFFFF;
                ((u8 *) base)[i + 0x18] = 0;
            }
        }
    }
}
