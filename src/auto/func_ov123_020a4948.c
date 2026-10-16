#include "m2c.h"

extern s32 data_ov123_020e2048;

u8 func_ov123_020a4948(s32 arg0) {
    return M2C_FIELD(((arg0 * 0x30) + data_ov123_020e2048), u8 *, 0x1C);
}
