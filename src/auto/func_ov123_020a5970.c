#include "m2c.h"

s32 func_ov123_020a5130(M2C_UNK, M2C_UNK, u16 *);   /* extern */
extern s32 data_ov123_020e2054;

s32 func_ov123_020a5970(u16 *arg0) {
    if (func_ov123_020a5130(0x20, 0x20, arg0) == 0) {
        return 0;
    }
    data_ov123_020e2054 = (*arg0 * 8) - 0x400;
    return 1;
}
