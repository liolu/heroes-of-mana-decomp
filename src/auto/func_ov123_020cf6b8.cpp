#include "m2c.h"

struct VA {
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
    virtual s32 f14();
};

extern "C" {
u8 *func_0202f470(s32);
void func_0202f49c(u8 *);

s32 func_ov123_020cf6b8(u8 *arg0, VA *arg1) {
    s32 r4;
    u8 *r5;
    s32 r6;
    u8 *obj;
    s32 len;
    s32 i;
    u8 *src;
    u8 *dst;

    obj = arg0;
    r4  = arg1->f14();
    if (*(s32 *) (obj + 0x1818) < r4) {
        r6 = *(s32 *) (obj + 0x1818);
        r6 = r6 + (r6 >> 1);
        if (r6 <= r4) {
            r6 = r4;
        }
        r5  = func_0202f470(r6);
        len = *(s32 *) (obj + 0x181C);
        src = *(u8 **) (obj + 0x1820);
        dst = r5;
        i   = 0;
        if (len > 0) {
            do {
                *dst = *src;
                src++;
                i++;
                dst++;
            } while (i < len);
        }
        func_0202f49c(*(u8 **) (obj + 0x1820));
        *(s32 *) (obj + 0x1818) = r6;
        *(u8 **) (obj + 0x1820) = r5;
    }
    *(s32 *) (obj + 0x181C) = r4;
    return 1;
}
}
