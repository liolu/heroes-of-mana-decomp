/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_ov123_02078718(void *arg0, u32 *arg1, u32 arg2) {
    u32 var_lr;
    void *var_r0;
    u32 temp_r3;
    u32 temp_ip;
    u32 *var_r1;

    var_r0  = arg0;
    var_r1  = arg1;
    temp_ip = arg2 >> 2;
    var_lr  = 0;
    if (temp_ip == 0) {
        return;
    }
    do {
        temp_r3 = *var_r1;
        var_r1  = (void *) ((u8 *) (u8 *) var_r1 + 4);
        var_lr += 1;
        M2C_FIELD(var_r0, s8 *, 0) = (s8) (temp_r3 >> 0x18);
        M2C_FIELD(var_r0, s8 *, 1) = (s8) (temp_r3 >> 0x10);
        M2C_FIELD(var_r0, s8 *, 2) = (s8) (temp_r3 >> 8);
        M2C_FIELD(var_r0, s8 *, 3) = (s8) temp_r3;
        var_r0                     = (void *) ((u8 *) (u8 *) var_r0 + 4);
    } while (var_lr < temp_ip);
}
