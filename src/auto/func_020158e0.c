#include "m2c.h"

extern M2C_UNK data_0203a630;

s32 func_020158e0(s32 arg0) {
    return M2C_FIELD(&data_0203a630, u16 *, 0x38) & arg0;
}
