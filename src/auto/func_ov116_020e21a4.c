#include "m2c.h"

extern M2C_UNK data_ov116_020e7b5c;

void func_ov116_020e21a4(void) {
    M2C_FIELD(&data_ov116_020e7b5c, s32 *, 0) =
        (s32) ((M2C_FIELD(&data_ov116_020e7b5c, s32 *, 4) * M2C_FIELD(&data_ov116_020e7b5c, s32 *, 0)) +
               M2C_FIELD(&data_ov116_020e7b5c, s32 *, 8));
}
