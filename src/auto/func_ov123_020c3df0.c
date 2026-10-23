#include "m2c.h"

typedef struct {
    u8 pad[0x10];
    u16 lo;
    u16 hi;
} D;

typedef struct {
    u8 pad[0x10];
    s32 h;
} G;

extern D data_ov123_020d8308;
extern G *data_ov123_020e46dc;
extern u8 func_ov123_020c3dc0[];
void func_ov123_020c8c80(s32, s32, s32 *, s32 *);
void func_ov123_020c8d2c(s32, s32, s32, s32);
void func_ov123_020cb618(void *, void *);

void func_ov123_020c3df0(void *arg0) {
    s32 sp4;
    s32 sp0;
    s32 t;
    u16 lo;

    func_ov123_020c8c80(data_ov123_020e46dc->h, 0, &sp0, &sp4);
    lo  = data_ov123_020d8308.lo;
    t   = sp0 + 8;
    sp0 = t;
    if (t < lo || t > 0x100) {
        func_ov123_020c8d2c(data_ov123_020e46dc->h, -1, t, data_ov123_020d8308.hi);
        return;
    }
    sp0 = lo;
    func_ov123_020c8d2c(data_ov123_020e46dc->h, -1, lo, data_ov123_020d8308.hi);
    func_ov123_020cb618(arg0, func_ov123_020c3dc0);
}
