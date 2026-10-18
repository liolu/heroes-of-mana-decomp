#include "m2c.h"

M2C_UNK MIi_CpuClear16(M2C_UNK, s32, M2C_UNK);      /* extern */
u16 *func_0200a7b8();                               /* extern */
s32 func_0200aa50();                                /* extern */

void func_ov119_020ea754(void) {
    s32 var_r2;
    u16 *var_r0;
    u16 var_r3;

    var_r0 = func_0200a7b8();
    var_r3 = 0;
    var_r2 = 0;
    do {
        var_r2 += 1;
        *var_r0 = var_r3;
        var_r0  = (void *) ((u8 *) (u8 *) var_r0 + 2);
        var_r3 += 1;
    } while (var_r2 < 0x400);
    MIi_CpuClear16(0, func_0200aa50(), 0x8000);
}
