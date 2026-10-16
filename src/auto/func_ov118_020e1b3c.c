#include "m2c.h"

extern M2C_UNK data_ov118_020e3730;

void func_ov118_020e1b3c(void) {
    M2C_FIELD(&data_ov118_020e3730, s32 *, 0) =
        (s32) ((M2C_FIELD(&data_ov118_020e3730, s32 *, 4) * M2C_FIELD(&data_ov118_020e3730, s32 *, 0)) +
               M2C_FIELD(&data_ov118_020e3730, s32 *, 8));
}
