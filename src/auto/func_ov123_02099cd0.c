/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_02024c28(M2C_UNK *);                       /* extern */
s32 func_ov123_02098e78(M2C_UNK *, M2C_UNK);        /* extern */
M2C_UNK func_ov123_020990e0();                      /* extern */
s32 func_ov123_02099138(M2C_UNK *, M2C_UNK *);      /* extern */
extern M2C_UNK data_ov123_020dd344;
extern M2C_UNK func_ov123_02099778;
extern M2C_UNK func_ov123_020997c4;

s32 func_ov123_02099cd0(M2C_UNK *arg0, M2C_UNK arg1) {
    s32 var_r0;

    if (func_ov123_02099138(&func_ov123_020997c4, &func_ov123_02099778) == 0) {
        return 0;
    }
    if (func_02024c28(arg0) == 0) {
        var_r0 = func_ov123_02098e78(&data_ov123_020dd344, arg1);
    } else {
        var_r0 = func_ov123_02098e78(arg0, arg1);
    }
    if (var_r0 != 0) {
        return 1;
    }
    func_ov123_020990e0();
    return 0;
}
