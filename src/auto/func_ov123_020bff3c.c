/* compiler: 1.2/sp3 */
#include "m2c.h"
extern s8 func_ov123_020ae120(void);
extern void func_ov123_020c36bc(s32);
extern void func_ov123_020bfbec(void);
extern void func_ov123_020b2410(void *);
extern void func_ov123_020bff14(void);
extern u8 data_ov123_020e46a0;
void func_ov123_020bff3c(void) {
    switch (func_ov123_020ae120()) {
        case 0:
            func_ov123_020c36bc(7);
            break;
        case 1:
            func_ov123_020c36bc(6);
            func_ov123_020bfbec();
            data_ov123_020e46a0 = 1;
            break;
        default:
            return;
    }
    func_ov123_020b2410(func_ov123_020bff14);
}
