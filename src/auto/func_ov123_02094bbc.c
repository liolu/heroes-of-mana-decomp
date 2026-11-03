/* compiler: 1.2/sp3 */
/* near start: 9 diffs with profile "1.2/sp3" */
/* near: 9 diffs, profile 1.2/sp3 (u8 sp0[0x98] frame); diffs in top block (ldr order / arg copies after cmp) */
#include "m2c.h"

s32 func_02024c28(M2C_UNK *);                       /* extern */
s32 func_02028c88(M2C_UNK *);                       /* extern */
s32 func_ov123_02095a88(M2C_UNK, M2C_UNK *, s32);   /* extern */
s32 func_ov123_02095dd4(M2C_UNK *, u64 *);      /* extern */
s32 func_ov123_020969c4(M2C_UNK, M2C_UNK *, M2C_UNK *, s32); /* extern */
extern M2C_UNK data_ov123_020dbf50;
extern M2C_UNK data_ov123_020dbf5c;
extern M2C_UNK data_ov123_020dbf64;
extern M2C_UNK data_ov123_020dbf6c;
extern M2C_UNK data_ov123_020dbf74;
extern M2C_UNK data_ov123_020dbf78;
extern M2C_UNK data_ov123_020dbf80;
extern s32 data_ov123_020e1670;
extern u64 data_ov123_020e167c;
extern s32 data_ov123_020e1698;

s32 func_ov123_02094bbc(M2C_UNK arg0, M2C_UNK *arg1, M2C_UNK *arg2) {
    u8 sp0[0x98];

    if (data_ov123_020e167c == 0) {
        if (func_ov123_020969c4(arg0, &data_ov123_020dbf5c, &data_ov123_020dbf50, func_02024c28(&data_ov123_020dbf50)) != 0) {
            return 8;
        }
        goto block_10;
    }
    if (func_ov123_020969c4(arg0, &data_ov123_020dbf5c, &data_ov123_020dbf64, func_02024c28(&data_ov123_020dbf64)) != 0) {
        return 8;
    }
    if (func_ov123_020969c4(arg0, &data_ov123_020dbf6c, arg1, func_02024c28(arg1)) != 0) {
        return 8;
    }
block_10:
    if (func_ov123_02095dd4((M2C_UNK *) sp0, &data_ov123_020e167c) == 0) {
        return 5;
    }
    if (func_ov123_02095a88(arg0, (M2C_UNK *) sp0, data_ov123_020e1698) == 0) {
        return 8;
    }
    if ((data_ov123_020e1670 == 1) &&
        (func_ov123_020969c4(arg0, &data_ov123_020dbf78, &data_ov123_020dbf74, func_02024c28(&data_ov123_020dbf74)) != 0)) {
        return 8;
    }
    if ((func_02028c88(arg2) != 0) && (func_ov123_020969c4(arg0, &data_ov123_020dbf80, arg2, func_02028c88(arg2) * 2) != 0)) {
        return 8;
    }
    return 0;
}
