#include "m2c.h"

class VA {
public:
    virtual s32 f0(void);
    virtual s32 f1(void);
    virtual s32 f2(void);
    virtual s32 f3(void);
};

extern "C" s32 func_ov004_020c916c(u8 *arg0) {
    VA *p = (VA *) (arg0 + 4);
    return p->f3() << 4;
}
