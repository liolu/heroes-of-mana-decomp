#include "m2c.h"

extern M2C_UNK data_ov119_020f2f5c;

void func_ov119_020eb1d0(void) {
    M2C_FIELD(&data_ov119_020f2f5c, s32 *, 0) =
        (s32) ((M2C_FIELD(&data_ov119_020f2f5c, s32 *, 4) * M2C_FIELD(&data_ov119_020f2f5c, s32 *, 0)) +
               M2C_FIELD(&data_ov119_020f2f5c, s32 *, 8));
}
