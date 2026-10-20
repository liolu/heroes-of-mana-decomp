/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

extern s32 data_ov121_020f6d60[];

void func_ov121_020eae68(void) {
    s32 i;

    for (i = 0; i < 0x80; i++) {
        data_ov121_020f6d60[i * 2 + 4] = 0x200;
        *(s16 *)((u8 *)data_ov121_020f6d60 + i * 8 + 0x14) = 0;
    }
    data_ov121_020f6d60[0xA48 / 4] &= ~0xFF0000;
}
