#include "m2c.h"

extern s32 data_ov114_020e6148[];

void func_ov114_020e2170(void) {
    s32 i;

    for (i = 0; i < 0x80; i++) {
        data_ov114_020e6148[i * 2 + 4]            = 0x200;
        ((s16 *) data_ov114_020e6148)[i * 4 + 10] = 0;
    }
    data_ov114_020e6148[0x145] &= ~0xFF;
}
