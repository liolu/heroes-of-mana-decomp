/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct Pkt {
    u16 h0;
    u16 h2;
    u16 h4;
    u16 h6;
} Pkt;
typedef struct Q {
    u8 pad[0x22];
    Pkt pkt;
} Q;
typedef struct Obj {
    u8 pad[0xa];
    u16 ha;
    u8 pad2[0x10];
    s32 w1c;
    u8 pad3[0x2c];
    Q *q;
} Obj;
typedef struct Thr {
    s32 w0;
    s32 w1;
} Thr;
extern Thr OSi_ThreadInfo;
extern u16 data_ov123_020df1d0;
s32 func_ov123_0207039c(s32, s32, s32);
s32 func_ov123_02070380(s32);
void func_ov123_0206f4d0(void *, s32, s32, s32, s32, s32);
void func_ov123_0206f414(s32 a, s32 b, Obj *o) {
    Pkt *p = &o->q->pkt;
    u16 id;
    s32 x;
    p->h0 = 8;
    p->h4 = OSi_ThreadInfo.w1;
    p->h2 = 0;
    id    = data_ov123_020df1d0;
    o->ha = id;
    data_ov123_020df1d0++;
    p->h6 = id;
    x     = func_ov123_02070380((u16) func_ov123_0207039c(a, b, func_ov123_0207039c((s32) p, 8, 0)));
    p->h2 = (x >> 8) | (x << 8);
    func_ov123_0206f4d0(p, 8, a, b, o->w1c, 1);
}
