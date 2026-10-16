#include "m2c.h"

extern s32 data_ov123_020e46d0;

u8 func_ov123_020c317c(s32 arg0) {
    return M2C_FIELD((data_ov123_020e46d0 + (arg0 << 8)), u8 *, 0xE7);
}
