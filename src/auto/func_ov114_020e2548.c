#include "m2c.h"

extern M2C_UNK data_ov114_020e6100;

void func_ov114_020e2548(void) {
    M2C_FIELD(&data_ov114_020e6100, s32 *, 0) =
        (s32) ((M2C_FIELD(&data_ov114_020e6100, s32 *, 4) * M2C_FIELD(&data_ov114_020e6100, s32 *, 0)) +
               M2C_FIELD(&data_ov114_020e6100, s32 *, 8));
}
