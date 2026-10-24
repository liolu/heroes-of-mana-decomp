/* compiler: 1.2/sp3 */
#include "m2c.h"

void func_ov123_020b9b28(void);
extern s32 data_ov123_020e465c;

void func_ov123_020b9920(void) {
    s32 temp_r7;
    s32 var_r6;
    s32 var_r5;
    s32 var_r4;
    s8 *temp_lr;
    s8 var_r3;
    u8 temp_r3;

    var_r6 = 0;
    var_r4 = 0;
    do {
        var_r5  = 0;
        temp_r7 = data_ov123_020e465c + 8 + var_r4;
        do {
            temp_r3 = *(u8 *) (temp_r7 + var_r5);
            temp_lr = (s8 *) (temp_r7 + var_r5);
            if (temp_r3 != 0x30 && temp_r3 != 0x20 && temp_r3 != 0) {
                break;
            }
            if (var_r5 == 2) {
                var_r3 = 0x30;
            } else {
                var_r3 = 0x20;
            }
            var_r5 += 1;
            *temp_lr = var_r3;
        } while (var_r5 < 3);
        var_r6 += 1;
        var_r4 += 3;
    } while (var_r6 < 4);
    func_ov123_020b9b28();
}
