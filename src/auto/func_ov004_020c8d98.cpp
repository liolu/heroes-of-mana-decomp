#include "m2c.h"

struct VZ {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual s32 f6();
};

extern "C" u8 *func_ov004_020c8d98(VZ *arg0, s8 *arg1) {
    u8 *e;
    s32 i;
    s32 n;

    e = *(u8 **) ((u8 *) arg0 + 4);
    if (e == 0) {
        return 0;
    }
    e = e + 0xC;
    i = 0;
    n = arg0->f6();
    if (n > 0) {
        do {
            if ((e[0] == arg1[0]) && (e[1] == arg1[1]) && (e[2] == arg1[2]) && (e[3] == arg1[3])) {
                return e + 8;
            }
            i += 1;
            e = e + *(s32 *) (e + 4);
        } while (i < arg0->f6());
    }
    return 0;
}
