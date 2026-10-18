#include "m2c.h"

s32 func_ov123_020cef0c(M2C_UNK);                   /* extern */
s32 *func_ov123_020cef20(M2C_UNK, M2C_UNK);         /* extern */

void func_ov123_020cfa3c(void *arg0, M2C_UNK arg1) {
    s32 *temp_r0;
    u32 var_r2;
    u16 temp_r0_2;
    u16 temp_r1;
    void *var_r3;
    void *var_ip;

    temp_r0                   = func_ov123_020cef20(arg1, 0x18);
    var_ip                    = (u8 *) temp_r0 + 4;
    M2C_FIELD(arg0, s32 *, 4) = (s32) *temp_r0;
    var_r3                    = arg0 + 8;
    var_r2                    = 5;
    do {
        temp_r1   = M2C_FIELD(var_ip, u16 *, 0);
        temp_r0_2 = M2C_FIELD(var_ip, u16 *, 2);
        var_ip += 4;
        var_r2 -= 1;
        M2C_FIELD(var_r3, u16 *, 0) = temp_r1;
        M2C_FIELD(var_r3, u16 *, 2) = temp_r0_2;
        var_r3 += 4;
    } while (var_r2 != 0);
    M2C_FIELD(arg0, s32 *, 0x1C) = func_ov123_020cef0c(arg1);
    M2C_FIELD(arg0, s32 *, 0x20) = func_ov123_020cef0c(arg1);
    M2C_FIELD(arg0, s32 *, 0x24) = func_ov123_020cef0c(arg1);
}
