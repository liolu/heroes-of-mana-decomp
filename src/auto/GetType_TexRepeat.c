/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
s32 GetType_TexRepeat(s32 a, s32 b) {
    if (a) {
        if (b) {
            return 3;
        }
        return 1;
    }
    if (b) {
        return 2;
    }
    return 0;
}
