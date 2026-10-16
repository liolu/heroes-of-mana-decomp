#include "m2c.h"

extern M2C_UNK data_ov111_020f13c0;

void func_ov111_020e68ec(void) {
    void *temp_r0_2;
    s32 var_r3;
    s32 var_ip;
    u16 temp_r2;
    void *temp_r0;

    var_r3 = 0;
    if ((s32) M2C_FIELD(&data_ov111_020f13c0, u16 *, 0) <= 0) {
        return;
    }
    var_ip = 0;
    do {
        var_r3 += 1;
        temp_r0   = M2C_FIELD(&data_ov111_020f13c0, s32 *, 4) + var_ip;
        temp_r0_2 = temp_r0 + 0x500;
        temp_r2   = M2C_FIELD(temp_r0, u16 *, 0x50E);
        var_ip += 0x510;
        M2C_FIELD(temp_r0_2, s16 *, 0xE) = (s16) (temp_r2 & ~8);
    } while (var_r3 < (s32) M2C_FIELD(&data_ov111_020f13c0, u16 *, 0));
}
