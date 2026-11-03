#include "m2c.h"

extern s32 data_ov113_020e4944[];

void func_ov113_020e2fb0(void) {
    s32 i;
    s32 v;

    i = 0;
    do {
        v = data_ov113_020e4944[i + 0x28E];
        if (v != 0) {
            data_ov113_020e4944[i + 0x28E] = v - 0x10;
        }
        i += 1;
    } while (i < 5);
}
