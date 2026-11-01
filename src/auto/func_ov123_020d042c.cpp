#include "m2c.h"

struct Tgt {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual s32 f6(s32, s32);
};
struct Slot {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual Tgt *f6();
    virtual s32 f7();
    u8 pad[0x1b8 - 4];
};
struct Main {
    u8 pad[0x89c];
    Slot slots[5];
};

extern "C" {
s32 *func_0202f470(s32);
void func_0202f49c(s32 *);
s32 func_ov123_020d042c(u8 *self, s32 arg1);
}

s32 func_ov123_020d042c(u8 *self, s32 arg1) {
    s32 i;
    s32 r;
    s32 *nd;
    s32 *src;
    s32 *dst;
    s32 j;
    s32 n;
    Slot *p;
    s32 ncap;
    p = (Slot *) (self + 0x89c);
    i = 0;
    do {
        r = p->f7();
        if (r != 0x7f) {
            Tgt *o = p->f6();
            if (o->f6(r, arg1) != 0) {
                s32 need = *(s32 *) (self + 0x4d50) + 1;
                if (*(s32 *) (self + 0x4d4c) < need) {
                    ncap = *(s32 *) (self + 0x4d4c) + (*(s32 *) (self + 0x4d4c) >> 1);
                    if (ncap <= need) {
                        ncap = need;
                    }
                    nd  = func_0202f470(ncap * 4);
                    n   = *(s32 *) (self + 0x4d50);
                    src = *(s32 **) (self + 0x4d54);
                    dst = nd;
                    j   = 0;
                    if (n > 0) {
                        do {
                            *dst++ = *src++;
                            j++;
                        } while (j < n);
                    }
                    func_0202f49c(*(s32 **) (self + 0x4d54));
                    *(s32 *) (self + 0x4d4c)  = ncap;
                    *(s32 **) (self + 0x4d54) = nd;
                }
                {
                    s32 l                          = *(s32 *) (self + 0x4d50);
                    *(s32 *) (self + 0x4d50)       = l + 1;
                    (*(s32 **) (self + 0x4d54))[l] = i;
                }
            }
        }
        i++;
        p++;
    } while (i < 5);
    return 1;
}
