#include "m2c.h"

void func_ov123_0208d418(s32, s32);
extern u8 data_ov123_020e1910[];

void func_ov123_0209d9ec(s32 a, s32 b) {
    u8 *p;
    s32 i;
    switch (a) {
        case 0:
            func_ov123_0208d418(b, 8);
            func_ov123_0208d418(b, 0xA);
            func_ov123_0208d418(b, 0x32);
            func_ov123_0208d418(b, 0x33);
            func_ov123_0208d418(b, 0x34);
            func_ov123_0208d418(b, 0x35);
            func_ov123_0208d418(b, 0x36);
            p = data_ov123_020e1910;
            for (i = 0; i < 0x9A; i++) {
                if (*p != 0) {
                    func_ov123_0208d418(b, *p);
                }
                p += 0xC;
            }
            break;
        case 1:
            return;
        case 2:
            break;
    }
}
