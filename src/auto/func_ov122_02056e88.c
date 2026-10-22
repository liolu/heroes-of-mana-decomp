/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

extern M2C_UNK data_ov122_02064020;

void func_ov122_02056e88(s32 arg0) {
    s32 i;
    u8 *base;
    u8 *p;

    base = (u8 *) &data_ov122_02064020 + arg0 * 0x60;
    for (i = 0; i < 0xC; i++) {
        p                    = base + i * 8;
        *(s32 *) (p + 0x68)  = 0x200;
        *(s16 *) (p + 0x6C)  = 0;
        *(s32 *) (p + 0x2A8) = 0x200;
        *(s16 *) (p + 0x2AC) = 0;
    }
}
