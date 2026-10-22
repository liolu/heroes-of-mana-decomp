#include "m2c.h"
typedef struct {
    u8 p0[4];
    s32 f4;
    s32 f8;
    u8 pc[4];
    s32 f10;
    u8 p14[4];
    s32 f18;
    u8 p1c;
    u8 f1d;
    s8 f1e;
    u8 p1f[3];
    s16 f22;
    u8 p24[12];
} O;
extern O *data_ov123_020e2048;
extern s8 func_ov123_020a492c(void);
extern u32 func_ov123_020a4cd8(void *);
extern void MI_CpuCopy8(void *, void *, s32);
void func_ov123_020a4690(s32 arg0, void *arg1, s32 arg2) {
    s32 sp0[3];
    u32 t;
    O *o   = data_ov123_020e2048 + arg0;
    o->f1e = func_ov123_020a492c();
    t      = func_ov123_020a4cd8(arg1);
    switch (t) {
        case 1:
            if (arg2 != 8) {
                return;
            }
            MI_CpuCopy8(arg1, sp0, 8);
            o->f18 = sp0[0];
            o->f10 = 0;
            if (o->f4 != 0 && o->f8 >= o->f18) {
                o->f1d = 2;
            } else {
                o->f1d = 4;
            }
            break;
        case 2:
        case 3:
        case 4:
            o->f1d = 3;
            break;
        default:
            break;
    }
    o->f22 = t;
}
