/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
extern u8 data_0203673c[];
u32 GetJunbanKuniUnit(u32 a, u32 key) {
    u8 *q = *(u8 **) (*(u8 **) data_0203673c + 0x28);
    s32 i;
    for (i = 0; i < 0x25; i++) {
        u16 *t = (u16 *) (q + a * 0x2d0 + 0x200);
        u32 v  = t[i + 0x32];
        if (v == key) {
            return i;
        }
    }
    return 0x25;
}
