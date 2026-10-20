/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

extern u8 data_ov122_02063880[];

void func_ov122_02056ecc(s32 arg0) {
    s32 i;
    u8 *p;

    p = (u8 *) &data_ov122_02063880 + arg0 * 0x60;
    for (i = 0; i < 0xC; i++) {
        *(s32 *) (p + 0x68 + i * 8) = 0x200;
        *(s16 *) (p + 0x6C + i * 8) = 0;
    }
}
