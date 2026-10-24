#include "m2c.h"
s32 func_ov123_02067c6c(void);
u8 *func_ov123_020913d8(s32);
void func_ov123_02092d40(s32);
s32 func_ov123_02068648(s32 *, void *);
void func_ov123_02091334(s32);
void func_ov123_02092010(void);
s32 func_ov123_02093708(void) {
    s32 a[4];
    s32 r = func_ov123_02067c6c();
    u8 *o = func_ov123_020913d8(0x10);
    if (r == 1) {
        a[0] = o[0xd0a];
        a[1] = 0;
        a[2] = 0;
        a[3] = 0;
        func_ov123_02092d40(0);
        r = func_ov123_02068648(a, func_ov123_02092010);
        if (r == 1 || r >= 4) {
            func_ov123_02091334(1);
            return 0x11;
        }
    } else {
        return 1;
    }
    return 2;
}
