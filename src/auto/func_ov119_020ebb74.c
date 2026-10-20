/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

extern s32 data_ov119_020f2258[];

void func_ov119_020ebb74(void) {
    s32 i;

    for (i = 0; i < 0x80; i++) {
        data_ov119_020f2258[i * 2 + 14] = 0x200;
        *(s16 *)((u8 *)data_ov119_020f2258 + i * 8 + 0x3C) = 0;
    }
    data_ov119_020f2258[0x34 / 4] &= 0xFFFFF807;
}
