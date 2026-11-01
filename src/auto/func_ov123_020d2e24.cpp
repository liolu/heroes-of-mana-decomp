#include "m2c.h"

struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual s32 f3();
    virtual void f4();
    virtual u32 f5();
};

extern "C" {
extern void *data_ov123_020e47e8;
void *func_0202f3f8(s32);
void *func_ov123_020d2640(void);
void *func_ov123_020d2c18(void);

s32 func_ov123_020d2e24(void) {
    u32 r4;
    void *r0;

    r4 = ((VA *) func_ov123_020d2640())->f5();
    r0 = func_0202f3f8(0x7AC8);
    if (r0 != 0) {
        r0 = func_ov123_020d2c18();
    }
    data_ov123_020e47e8 = r0;
    if (((VA *) ((u8 *) r0 + 0xEFC))->f3() == 0) {
        return 4;
    }
    switch (r4) {
        case 0:
            return 0;
        case 1:
            return 1;
        case 2:
            return 2;
        case 3:
            return 3;
        default:
            return 3;
    }
}
}
