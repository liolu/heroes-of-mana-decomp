/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_ov122_02063880;

void func_ov122_0205204c(void) {
    s32 *var_r3;
    s32 temp_r1;
    s32 var_r2;

    var_r3 = &data_ov122_02063880;
    var_r2 = 0;
    do {
        var_r2 += 1;
        temp_r1 = *var_r3 & ~2;
        *var_r3 = temp_r1;
        *var_r3 = temp_r1 & ~4;
        var_r3  = (void *) ((u8 *) (u8 *) var_r3 + 8);
    } while (var_r2 < 0xC);
}
