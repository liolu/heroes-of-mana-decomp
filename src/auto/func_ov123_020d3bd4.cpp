#include "m2c.h"

struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual s32 f4();
};

extern "C" {
extern void *data_ov123_020e47e8;
extern s32 data_ov123_020d97dc;
extern u8 data_ov123_020d9680[];
s32 func_ov123_020d3b5c(s32);

u16 func_ov123_020d3bd4(void) {
    s32 r0;
    s32 i;
    s32 *p;

    r0 = ((VA *) ((u8 *) data_ov123_020e47e8 + 0x7514))->f4();
    if (r0 != 0) {
        return 0x1F;
    }
    r0 = func_ov123_020d3b5c(r0);
    p  = &data_ov123_020d97dc;
    i  = 0x1D;
    for (;;) {
        if (r0 >= *p) {
            return *(u16 *) (data_ov123_020d9680 + 0xA + i * 0xC);
        }
        p = (s32 *) ((u8 *) p - 0xC);
        i -= 1;
        if (i < 0) {
            return 0;
        }
    }
}
}
