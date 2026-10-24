/* compiler: 2.0/sp1p5 -profile */
/* near start: 1 diffs with profile "2.0/sp1p5 -profile" */
#include "m2c.h"
s32 GetNoCariStByJunban(s32 mask, s32 n) {
    s32 bit = 1;
    s32 i   = 0;
    do {
        if (bit & mask) {
            if (n == 0) {
                return i;
            }
            n--;
        }
        i++;
        bit <<= 1;
    } while (i < 16);
    return 0;
}
