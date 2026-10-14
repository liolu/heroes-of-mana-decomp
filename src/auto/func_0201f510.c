#include "m2c.h"

extern M2C_UNK data_020415e0;

s32 func_0201f510(void) {
    if (M2C_FIELD(M2C_FIELD(&data_020415e0, void **, 8), u8 *, 0x50D) == 1) {
        return 1;
    }
    return 0;
}
