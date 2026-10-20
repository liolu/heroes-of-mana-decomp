#include "m2c.h"

void func_ov122_0205d06c(void *arg0) {
    s32 var_lr;
    u32 temp_r1;
    u32 temp_r3;
    u32 var_r4;
    void *temp_ip;

    var_lr = 0;
    temp_r1 = (u32) (M2C_FIELD(arg0, s32 *, 4) << 8) >> 0x18;
    var_r4 = 0;
    do {
        temp_ip = arg0 + var_lr;
        temp_r3 = M2C_FIELD(temp_ip, u8 *, 0x10);
        var_lr += 1;
        temp_r3 = (u8) temp_r1 + (u8) temp_r3;
        M2C_FIELD(temp_ip, u8 *, 0x10) = (u8) (temp_r3 + (u8) var_r4);
        var_r4 += (u8) temp_r1;
    } while (var_lr < 0x7FF0);
}


