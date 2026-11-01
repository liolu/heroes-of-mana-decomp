#include "m2c.h"
struct VE {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual s32 f7();
};
extern "C" s32 func_ov123_020d01c0(u8 *arg0, s32 arg1);
extern "C" s32 func_ov123_020d01c0(u8 *arg0, s32 arg1) {
    u8 *base;
    s32 i;
    s32 idx;
    s32 ret;
    u8 *obj;
    i = 0;
    if (*(s32 *) (arg0 + 0x4d50) > 0) {
        base = arg0 + 0x89c;
        do {
            idx = ((s32 *) (*(u8 **) (arg0 + 0x4d54)))[i];
            obj = base + idx * 440;
            ret = ((VE *) obj)->f7();
            if (arg1 == ret) {
                return 1;
            }
            i += 1;
        } while (i < *(s32 *) (arg0 + 0x4d50));
    }
    return 0;
}
