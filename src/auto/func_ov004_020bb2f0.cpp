typedef int s32;
typedef unsigned char u8;

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
    virtual void f14();
    virtual void f15();
    virtual void f16();
    virtual void f17();
    virtual void f18();
    virtual void f19(s32, s32, s32);
};

extern "C" s32 func_ov004_020bb3cc(VA *, s32, s32);

extern "C" void func_ov004_020bb2f0(VA *obj, s32 p1, s32 p2) {
    s32 t = func_ov004_020bb3cc(obj, 0, p1);
    obj->f19(p2, t, *(s32 *) ((u8 *) obj + 0x3C));
}
