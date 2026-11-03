#include "m2c.h"

extern "C" s32 func_ov123_020d3b84(void);
extern s32 data_ov123_020d97dc;
extern u8 data_ov123_020d9680;

extern "C" u16 func_ov123_020d3c4c(void) {
    s32 i;
    s32 *p;
    s32 v;

    v = func_ov123_020d3b84();
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
