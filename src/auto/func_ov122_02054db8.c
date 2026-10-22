/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

extern s32 data_ov122_02065604[];

void func_ov122_02054db8(void) {
    s32 i;

    for (i = 0; i < 0x80; i++) {
        data_ov122_02065604[i * 2 + 4]                       = 0x200;
        *(s16 *) ((u8 *) data_ov122_02065604 + i * 8 + 0x14) = 0;
    }
    data_ov122_02065604[0xDD8 / 4] &= ~0xFF0000;
}
