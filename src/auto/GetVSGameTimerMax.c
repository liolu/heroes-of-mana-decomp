/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
extern u8 data_ov003_020b532c[];
extern s32 data_ov003_020ac014[];
s32 GetVSGameTimerMax(void) {
    if (data_ov003_020b532c[1] >= 4) {
        data_ov003_020b532c[1] = 3;
    }
    return data_ov003_020ac014[data_ov003_020b532c[1]];
}
