#include "m2c.h"

M2C_UNK OS_FreeToHeap(s32, M2C_UNK, s32);           /* extern */
extern M2C_UNK data_ov114_020e6148[];

void func_ov114_020e3098(void) {
    s32 i;

    for (i = 0; i < 4; i++) {
        OS_FreeToHeap(0, -1, data_ov114_020e6148[0x14A + i]);
    }
}
