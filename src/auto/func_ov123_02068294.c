/* compiler: 1.2/sp2p3 */
#include "m2c.h"
s32 func_0200fa98(void);
void func_0200faac(s32);
void func_ov123_020676ac(s32);
extern u8 *data_ov123_020df180;
s32 func_ov123_02068294(void) {
    s32 en;
    en = func_0200fa98();
    if (data_ov123_020df180 == 0) {
        func_0200faac(en);
        return 1;
    }
    switch (*(s32 *) (data_ov123_020df180 + 0x2260)) {
        case 6:
            func_ov123_020676ac(7);
            *(s16 *) (data_ov123_020df180 + 0x2280) = 4;
            break;
        case 7:
            func_0200faac(en);
            return 2;
        case 3:
            func_0200faac(en);
            return 0;
        default:
            func_0200faac(en);
            return 1;
    }
    func_0200faac(en);
    return 3;
}
