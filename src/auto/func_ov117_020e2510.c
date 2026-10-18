/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_ov117_020f1718;

void func_ov117_020e2510(void) {
    s32 *var_r2;
    s32 var_r1;

    var_r2 = &data_ov117_020f1718;
    var_r1 = 0;
    do {
        var_r1 += 1;
        *var_r2 &= ~4;
        var_r2 = (void *) ((u8 *) (u8 *) var_r2 + 8);
    } while (var_r1 < 0x64);
}
