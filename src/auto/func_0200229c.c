#include "m2c.h"

extern void *data_0203673c;

void func_0200229c(void) {
    s32 temp_ip;
    s32 temp_ip_2;
    s32 var_r0;
    s32 var_r1;
    u32 temp_r3;
    void *temp_lr;

    var_r0 = 0;
    var_r1 = 0;
    do {
        temp_ip = M2C_FIELD(data_0203673c, s32 *, 0x24);
        temp_lr = temp_ip + var_r1;
        if (((u32) (*(s32 *) (temp_ip + var_r1) << 0x1F) >> 0x1F) == 0) {
            temp_ip_2 = M2C_FIELD(temp_lr, s32 *, 8);
            temp_r3   = (u32) (temp_ip_2 * 4) >> 0x1B;
            if (temp_r3 != 0) {
                M2C_FIELD(temp_lr, s32 *, 8) = (s32) ((temp_ip_2 & ~0x3E000000) | ((u32) ((temp_r3 - 1) << 0x1B) >> 2));
            }
        }
        var_r0 += 1;
        var_r1 += 0x34;
    } while (var_r0 < 0x58);
}