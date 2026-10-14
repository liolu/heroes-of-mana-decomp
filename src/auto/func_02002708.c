/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern void *data_0203673c;

void func_02002708(void) {
    s32 *var_r2;
    s32 var_r1;

    var_r1 = 0;
    var_r2 = M2C_FIELD(data_0203673c, s32 **, 0x28);
    do {
        var_r1 += 1;
        *var_r2 &= ~0x200000;
        var_r2 = (s32 *)((s8 *)var_r2 + 0x2D0);
    } while (var_r1 < 4);
}
