/* compiler: 1.2/sp3 */
#include "m2c.h"
extern s32 func_ov123_020ae120(void);
extern void func_ov123_020c36bc(s32 k);
extern void func_ov123_020b2410(void *f);
extern void func_ov123_020c1204(void);
extern u8 data_ov123_020e46b4;
void func_ov123_020c122c(void) {
    switch (func_ov123_020ae120()) {
        case 0:
            func_ov123_020c36bc(7);
            break;
        case 1:
            func_ov123_020c36bc(6);
            data_ov123_020e46b4 = 1;
            break;
        default:
            return;
    }
    func_ov123_020b2410(func_ov123_020c1204);
}
