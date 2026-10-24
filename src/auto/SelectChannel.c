/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
extern s32 data_ov003_020b6440[];

s16 SelectChannel(u16 mask) {
    s16 last = 0;
    u16 cnt  = 0;
    s16 i    = 0;
    s16 k;
    u32 r;
    s32 seed;
    do {
        if (mask & (1 << i)) {
            last = i + 1;
            cnt += 1;
        }
        i += 1;
    } while (i < 16);
    if (cnt <= 1) {
        return last;
    }
    k                        = 0;
    seed                     = data_ov003_020b6440[0xB] * 0x10DCD + 0x3039;
    data_ov003_020b6440[0xB] = seed;
    r                        = (u32) ((u32) (cnt * (u8) seed) << 8) >> 16;
    do {
        if (mask & 1) {
            if (r == 0) {
                return k + 1;
            }
            r = (u16) (r - 1);
        }
        mask >>= 1;
        k += 1;
    } while (k < 16);
    return 0;
}
