/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_02020d04(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02021318(s32, s32, s32);               /* extern */
s32 func_02024c28(s32);                             /* extern */
extern M2C_UNK data_ov123_020db45c;
extern M2C_UNK data_ov123_020db48c;

void func_ov123_02087490(void *arg0, s32 arg1, s32 arg2) {
    s32 var_r4;

    var_r4 = arg2;
    if (arg1 == 0) {
        return;
    }
    if (var_r4 == 0) {
        return;
    }
    if (var_r4 == -1) {
        var_r4 = func_02024c28(arg1);
    }
    if ((s32) (M2C_FIELD(arg0, s32 *, 8) + var_r4) > (s32) M2C_FIELD(arg0, s32 *, 4)) {
        func_02020d04(&data_ov123_020db48c, &data_ov123_020db45c, 0, 0x40);
    }
    func_02021318(M2C_FIELD(arg0, s32 *, 0) + M2C_FIELD(arg0, s32 *, 8), arg1, var_r4);
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + var_r4);
}
