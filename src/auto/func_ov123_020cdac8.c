#include "m2c.h"

extern M2C_UNK data_ov123_020e47a4;

s32 func_ov123_020cdac8(s32 arg0) {
    switch (arg0) {                                 /* irregular */
        case 0:
            return M2C_FIELD(&data_ov123_020e47a4, s32 *, 8) + 0x17C;
        case 1:
            return M2C_FIELD(&data_ov123_020e47a4, s32 *, 8) + 0x590;
        default:
            return 0;
    }
}
