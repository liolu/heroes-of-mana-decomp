#include "m2c.h"

s32 func_ov123_020a59b4(M2C_UNK *, M2C_UNK);        /* extern */
s32 func_ov123_020a6378(M2C_UNK *);                 /* extern */

s32 func_ov123_020a6334(M2C_UNK arg0) {
    u8 sp0[24];

    if (func_ov123_020a6378(sp0) == 0) {
        return 0;
    }
    if (func_ov123_020a59b4(sp0, arg0) != 0) {
        return 1;
    }
    return 0;
}
