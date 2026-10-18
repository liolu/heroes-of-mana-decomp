/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK MIi_CpuClear32(M2C_UNK, M2C_UNK *, s32);    /* extern */
M2C_UNK func_ov123_02099778(M2C_UNK, s32, M2C_UNK); /* extern */
extern M2C_UNK data_ov123_020e1910;

void func_ov123_0209e5c4(void) {
    s32 var_r7;
    u8 *var_r6;
    s32 temp_r1;

    var_r6 = (u8 *) &data_ov123_020e1910;
    var_r7 = 0;
    do {
        temp_r1 = *(s32 *) (var_r6 + 4);
        if (temp_r1 != 0) {
            func_ov123_02099778(4, temp_r1, 0);
        }
        var_r7 += 1;
        var_r6 += 12;
    } while (var_r7 < 0x9A);
    MIi_CpuClear32(0, &data_ov123_020e1910, 0x738);
}
