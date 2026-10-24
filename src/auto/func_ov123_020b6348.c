/* compiler: 1.2/sp3 */
#include "m2c.h"
extern u8 data_ov123_020e4634;
void func_ov123_020b6344(void);
void func_ov123_020b6340(void);
s8 func_ov123_020c530c(void);
void func_ov123_020c36bc(s32);
void func_ov123_020b2db8(s32);
void func_ov123_020c5320(void);
void func_ov123_020b2410(void (*)(void));
void func_ov123_020b62d8(void);
void func_ov123_020b6348(void) {
    s8 r;
    func_ov123_020b6344();
    func_ov123_020b6340();
    r = func_ov123_020c530c();
    switch (r) {
        case 0:
            data_ov123_020e4634 = 0;
            func_ov123_020c36bc(7);
            break;
        case 1:
            data_ov123_020e4634 = 1;
            func_ov123_020c36bc(0xe);
            break;
        default:
            return;
    }
    func_ov123_020b2db8(0);
    func_ov123_020c5320();
    func_ov123_020b2410(func_ov123_020b62d8);
}
