/* compiler: 1.2/sp3 */
#include "m2c.h"
struct Obj {
    virtual void f0();
    virtual void f1();
    virtual s32 f2(u8 *);
    virtual s32 f3(void *, s32);
    virtual void f4();
    virtual void f5();
};
struct E8 {
    s32 a;
    s32 b;
};
extern "C" {
s32 func_ov110_020e1b7c(u8 *a0, s32 a1);
}
s32 func_ov110_020e1b7c(u8 *a0, s32 a1) {
    u32 sp0;
    Obj *o;
    if (a1 < 0 || (u32) a1 >= *(u32 *) (a0 + 0x30)) {
        return 0;
    }
    o = *(Obj **) a0;
    if (o->f2((u8 *) (*(s32 *) (a0 + 0x108)) + (*(E8 **) (a0 + 0xF4))[a1].b) == 0) {
        return 0;
    }
    *(s32 *) (a0 + 0xF8) = (*(E8 **) (a0 + 0xF4))[a1].a;
    o                    = *(Obj **) a0;
    o->f5();
    *(s32 *) (a0 + 0xF0) = 1;
    o                    = *(Obj **) a0;
    o->f3(&sp0, 4);
    *(s32 *) (a0 + 0xD8) = sp0 & 0xFFFF;
    *(u32 *) (a0 + 0xE8) = sp0 >> 16;
    *(s32 *) (a0 + 0xE0) = 0;
    o                    = *(Obj **) a0;
    o->f3((void *) *(s32 *) (a0 + 0xD0), *(s32 *) (a0 + 0xD8) + 2);
    return 1;
}
