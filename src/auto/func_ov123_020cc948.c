#include "m2c.h"

s32 func_ov123_0209967c(M2C_UNK *);                 /* extern */
extern s32 data_ov123_020e4798;

s32 func_ov123_020cc948(void) {
    M2C_UNK sp0;

    if (data_ov123_020e4798 != 0) {
        return 1;
    }
    if (func_ov123_0209967c(&sp0) != 0) {
        return 1;
    }
    return 0;
}
