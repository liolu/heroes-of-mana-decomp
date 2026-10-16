#include "m2c.h"

s32 func_ov123_020d26f0();                          /* extern */

s32 func_ov123_020cfeb8(s32 arg0, s32 arg1) {
    return (func_ov123_020d26f0() * 0xA00) + (arg0 + 4) + (arg1 << 9);
}
