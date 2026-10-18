#include "m2c.h"

extern u16 data_ov117_020f0fc4;

void func_ov117_020e24a8(void) {
    s32 var_r1;
    u16 *var_r2;

    var_r2 = &data_ov117_020f0fc4;
    var_r1 = 0;
    do {
        var_r1 += 1;
        *var_r2 &= ~4;
        *var_r2 &= ~8;
        *var_r2 &= ~0x10;
        var_r2 = (void *) ((u8 *) (u8 *) var_r2 + 2);
    } while (var_r1 < 0x80);
}
