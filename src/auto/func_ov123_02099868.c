#include "m2c.h"

extern void *data_ov123_020e172c;

s32 func_ov123_02099868(void) {
    if ((data_ov123_020e172c != NULL) && (M2C_FIELD(data_ov123_020e172c, u16 *, 4) == 6)) {
        return 1;
    }
    return 0;
}
