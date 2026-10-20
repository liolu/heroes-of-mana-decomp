#include "m2c.h"

s32 func_0200ed38(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
extern s32 data_ov115_020e9160[];

s32 func_ov115_020e24b0(void) {
    s32 i;

    for (i = 0; i < 5; i++) {
        data_ov115_020e9160[i + 0x860 / 4] = func_0200ed38(0, -1, 0x800);
    }
    return 1;
}
