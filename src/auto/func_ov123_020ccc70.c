#include "m2c.h"

extern s32 *data_ov123_020e47a0;

s32 func_ov123_020ccc70(void) {
    if (data_ov123_020e47a0 == NULL) {
        return 0;
    }
    if (*data_ov123_020e47a0 & 8) {
        return 1;
    }
    return 0;
}
