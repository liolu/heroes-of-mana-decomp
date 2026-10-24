/* compiler: 1.2/sp3 */
#include "m2c.h"

void func_ov123_020b2398(s32 *, s32 *);
s32 func_ov123_020ae2a4(s32, s32, s32);
s32 func_ov123_020cb28c(u8 *, s32);
extern u8 *data_ov123_020e4658;

s32 func_ov123_020b8bb8(void) {
    s32 sp0;
    s32 sp4;
    s32 n;
    s32 i;
    u8 c;
    u8 *p;
    func_ov123_020b2398(&sp0, &sp4);
    if (sp4 == 1) {
        func_ov123_020ae2a4(0x35, -1, 0);
    }
    func_ov123_020b2398(&sp0, &sp4);
    if (sp0 == 0) {
        if (data_ov123_020e4658[8] != 0) {
            return 1;
        }
        return 0;
    }
    if (sp4 == 1 && data_ov123_020e4658[8] == 0) {
        return 0;
    }
    n = func_ov123_020cb28c(data_ov123_020e4658 + 8, 0x20);
    switch (n) {
        case 0:
        case 5:
        case 13:
        case 16:
            return 1;
        case 10:
        case 26:
        case 32:
            i = 0;
            if (n > 0) {
                p = data_ov123_020e4658;
                do {
                    c = p[8];
                    if ((c < 0x30 || c > 0x39) && (c < 0x41 || c > 0x46) && (c < 0x61 || c > 0x66)) {
                        return 0;
                    }
                    i++;
                    p++;
                } while (i < n);
            }
            return 1;
        default:
            return 0;
    }
}
