#include "m2c.h"
struct VA {
    virtual s32 f0();
    virtual s32 f1();
    virtual s32 f2();
    virtual s32 f3();
    virtual s32 f4();
    virtual s32 f5();
    virtual s32 f6();
    virtual s32 f7();
    virtual s32 f8();
    virtual s32 f9();
    virtual s32 f10();
    virtual s32 f11();
    virtual s32 f12();
    virtual s32 f13();
    virtual s32 f14();
    virtual s32 f15();
};
extern "C" {
s32 func_ov123_020d00dc(void *arg0) {
    s32 i;
    u8 *p;
    p = (u8 *) arg0 + 4;
    i = 0;
    do {
        if (((VA *) p)->f7() == 0x7f) {
            return i;
        }
        i++;
        p = p + 0x1b8;
    } while (i < 5);
    return 5;
}
}
