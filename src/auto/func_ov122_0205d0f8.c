#include "m2c.h"
u8 func_ov122_0205d0f8(u8 *a) {
    u32 i;
    u8 s;
    s = 0;
    for (i = 0; i < 14; i++) {
        s += (u8) (a[i] ^ 0xFF);
    }
    return s;
}
