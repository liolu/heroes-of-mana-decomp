typedef int s32;
typedef unsigned int u32;
typedef unsigned char u8;
struct VA {
    virtual int f0();
    virtual int f1();
    virtual int f2();
    virtual int f3();
    virtual int f4();
    virtual int f5();
    virtual int f6();
    virtual int f7();
    virtual int f8();
    virtual int f9();
    virtual int f10();
    virtual int f11();
    virtual int f12();
    virtual int f13();
    virtual int f14();
    virtual int f15();
    virtual int f16();
    virtual int f17();
    virtual int f18();
    virtual int f19();
};
extern "C" void *func_ov004_020bb0a8(void *arg0, s32 arg1);
extern "C" void func_ov004_020bad48(void *arg0, s32 arg1) {
    u8 *p = (u8 *) arg0;
    if (arg1 == 1) {
        p[0x18] = p[0x18] | 0x10;
    } else {
        p[0x18] = p[0x18] & ~0x10;
    }
    *(void **) (p + 0x38) = func_ov004_020bb0a8(arg0, ((VA *) arg0)->f18());
}
