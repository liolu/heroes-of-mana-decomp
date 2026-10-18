/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_02020d04(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s32 func_ov123_0207a204(s32);                       /* extern */
s32 func_ov123_0207dff4(M2C_UNK, s32, s32, s32, M2C_UNK *, s32 *, M2C_UNK *); /* extern */
s32 func_ov123_0207e158(M2C_UNK, void *, s32, s32); /* extern */
extern M2C_UNK data_ov123_020da0e4;
extern M2C_UNK data_ov123_020da1e0;
extern M2C_UNK data_ov123_020da204;

s32 func_ov123_0207de14(M2C_UNK arg0, void *arg1, s32 arg2, s32 arg3) {
    M2C_UNK spC;
    s32 sp10;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 var_r6;
    s32 var_r7;

    var_r7 = arg3;
    if (M2C_FIELD(arg1, s32 *, 0x28) == 0) {
        func_02020d04(&data_ov123_020da1e0, &data_ov123_020da0e4, 0, 0xFB);
    }
    var_r6 = 0;
    if (var_r7 == 0) {
        return 0;
    }
    if (((M2C_FIELD(arg1, s32 *, 0x30) - M2C_FIELD(arg1, s32 *, 0x34)) == 0) &&
        (func_ov123_0207a204(M2C_FIELD(arg1, s32 *, 0x38)) == 0)) {
    loop_7:
        temp_r0_2 =
            func_ov123_0207dff4(arg0, M2C_FIELD(arg1, s32 *, 8), arg2 + var_r6, var_r7, &spC, &sp10, &data_ov123_020da204);
        if (temp_r0_2 != 0) {
            return temp_r0_2;
        }
        if (sp10 != 0) {
            var_r6 += sp10;
            var_r7 -= sp10;
        }
        if ((sp10 == 0) || (var_r7 == 0)) {
            goto block_13;
        }
        goto loop_7;
    }
block_13:
    if (var_r7 != 0) {
        temp_r0 = func_ov123_0207e158(arg0, arg1 + 0x28, arg2 + var_r6, var_r7);
        if (temp_r0 != 0) {
            return temp_r0;
        }
    }
    return 0;
}
