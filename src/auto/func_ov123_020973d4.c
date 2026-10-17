#include "m2c.h"

M2C_UNK func_0200cdbc(M2C_UNK *, M2C_UNK, M2C_UNK *, s32); /* extern */
s32 func_02024c28(s32);                             /* extern */
s32 func_02024f10(s32, M2C_UNK *);                  /* extern */
s32 func_ov123_02096af4(void *, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK data_ov123_020dc1a0;
extern M2C_UNK data_ov123_020dc36c;
extern M2C_UNK data_ov123_020dc378;
extern M2C_UNK data_ov123_020dc380;
extern M2C_UNK data_ov123_020dc384;

s32 func_ov123_020973d4(void *arg0) {
    u8 sp0[8];
    s32 temp_r0;

    if (func_ov123_02096af4(arg0, &data_ov123_020dc36c, &data_ov123_020dc378) != 0) {
        return 1;
    }
    temp_r0 = func_02024c28(func_02024f10(M2C_FIELD(arg0, s32 *, 0x19F8), &data_ov123_020dc1a0) + 4);
    if (temp_r0 != 0) {
        func_0200cdbc(sp0, 7, &data_ov123_020dc380, temp_r0);
        if (func_ov123_02096af4(arg0, &data_ov123_020dc384, sp0) != 0) {
            return 1;
        }
    }
    return 0;
}
