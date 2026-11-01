#include "m2c.h"

struct VT {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual s32 f4();
};

extern "C" {
extern u8 data_ov003_020b0dac[];
void func_ov004_020c1000(u8 *arg0) {
    VT *obj;
    s32 r5;

    obj = *(VT **) (arg0 + 0x5C);
    if (obj == 0) {
        return;
    }
    r5 = *(s32 *) (data_ov003_020b0dac + *(s32 *) (arg0 + 4) * 0x110);
    if (r5 != obj->f4()) {
        *(s32 *) (arg0 + 0x18) = r5;
    }
    obj = *(VT **) (arg0 + 0x5C);
    if (obj != 0) {
        obj->f1();
    }
    *(s32 *) (data_ov003_020b0dac + *(s32 *) (arg0 + 4) * 0x110) = *(s32 *) (arg0 + 0x18);
}
}
