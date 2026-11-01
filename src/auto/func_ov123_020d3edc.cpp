#include "m2c.h"
struct Leaf {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual s32 f5();
};
struct Mid {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual s32 f4();
    virtual void f5();
    virtual Leaf *f6();
    virtual Leaf *f7();
};
struct Sink {
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
    virtual void f11();
    virtual void f12();
    virtual void f13();
    virtual void f14();
    virtual void f15();
    virtual void f16();
    virtual void f17();
    virtual void f18();
    virtual void f19();
    virtual void f20();
    virtual void f21();
    virtual s32 f22();
    virtual Mid *f23(s32);
};

extern "C" {
extern u8 *data_ov123_020e47e8;
s32 func_ov123_020d3edc(void);
}

s32 func_ov123_020d3edc(void) {
    s32 t0;
    s32 t1;
    s32 i;
    s32 lo;

    lo = 0xF4240;
    i  = 0;
    if (((Sink *) (data_ov123_020e47e8 + 0x7530))->f22() > 0) {
        do {
            if (((Sink *) (data_ov123_020e47e8 + 0x7530))->f23(i)->f4() != 0) {
                t0 = ((Sink *) (data_ov123_020e47e8 + 0x7530))->f23(i)->f6()->f5();
                if (lo >= t0) {
                    lo = t0;
                }
                t1 = ((Sink *) (data_ov123_020e47e8 + 0x7530))->f23(i)->f7()->f5();
                if (lo >= t1) {
                    lo = t1;
                }
            }
            i += 1;
        } while (i < ((Sink *) (data_ov123_020e47e8 + 0x7530))->f22());
    }
    if (lo == 0xF4240) {
        lo = 0;
    }
    return lo;
}
