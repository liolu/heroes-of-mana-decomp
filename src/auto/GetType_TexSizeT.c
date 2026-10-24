/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
s32 GetType_TexSizeT(s32 n) {
    s32 r;
    if (n == 0x8) {
        r = 0;
    } else if (n == 0x10) {
        r = 1;
    } else if (n == 0x20) {
        r = 2;
    } else if (n == 0x40) {
        r = 3;
    } else if (n == 0x80) {
        r = 4;
    } else if (n == 0x100) {
        r = 5;
    } else if (n == 0x200) {
        r = 6;
    } else {
        r = 7;
    }
    return r;
}
