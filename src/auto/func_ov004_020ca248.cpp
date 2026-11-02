#include "m2c.h"

class VA {
public:
    virtual s32 f0(void);
    virtual s32 f1(void);
    virtual s32 f2(void);
    virtual s32 f3(void);
    virtual s32 f4(s32);
};

extern "C" s32 func_ov004_020ca248(VA *arg0, s32 arg1) {
    s32 v;

    v = arg0->f4(arg1);
    if (v <= 0) {
        return 0;
    }
    s32 t;

    t = *(s32 *) ((u8 *) arg0 + 4) + 4;
    return arg1 * 14 + t;
}
