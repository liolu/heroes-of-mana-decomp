/* compiler: 1.2/sp3 */
#include "m2c.h"
extern s8 data_ov123_020e4620;
extern u8 func_ov123_020b5874[];
s32 func_ov123_020ae120(void);
void func_ov123_020c36bc(s32);
void func_ov123_020b2410(void *);

void func_ov123_020b589c(void) {
    s32 r = func_ov123_020ae120();
    switch (r) {
        case 0:
            func_ov123_020c36bc(7);
            break;
        case 1:
            func_ov123_020c36bc(6);
            data_ov123_020e4620 = 1;
            break;
        default:
            return;
    }
    func_ov123_020b2410(func_ov123_020b5874);
}
