/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
u32 GetType_TexSizeS(u32 size) {
    if (size == 0x8) {
        return 0;
    }
    if (size == 0x10) {
        return 1;
    }
    if (size == 0x20) {
        return 2;
    }
    if (size == 0x40) {
        return 3;
    }
    if (size == 0x80) {
        return 4;
    }
    if (size == 0x100) {
        return 5;
    }
    if (size == 0x200) {
        return 6;
    }
    return 7;
}
