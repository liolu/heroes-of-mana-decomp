#include "m2c.h"

extern s32 func_ov123_020a4514(s32);
extern void func_ov123_020a4904(s32, void *, s32, s32);
extern void *func_ov123_020a4964(s32);
extern void func_ov123_020a4d14(void *, s32, s32);
extern s32 func_ov123_020a4e68(s32, s32);

typedef struct G {
    u8 p0[0x600];
    void (*f600)(s32, s32);
    u8 p604[0xc];
    u16 f610;
} G;
extern G *data_ov123_020e2048;

typedef struct T {
    void *f0;
    u8 p4[8];
    volatile s32 fc;
    u8 p10[4];
    s32 f14;
    u8 p18[4];
    s8 f1c;
} T;

s32 func_ov123_020a4d44(s32 arg0, s32 arg1, void *arg2, s32 arg3) {
    s32 sp0[3];
    void (*temp_r2)(s32, s32);
    s32 temp_r0;
    s32 var_r9;
    T *temp_r4;

    temp_r4 = func_ov123_020a4964(arg1);
    if (func_ov123_020a4e68(arg1, arg0) == 0) {
        return 0;
    }
    temp_r4->f1c = 1;
    temp_r4->f0  = arg2;
    temp_r4->fc  = 0;
    temp_r4->f14 = arg3;
    func_ov123_020a4d14(sp0, arg0, arg3);
    func_ov123_020a4904(arg1, sp0, 8, 1);
    var_r9 = data_ov123_020e2048->f610;
    if (arg3 <= (s32) var_r9) {
        var_r9 = arg3;
    }
    if ((s32) var_r9 > func_ov123_020a4514(arg1)) {
        return 1;
    }
    func_ov123_020a4904(arg1, arg2, (s32) var_r9, 1);
    temp_r4->fc = temp_r4->fc + var_r9;
    temp_r0     = temp_r4->f14;
    if (temp_r4->fc == temp_r0) {
        temp_r4->f1c = 0;
        temp_r4->f0  = NULL;
        temp_r4->fc  = 0;
        temp_r4->f14 = 0;
        temp_r2      = data_ov123_020e2048->f600;
        if ((temp_r2 != NULL) && (arg0 == 1)) {
            temp_r2(temp_r0, arg1);
        }
    }
    return 1;
}
