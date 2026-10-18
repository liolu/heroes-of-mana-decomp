#include "m2c.h"

s32 func_02008fb4(u16, M2C_UNK);                    /* extern */
extern u16 data_ov123_020e4670;

s32 func_ov123_020bb640(s32 arg0) {
    {
        s32 hunt_t = func_02008fb4(data_ov123_020e4670, 0x1D);
        return hunt_t + arg0;
    }
}
