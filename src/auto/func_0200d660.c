#include "m2c.h"

extern M2C_UNK data_0203863c;

s32 func_0200d660(void) {
    return M2C_FIELD(&data_0203863c, s32 *, 0x20) = (s32) (M2C_FIELD(&data_0203863c, s32 *, 0x20) + 1);
}
