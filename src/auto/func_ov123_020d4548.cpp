#include "m2c.h"
struct VO {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual void f8();
    virtual void f9();
    virtual void f10();
    virtual s32 f11(s32);
};
struct VP {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual void f8();
    virtual void *f9(s32);
};
struct VR {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual s32 f7();
};
struct Sub1 {
    u8 pad[0x2400];
    void *obj;
};
extern "C" {
extern u8 *data_ov123_020e47e8;
u16 func_ov123_020d4548(s32 arg0);
}
extern "C" u16 func_ov123_020d4548(s32 arg0) {
    s32 r;
    void *y;
    s32 w;
    r = ((VO *) (data_ov123_020e47e8 + 0x3bc + 0x2400))->f11(arg0);
    y = ((VP *) (data_ov123_020e47e8 + 0x3bc + 0x2400))->f9(r);
    w = ((VR *) y)->f7();
    return (u16) (w - 50);
}
