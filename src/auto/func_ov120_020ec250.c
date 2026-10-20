/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

extern s32 data_ov120_020f46dc[];

void func_ov120_020ec250(void) {
    s32 i;

    for (i = 0; i < 0x80; i++) {
        data_ov120_020f46dc[i * 2 + 4] = 0x200;
        *(s16 *)((u8 *)data_ov120_020f46dc + i * 8 + 0x14) = 0;
    }
    data_ov120_020f46dc[0xA14 / 4] &= ~0xFF;
}
