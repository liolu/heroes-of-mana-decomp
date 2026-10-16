#include "m2c.h"

extern M2C_UNK data_ov117_020f3dc0;

void func_ov117_020e3888(void) {
    M2C_FIELD(&data_ov117_020f3dc0, s32 *, 0) =
        (s32) ((M2C_FIELD(&data_ov117_020f3dc0, s32 *, 4) * M2C_FIELD(&data_ov117_020f3dc0, s32 *, 0)) +
               M2C_FIELD(&data_ov117_020f3dc0, s32 *, 8));
}
