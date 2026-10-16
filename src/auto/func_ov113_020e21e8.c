#include "m2c.h"

extern M2C_UNK data_ov113_020e5390;

void func_ov113_020e21e8(void) {
    M2C_FIELD(&data_ov113_020e5390, s32 *, 0) =
        (s32) ((M2C_FIELD(&data_ov113_020e5390, s32 *, 4) * M2C_FIELD(&data_ov113_020e5390, s32 *, 0)) +
               M2C_FIELD(&data_ov113_020e5390, s32 *, 8));
}
