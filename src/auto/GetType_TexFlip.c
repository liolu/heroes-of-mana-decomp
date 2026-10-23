/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
s32 GetType_TexFlip(s32 a, s32 b) {
    if (a == 2) {
        if (b == 2) {
            return 3;
        }
        return 1;
    }
    if (b == 2) {
        return 2;
    }
    return 0;
}
