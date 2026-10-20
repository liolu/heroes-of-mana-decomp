#include "m2c.h"

M2C_UNK OS_FreeToHeap(s32, M2C_UNK, s32);           /* extern */
extern M2C_UNK data_ov116_020e71a8[];

void func_ov116_020e2134(void) {
    s32 i;

    for (i = 0; i < 3; i++) {
        OS_FreeToHeap(0, -1, data_ov116_020e71a8[0x164 + i]);
    }
}
