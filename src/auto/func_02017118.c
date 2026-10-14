#include "m2c.h"

extern M2C_UNK data_0203a780;

s32 func_02017118(void) {
    if (!(M2C_FIELD(&data_0203a780, s32 *, 0x114) & 4)) {
        return 1;
    }
    return 0;
}
