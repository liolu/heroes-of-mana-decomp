#include "m2c.h"

extern M2C_UNK data_ov115_020e9a34;

void func_ov115_020e2744(void) {
    M2C_FIELD(&data_ov115_020e9a34, s32 *, 0) =
        (s32) ((M2C_FIELD(&data_ov115_020e9a34, s32 *, 4) * M2C_FIELD(&data_ov115_020e9a34, s32 *, 0)) +
               M2C_FIELD(&data_ov115_020e9a34, s32 *, 8));
}
