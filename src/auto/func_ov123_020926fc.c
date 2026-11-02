/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_0209265c(void);
void func_ov123_02098674(void);
void func_ov123_020986f4(void);
s32 func_ov123_02092610(void);

s32 func_ov123_020926fc(u8 *p) {
    s32 r;

    if (p[0] <= 10) {
        r = func_ov123_0209265c();
        if (r == 1) {
            p[0] = 0;
            return 1;
        }
        if (r == -1) {
            p[0] = 18;
            return 1;
        }
    } else {
        if (p[0] == 14) {
            func_ov123_02098674();
            func_ov123_020986f4();
            p[0] = 12;
        } else if (p[0] < 18) {
            r = func_ov123_02092610();
            if (r == 1) {
                p[0] = 10;
            }
        }
    }
    return 0;
}
