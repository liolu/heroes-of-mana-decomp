#include "m2c.h"
struct O {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual s32 f5();
    virtual void f6();
    virtual s32 f7();
};
struct L {
    u8 p[8];
    s32 count;
    void **items;
};
struct T {
    u8 p[0x10];
    L *list;
};
extern "C" {
s32 func_ov004_020c2988(void *);
s32 func_ov004_020c2990(void *);
void func_ov004_020c2538(void *, void *, s32, s32);
void func_ov004_020c2494(T *self, O *obj);
}
void func_ov004_020c2494(T *self, O *obj) {
    s32 i;
    if (obj->f7() != 0) {
        return;
    }
    for (i = 0; i < self->list->count; i++) {
        void *item = self->list->items[i];
        if (func_ov004_020c2988(item) == 2) {
            s32 v = func_ov004_020c2990(item);
            if (v == obj->f5()) {
                func_ov004_020c2538(self, item, 0, 0);
            }
        }
    }
}
