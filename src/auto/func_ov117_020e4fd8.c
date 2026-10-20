#include "m2c.h"

extern s32 data_ov117_020f23e0[];

void func_ov117_020e4fd8(void) {
    s32 i;

    for (i = 0; i < 0x80; i++) {
        data_ov117_020f23e0[i * 2 + 5] = 0x200;
        ((s16 *) data_ov117_020f23e0)[i * 4 + 12] = 0;
    }
    data_ov117_020f23e0[0x2ac] &= ~0xFF;
}
