#include "m2c.h"

extern s32 data_ov116_020e71a8[];

void func_ov116_020e2830(void) {
    s32 i;

    for (i = 0; i < 0x80; i++) {
        data_ov116_020e71a8[i * 2 + 4] = 0x200;
        ((s16 *) data_ov116_020e71a8)[i * 4 + 10] = 0;
    }
    data_ov116_020e71a8[0x167] &= ~0xFF;
}
