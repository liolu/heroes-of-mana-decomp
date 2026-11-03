/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

typedef struct {
    u8 a;
    u8 b;
    s16 c;
} Cfg;

s32 func_ov123_02073078(void);
void func_ov123_02073574(s32, void *);
void func_ov123_020ac864(s32, void *, void *, s32, s32);

void func_ov123_020ac820(s32 arg0, s32 arg1, s32 arg2) {
    struct {
        Cfg cfg;
        s32 neg;
        s32 spc;
    } L;

    L.cfg.a = 8;
    L.cfg.b = 2;
    L.neg   = -1;
    L.cfg.c = 0x1E6;
    func_ov123_02073574(func_ov123_02073078(), &L.spc);
    func_ov123_020ac864(arg0, &L.cfg, &L.spc, arg1, arg2);
}
