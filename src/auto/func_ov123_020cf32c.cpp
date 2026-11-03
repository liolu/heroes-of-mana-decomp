#include "m2c.h"

extern s32 data_ov123_020d97dc;
extern u8 data_ov123_020d9680;

extern "C" u16 func_ov123_020cf32c(u8 *arg0) {
    s32 *p;
    s32 i;
    s32 v;

    v = *(s32 *) (arg0 + 0x48);
    p = &data_ov123_020d97dc;
    i = 0x1D;
    for (;;) {
        if (v >= *p) {
            return *(u16 *) (&data_ov123_020d9680 + 0xA + i * 12);
        }
        p -= 3;
        i -= 1;
        if (i < 0) {
            return 0;
        }
    }
}
