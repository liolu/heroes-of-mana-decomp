#include "m2c.h"

extern M2C_UNK data_ov123_020e47a4;

s32 func_ov123_020cdb24(void) {
    if (M2C_FIELD(M2C_FIELD(&data_ov123_020e47a4, void **, 8), s32 *, 0xBD4) != 0) {
        return 1;
    }
    return 0;
}
