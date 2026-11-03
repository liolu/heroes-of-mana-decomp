#include "m2c.h"
struct VA {
    virtual void f0(void *);
    virtual void f1(void *);
    virtual void f2(void *);
    virtual void f3(void *);
    virtual void f4(void *);
    virtual void f5(void *);
};
typedef struct {
    void *a;
    s32 b;
    s32 c;
} S;
typedef struct {
    s32 a;
    s32 b;
    s32 c;
    s32 d;
} O;
extern "C" {
extern u8 data_ov123_020de8d8[];
void func_ov123_020ceebc(O *, S *);
void func_0202f49c(s32);
s32 func_ov123_020d077c(u8 *obj0);
}
s32 func_ov123_020d077c(u8 *obj0) {
    O o;
    S s;
    s32 c = *(s32 *) (obj0 + 0x14);
    s32 b = *(s32 *) (obj0 + 0x18);
    s.a   = data_ov123_020de8d8;
    s.b   = b;
    s.c   = c;
    func_ov123_020ceebc(&o, &s);
    ((VA *) obj0)->f3(&o);
    func_0202f49c(o.c);
    return 1;
}
