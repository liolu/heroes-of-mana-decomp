typedef int s32;
typedef unsigned int u32;
typedef unsigned char u8;

struct S8 {
    s32 a;
    s32 b;
};

struct VA {
    virtual void *f0();
    virtual void *f1();
    virtual void *f2();
    virtual void *f3();
    virtual void *f4();
    virtual void *f5();
    virtual S8 f6();
    virtual void *f7();
    virtual void *f8(s32);
    virtual void *f9(void *);
    virtual void *f10();
    virtual void *f11(s32);
};

extern u8 *data_ov123_020e47e8;

extern "C" S8 func_ov123_020d4748(s32 p1, s32 p2) {
    void *a = ((VA *) (data_ov123_020e47e8 + 0x27BC))->f11(p1);
    void *b = ((VA *) (data_ov123_020e47e8 + 0x27BC))->f9(a);
    void *c = ((VA *) b)->f10();
    void *d = ((VA *) c)->f8(p2);
    return ((VA *) d)->f6();
}
