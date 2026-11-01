#include "m2c.h"
struct S8 {
    s32 a;
    s32 b;
};
struct Item {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5(void *);
};
struct Sel {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void *f7();
};
struct Dev {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual void f8();
    virtual Sel *f9(s32);
};
struct Lst {
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
    virtual void f16(const S8 &);
    virtual void f17();
    virtual void f18();
    virtual void f19();
    virtual void f20();
    virtual void f21();
    virtual void f22();
    virtual void f23();
    virtual s32 f24();
    virtual Item *f25(s32);
};
struct P {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual S8 f6();
};
struct O {
    u8 pad[0x14];
    P *f14;
    Dev *f18;
    u8 pad2[8];
    Lst *f24;
};
extern "C" {
s32 func_ov123_020d2524(O *o);
}
s32 func_ov123_020d2524(O *o) {

    s32 i;
    Item *it;

    o->f24->f16(o->f14->f6());
    for (i = 0; i < o->f24->f24(); i++) {
        it = o->f24->f25(i);
        it->f5(o->f18->f9(i)->f7());
    }
    return 1;
}
