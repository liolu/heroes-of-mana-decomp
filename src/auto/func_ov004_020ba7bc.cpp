#include "m2c.h"

struct O {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual s32 f7();
    virtual s32 f8();
    virtual void f9();
    virtual s32 f10();
    virtual void f11();
    virtual void f12();
    virtual void f13();
    virtual s32 f14();
    virtual s32 f15();
    virtual s32 f16();
    virtual s32 f17();
    virtual s32 f18();
    s32 a4, a8, ac, a10, a14;
    u8 b18;
    char pad[3];
    s32 a1c, a20, a24, a28, a2c, a30, a34, a38;
};
extern "C" {
extern char data_ov004_020cd710[];
s32 func_ov004_020ba6f4(s32);
s32 func_ov004_020ba93c(O *, s32);
s32 func_ov004_020ba758(s32);
s32 func_ov004_020ba9e8(O *, s32);
s32 func_ov004_020baa94(O *, s32, s32, s32);
s32 func_ov004_020b9ecc(void);
s32 func_ov004_020ba028(s32, s32);
s32 func_ov004_020bae98(O *, s32);
s32 func_ov004_020baf00(O *, s32);
s32 func_ov004_020bafac(O *, s32);
s32 func_ov004_020bb058(O *, s32, s32);
s32 func_ov004_020bb080(O *, s32, s32);
s32 func_ov004_020bb0a8(O *, s32);
O *func_ov004_020ba7bc(O *o, s32 a1, s32 a2, s32 a3);
}

O *func_ov004_020ba7bc(O *o, s32 a1, s32 a2, s32 a3) {
    s32 t;
    *(char **) o = data_ov004_020cd710;
    o->a4        = a1;
    o->a8        = func_ov004_020ba6f4(a2);
    o->ac        = func_ov004_020ba93c(o, a2);
    o->a10       = func_ov004_020ba758(a3);
    o->a14       = func_ov004_020ba9e8(o, a3);
    o->b18       = 0;
    o->a20       = func_ov004_020baa94(o, a1, o->a8, o->a10);
    o->a1c       = func_ov004_020ba028(func_ov004_020b9ecc(), o->a20);
    o->a24       = func_ov004_020bae98(o, o->f7());
    o->a28       = func_ov004_020baf00(o, o->f8());
    o->a2c       = func_ov004_020bafac(o, o->f10());
    t            = o->f14();
    o->a30       = func_ov004_020bb058(o, t, o->f15());
    t            = o->f16();
    o->a34       = func_ov004_020bb080(o, t, o->f17());
    o->a38       = func_ov004_020bb0a8(o, o->f18());
    return o;
}
