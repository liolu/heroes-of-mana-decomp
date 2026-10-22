/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

void func_ov123_020a6b1c(s32 hunt_pad, u32 *arg1) {
    u32 var_r7;
    u32 var_r6;
    u32 *var_r1;
    s32 var_r5;

    var_r1 = arg1;
    var_r6 = 0;
    do {
        var_r7 = var_r6;
        var_r5 = 0;
    loop_2:
        if (var_r7 & 1) {
            var_r7 = (var_r7 >> 1) ^ 0xEDB88320;
        } else {
            var_r7 = var_r7 >> 1;
        }
        var_r5 += 1;
        if (var_r5 < 8) {
            goto loop_2;
        }
        *var_r1 = var_r7;
        var_r1  = (void *) ((u8 *) (u8 *) var_r1 + 4);
        var_r6 += 1;
    } while ((s32) var_r6 < 0x100);
}
