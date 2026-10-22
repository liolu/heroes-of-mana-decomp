/* compiler: 1.2/sp3 */
#include "m2c.h"
s32 *func_0202f470(s32);
void func_0202f49c(s32 *);
void func_ov004_020c2000(void *arg0, s32 arg1, s8 arg2, s32 arg3) {
    s32 temp_r1;
    s32 temp_r1_2;
    u8 *temp_r1_3;
    u8 *temp_lr;
    u8 *temp_ip;
    s32 var_r4;
    s32 var_r3;
    u8 *temp_r0_4;
    s32 temp_r10;
    s32 temp_r2;
    u8 *var_r1;
    s32 temp_r0;
    u8 *var_r0;
    s32 temp_r0_3;
    u8 *temp_r0_2;
    if (arg1 == 0) {
        return;
    }
    temp_r1 = *(s32 *) ((u8 *) arg0 + 0x54) + 1;
    temp_r0 = *(s32 *) ((u8 *) arg0 + 0x50);
    if (temp_r0 < temp_r1) {
        var_r4 = temp_r0 + (temp_r0 >> 1);
        if (var_r4 <= temp_r1) {
            var_r4 = temp_r1;
        }
        temp_r0_2 = (u8 *) func_0202f470(var_r4 * 0xC);
        temp_r2   = *(s32 *) ((u8 *) arg0 + 0x54);
        var_r1    = temp_r0_2;
        var_r0    = *(u8 **) ((u8 *) arg0 + 0x58);
        var_r3    = 0;
        if (temp_r2 > 0) {
            do {
                temp_ip  = var_r0;
                temp_r10 = *(s32 *) var_r0;
                var_r0 += 0xC;
                temp_lr         = var_r1;
                *(s32 *) var_r1 = temp_r10;
                var_r1 += 0xC;
                var_r3 += 1;
                temp_lr[4]             = temp_ip[4];
                *(s32 *) (temp_lr + 8) = *(s32 *) (temp_ip + 8);
            } while (var_r3 < temp_r2);
        }
        func_0202f49c(*(s32 **) ((u8 *) arg0 + 0x58));
        *(s32 *) ((u8 *) arg0 + 0x50) = var_r4;
        *(u8 **) ((u8 *) arg0 + 0x58) = temp_r0_2;
    }
    temp_r1_2                        = *(s32 *) ((u8 *) arg0 + 0x54);
    temp_r0_3                        = temp_r1_2 * 0xC;
    *(s32 *) ((u8 *) arg0 + 0x54)    = temp_r1_2 + 1;
    temp_r1_3                        = *(u8 **) ((u8 *) arg0 + 0x58);
    *(s32 *) (temp_r1_3 + temp_r0_3) = arg1;
    temp_r0_4                        = temp_r1_3 + temp_r0_3;
    temp_r0_4[4]                     = arg2;
    *(s32 *) (temp_r0_4 + 8)         = arg3;
}
