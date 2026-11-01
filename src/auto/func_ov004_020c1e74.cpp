#include "m2c.h"

struct Obj {
    virtual void f0();
    virtual void f1();
};
struct Sink {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6(void *);
};
struct List {
    u32 f0;
    s32 cnt;
    Obj **items;
};
struct Self {
    virtual void f0();
    u8 p4[8];
    List *list;
    Obj *f10;
    Obj *f14;
    void *f18;
    u8 p1c[4];
    s32 n;
    void **arr;
    u8 p28[0x4c - 0x28];
    void *f4c;
    u8 p50[8];
    void *f58;
};

extern "C" {
void func_0202f45c(void *);
void func_0202f49c(void *);
Sink *func_ov004_020c1840();
void func_ov004_020c1850();
extern u8 data_ov004_020ce584[];
Self *func_ov004_020c1e74(Self *self);
}

Self *func_ov004_020c1e74(Self *self) {
    List *l2;
    List *l;
    s32 var_r6;
    s32 var_r5;

    *(u8 **) self = data_ov004_020ce584;
    var_r5        = 0;
    if (self->n > 0) {
        do {
            Sink *o = func_ov004_020c1840();
            o->f6(self->arr[var_r5]);
            var_r5 += 1;
        } while (var_r5 < self->n);
    }
    {
        Sink *o2 = func_ov004_020c1840();
        o2->f6(self->f18);
    }
    func_ov004_020c1850();
    if (self->f14 != 0) {
        self->f14->f1();
    }
    l      = self->list;
    var_r6 = 0;
    if (l->cnt > 0) {
        do {
            Obj *it = l->items[var_r6];
            if (it != 0) {
                it->f1();
            }
            var_r6 += 1;
        } while (var_r6 < l->cnt);
    }
    l->cnt = 0;
    if (self->f10 != 0) {
        self->f10->f1();
    }
    l2 = self->list;
    if (l2 != 0) {
        func_0202f49c(l2->items);
        func_0202f45c(l2);
    }
    func_0202f49c(self->f58);
    func_0202f49c(self->f4c);
    func_0202f49c(self->arr);
    func_0202f45c(self);
    return self;
}
