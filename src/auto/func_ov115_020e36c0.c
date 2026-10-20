#include "m2c.h"

extern s32 data_ov115_020e9160[];

void func_ov115_020e36c0(void) {
    s32 i;

    for (i = 0; i < 0x80; i++) {
        data_ov115_020e9160[i * 2 + 4] = 0x200;
        ((s16 *) data_ov115_020e9160)[i * 4 + 10] = 0;
    }
    data_ov115_020e9160[0x216] &= ~0xFF;
}
