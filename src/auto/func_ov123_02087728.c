/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_02020d04(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_ov123_0208ab90(void *);                /* extern */
extern M2C_UNK data_ov123_020db4f0;
extern M2C_UNK data_ov123_020db4f8;

s32 func_ov123_02087728(void *arg0, void *arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    M2C_UNK (*var_ip)(void *, void *, M2C_UNK, M2C_UNK, s32, s32, s32);

    if (arg0 == NULL) {
        func_02020d04(&data_ov123_020db4f0, &data_ov123_020db4f8, 0, 0x160);
    }
    if (arg0 == NULL) {
        return 1;
    }
    if (arg7 != 0) {
        var_ip = M2C_FIELD(arg0, M2C_UNK(**)(void *, void *, M2C_UNK, M2C_UNK, s32, s32, s32), 0x28);
    } else {
        var_ip = M2C_FIELD(arg0, M2C_UNK(**)(void *, void *, M2C_UNK, M2C_UNK, s32, s32, s32), 0x2C);
    }
    if (var_ip == NULL) {
        return 1;
    }
    if ((arg6 == 0) || (arg5 == 0)) {
        arg5 = 0;
        arg6 = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + 1);
    if (arg1 != NULL) {
        M2C_FIELD(arg1, s32 *, 0x24) = (s32) (M2C_FIELD(arg1, s32 *, 0x24) + 1);
    }
    var_ip(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) - 1);
    if (arg1 != NULL) {
        M2C_FIELD(arg1, s32 *, 0x24) = (s32) (M2C_FIELD(arg1, s32 *, 0x24) - 1);
    }
    if ((M2C_FIELD(arg0, s32 *, 0x14) != 0) && (M2C_FIELD(arg0, s32 *, 0x1C) == 0)) {
        func_ov123_0208ab90(arg0);
        return 0;
    }
    return 1;
}
