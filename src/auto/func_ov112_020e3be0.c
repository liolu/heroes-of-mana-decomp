/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

extern s32 data_ov112_020ec588[];

void func_ov112_020e3be0(void) {
    s32 i;

    for (i = 0; i < 0x80; i++) {
        data_ov112_020ec588[i * 2 + 4]                       = 0x200;
        *(s16 *) ((u8 *) data_ov112_020ec588 + i * 8 + 0x14) = 0;
    }
    data_ov112_020ec588[0x488 / 4] &= 0xFFF807FF;
}
