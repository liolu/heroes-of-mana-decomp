#include "m2c.h"
typedef struct {
    s64 v;
    s32 a;
    s32 b;
    s32 f10;
    s32 f14;
} T;
extern s32 func_ov123_02094a94(void *);
extern void func_ov123_020a60ec(T *);
extern s64 func_ov123_02094b28(void *);
s32 func_ov123_0209451c(u8 *o) {
    T t;
    if (func_ov123_02094a94(o + 0x10) == 0) {
        return 1;
    }
    func_ov123_020a60ec(&t);
    if (t.f10 == 0) {
        return 0;
    }
    return t.v == func_ov123_02094b28(o + 0x10);
}
