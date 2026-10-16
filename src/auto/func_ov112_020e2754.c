#include "m2c.h"

extern M2C_UNK data_ov112_020eedb0;

void func_ov112_020e2754(void) {
    M2C_FIELD(&data_ov112_020eedb0, s32 *, 8) =
        (s32) ((M2C_FIELD(&data_ov112_020eedb0, s32 *, 0xC) * M2C_FIELD(&data_ov112_020eedb0, s32 *, 8)) +
               M2C_FIELD(&data_ov112_020eedb0, s32 *, 0x10));
}
