typedef int s32;
typedef unsigned int u32;

struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5(VA *, s32);
    virtual void *f6(s32);
    virtual void f7();
    virtual void f8(s32, s32);
};

extern "C" VA *func_ov004_020bbd58(VA *, s32);
extern "C" void *func_0202f3f8(s32);
extern "C" VA *func_ov004_020bbab0(void *, s32);

extern "C" void *func_ov004_020c9594(VA *obj, s32 p) {
    VA *x;
    VA *y;

    x = func_ov004_020bbd58(obj, p);
    y = (VA *) x->f6(p);
    if (y == 0) {
        y = (VA *) func_0202f3f8(0x1C);
        if (y != 0) {
            y = func_ov004_020bbab0(y, -1);
        }
        y->f8(0x10, p);
        x->f5(y, p);
    }
    return y;
}
