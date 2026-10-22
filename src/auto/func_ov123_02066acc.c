/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_ov123_0206759c(void);
void func_ov123_020676ac(s32);
void func_ov123_020677b0(s32, void *, s32, s32);
extern u8 *data_ov123_020df180;
void func_ov123_02066acc(void *arg0) {
    switch (*(u16 *) ((u8 *) arg0 + 2)) {
        case 0:
            if (*(s32 *) (data_ov123_020df180 + 0x2260) == 0xC) {
                func_ov123_020676ac(0xA);
                func_ov123_0206759c();
                return;
            }
            *(s16 *) (data_ov123_020df180 + 0x2282) = 0;
            func_ov123_020676ac(3);
            func_ov123_020677b0(0, data_ov123_020df180 + 0x2140, 0, 0x83D);
            return;
        case 1:
        case 3:
            func_ov123_020676ac(0xA);
            func_ov123_0206759c();
            return;
        default:
        case 2:
        case 4:
            func_ov123_020676ac(0xB);
            func_ov123_020677b0(7, data_ov123_020df180 + 0x2140, 0, 0x84F);
            return;
    }
}
