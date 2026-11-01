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
    virtual void f6(s32);
};
struct Arr {
    s32 w0;
    s32 n;
    Obj **items;
};
struct O {
    virtual void f0();
    u8 p4[8];
    Arr *arr;
    Obj *w10;
    Obj *w14;
    s32 w18;
    s32 w1c;
    s32 n;
    s32 *list;
    u8 p28[0x24];
    s32 w4c;
    u8 p50[8];
    s32 w58;
};

extern "C" {
void func_0202f45c(void *);
void func_0202f49c(void *);
Sink *func_ov004_020c1840(void);
void func_ov004_020c1850(void);
extern u8 data_ov004_020ce584[];
O *func_ov004_020c1d5c(O *o);
}

O *func_ov004_020c1d5c(O *o) {
    Arr *a;
    Sink *s;
    s32 j;
    s32 i;
    *(u8 **) o = data_ov004_020ce584;
    i          = 0;
    if (o->n > 0) {
        do {
            s = func_ov004_020c1840();
            s->f6(o->list[i]);
            i++;
        } while (i < o->n);
    }
    s = func_ov004_020c1840();
    s->f6(o->w18);
    func_ov004_020c1850();
    if (o->w14 != 0) {
        o->w14->f1();
    }
    a = o->arr;
    j = 0;
    if (a->n > 0) {
        do {
            if (a->items[j] != 0) {
                a->items[j]->f1();
            }
            j++;
        } while (j < a->n);
    }
    a->n = 0;
    if (o->w10 != 0) {
        o->w10->f1();
    }
    a = o->arr;
    if (a != 0) {
        func_0202f49c(a->items);
        func_0202f45c(a);
    }
    func_0202f49c((void *) o->w58);
    func_0202f49c((void *) o->w4c);
    func_0202f49c(o->list);
    return o;
}
