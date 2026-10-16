/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s16 func_ov123_0206d460();                          /* extern */
extern M2C_UNK OSi_ThreadInfo;
extern s32 data_ov123_020df220;

void func_ov123_0206d34c(s16 arg0, u16 arg1, s32 arg2) {
    s32 var_r2;
    void *temp_r4;

    var_r2  = arg2;
    temp_r4 = M2C_FIELD(M2C_FIELD(&OSi_ThreadInfo, void **, 4), void **, 0xA4);
    if (temp_r4 == NULL) {
        return;
    }
    if (var_r2 == 0x7F000001) {
        var_r2 = data_ov123_020df220;
    }
    M2C_FIELD(temp_r4, u16 *, 0x1A) = arg1;
    M2C_FIELD(temp_r4, u16 *, 0x18) = (u16) M2C_FIELD(temp_r4, u16 *, 0x1A);
    M2C_FIELD(temp_r4, s32 *, 0x20) = var_r2;
    M2C_FIELD(temp_r4, s32 *, 0x1C) = (s32) M2C_FIELD(temp_r4, s32 *, 0x20);
    if (arg0 != 0) {
        M2C_FIELD(temp_r4, s16 *, 0xA) = arg0;
        return;
    }
    M2C_FIELD(temp_r4, s16 *, 0xA) = func_ov123_0206d460();
}
