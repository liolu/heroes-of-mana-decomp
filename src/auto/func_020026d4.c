#include "m2c.h"

extern void *data_0203673c;

void func_020026d4(void) {
    s32 var_r1;
    void *var_r2;

    var_r1 = 0;
    var_r2 = M2C_FIELD(data_0203673c, void **, 0x24);
    do {
        var_r1 += 1;
        M2C_FIELD(var_r2, s32 *, 4) = (s32) (M2C_FIELD(var_r2, s32 *, 4) & ~0x10);
        var_r2 += 0x34;
    } while (var_r1 < 0x58);
}
