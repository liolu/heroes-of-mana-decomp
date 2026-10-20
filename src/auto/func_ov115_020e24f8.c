#include "m2c.h"

M2C_UNK OS_FreeToHeap(s32, M2C_UNK, s32);           /* extern */
extern M2C_UNK data_ov115_020e9160[];

void func_ov115_020e24f8(void) {
    s32 i;

    for (i = 0; i < 5; i++) {
        OS_FreeToHeap(0, -1, data_ov115_020e9160[0x218 + i]);
    }
}
