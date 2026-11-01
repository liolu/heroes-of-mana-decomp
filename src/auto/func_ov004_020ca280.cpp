#include "m2c.h"
struct E {
    u16 key;
    u8 pad[12];
};
struct H {
    u8 pad[2];
    u16 n;
};
struct Ob {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual s32 getCount();
    virtual s32 getN();
    virtual E *getTab(s32);
    H *hdr;
};
extern "C" {
E *func_ov004_020ca280(Ob *o, s32 key);
}
E *func_ov004_020ca280(Ob *o, s32 key) {
    E *tab;
    s32 lo;
    s32 hi;
    s32 mid;
    s32 n;
    if (o->getN() <= 0) {
        return 0;
    }
    n = o->getCount() - 1;
    if (key >= n) {
        key = n;
    }
    tab = o->getTab(0);
    lo  = 0;
    hi  = o->hdr->n - 1;
    if (hi > 0) {
        do {
            mid = (lo + hi) >> 1;
            if (key < tab[mid].key) {
                hi = mid - 1;
            } else if (key >= tab[mid + 1].key) {
                lo = mid + 1;
            } else {
                lo = mid;
                break;
            }
        } while (lo < hi);
    }
    return &tab[lo];
}
