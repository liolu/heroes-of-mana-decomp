#include "m2c.h"

extern s32 data_ov113_020e4944[];

void func_ov113_020e27ac(void) {
    s32 i;

    for (i = 0; i < 0x80; i++) {
        data_ov113_020e4944[i * 2 + 4]            = 0x200;
        ((s16 *) data_ov113_020e4944)[i * 4 + 10] = 0;
    }
    data_ov113_020e4944[0x104] &= ~0xFF;
}
