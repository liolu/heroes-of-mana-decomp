/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_02020d04(M2C_UNK *, M2C_UNK *, M2C_UNK, s32); /* extern */
M2C_UNK func_ov123_0208ab90(void *);                /* extern */
extern M2C_UNK data_ov123_020db4f0;
extern M2C_UNK data_ov123_020db4f8;

s32 func_ov123_02087630(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, s32 arg4, s32 *arg5) {
    s32 var_r5;

    var_r5 = arg3;
    *arg5  = 0;
    if (arg0 == NULL) {
        func_02020d04(&data_ov123_020db4f0, &data_ov123_020db4f8, 0, 0x197);
    }
    if (arg0 == NULL) {
        return 1;
    }
    if (M2C_FIELD(arg0, s32(**)(void *, M2C_UNK, M2C_UNK, s32, s32), 0x30) == NULL) {
        return 1;
    }
    if ((arg4 == 0) || (var_r5 == 0)) {
        var_r5 = 0;
        arg4   = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + 1);
    *arg5 = M2C_FIELD(arg0, s32(**)(void *, M2C_UNK, M2C_UNK, s32, s32), 0x30)(arg0, arg1, arg2, var_r5, arg4);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) - 1);
    if ((M2C_FIELD(arg0, s32 *, 0x14) != 0) && (M2C_FIELD(arg0, s32 *, 0x1C) == 0)) {
        func_ov123_0208ab90(arg0);
        return 0;
    }
    return 1;
}
