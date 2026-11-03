/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_ov123_020df180;
extern u8 func_ov123_020664ec[];
extern s32 WM_Reset(void *);
extern void func_ov123_020676ac(s32);
extern void func_ov123_020677b0(s32, s32, s32, s32);

void func_ov123_0206759c(void) {
    u8 *p = data_ov123_020df180;

    if (p[0x2000 + 0x26b] != 0) {
        return;
    }
    p[0x2000 + 0x26b] = 1;
    if (WM_Reset(func_ov123_020664ec) == 2) {
        return;
    }
    func_ov123_020676ac(0xB);
    func_ov123_020677b0(7, 0, 0, 0x610);
}
