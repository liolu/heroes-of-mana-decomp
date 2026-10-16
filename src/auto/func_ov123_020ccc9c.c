#include "m2c.h"

extern s32 *data_ov123_020e47a0;

s32 func_ov123_020ccc9c(void) {
    if (data_ov123_020e47a0 == NULL) {
        return 1;
    }
    if (!(*data_ov123_020e47a0 & 0x30A)) {
        return 1;
    }
    return 0;
}
