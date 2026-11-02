#include "m2c.h"

class VA {
public:
    virtual s32 f0(void);
    virtual s32 f1(void);
    virtual s32 f2(void);
    virtual s32 f3(void);
    virtual s32 f4(s32);
};

extern "C" s32 func_ov004_020c9198(u8 *arg0, s32 arg1) {
    VA *p = (VA *) (arg0 + 4);
    u8 *q = (u8 *) p->f4(arg1);
    return *(s16 *) (q + arg1 * 2);
}
