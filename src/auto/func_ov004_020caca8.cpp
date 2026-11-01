#include "m2c.h"

struct VO {
    virtual void f0();
    virtual void f1();
    virtual void f2(void *);
    virtual s32 f3();
    virtual s32 f4();
};

extern "C" {
void func_ov004_020cab40(void *, s32);
void func_ov004_020cac20(void *, void *);
void func_ov004_020cabfc(void *);

s32 func_ov004_020caca8(u8 *arg0, s32 arg1) {
    s32 buf[3];
    VO *o;

    func_ov004_020cab40(arg0, arg1);
    func_ov004_020cac20(buf, arg0);
    o = (VO *) (arg0 + 0x10);
    o->f2(buf);
    func_ov004_020cabfc(arg0);
    *(s32 *) (arg0 + 0x20) = ((VO *) (arg0 + 0x10))->f3();
    *(s32 *) (arg0 + 0x1C) = ((VO *) (arg0 + 0x10))->f4();
    return 1;
}
}
