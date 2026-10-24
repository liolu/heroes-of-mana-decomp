/* compiler: 2.0/sp1p5 */
#include "m2c.h"

typedef void (*Fn)();

typedef struct {
    u32 kind;
    s32 f4;
    s32 f8;
    s32 fc;
    s32 f10;
    s32 f14;
    Fn fn;
} Ent;

extern s32 data_ov123_020e0e9c;
s32 func_ov123_0207a204(s32);
Ent *func_ov123_0207a194(s32, s32);
void func_ov123_02079f1c(s32, s32);

void func_ov123_020866bc(s32 idx, s32 a1, s32 a2, s32 a3, s32 a4) {
    volatile Ent *e;
    Fn fn;

    if (idx < 0) {
        return;
    }
    if (idx >= func_ov123_0207a204(data_ov123_020e0e9c)) {
        return;
    }
    e  = func_ov123_0207a194(data_ov123_020e0e9c, idx);
    fn = e->fn;
    if (fn != 0) {
        switch (e->kind) {
            case 0:
                fn(e->f4, e->f8, a1, a3, e->f14);
                break;
            case 1:
                fn(e->f4, e->f8, e->fc, e->f10, a1, a2, a3, a4, e->f14);
                break;
            case 2:
                fn(e->f4, e->f8, e->fc, e->f10, a1, a2, e->f14);
                break;
            case 3:
                fn(e->f4, e->f8, a1, e->f14);
                break;
        }
    }
    func_ov123_02079f1c(data_ov123_020e0e9c, idx);
}
