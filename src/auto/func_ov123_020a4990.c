/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 data_ov123_020e2048[];
typedef struct Ent {
    u8 p0[0xc];
    u32 w[4];
    u8 b1c;
    u8 b1d;
    u8 p1[4];
    u16 h22;
    u8 tail[0xc];
} Ent;
void func_ov123_020a4990(s32 idx) {
    Ent *t;
    if (*(u8 **) data_ov123_020e2048 == 0) {
        return;
    }
    t           = (Ent *) *(u8 **) data_ov123_020e2048;
    t[idx].w[0] = 0;
    t           = (Ent *) *(u8 **) data_ov123_020e2048;
    t[idx].w[1] = 0;
    t           = (Ent *) *(u8 **) data_ov123_020e2048;
    t[idx].w[2] = 0;
    t           = (Ent *) *(u8 **) data_ov123_020e2048;
    t[idx].w[3] = 0;
    t           = (Ent *) *(u8 **) data_ov123_020e2048;
    t[idx].b1c  = 0;
    t           = (Ent *) *(u8 **) data_ov123_020e2048;
    if (t[idx].b1d != 0) {
        t[idx].b1d = 1;
    }
    t          = (Ent *) *(u8 **) data_ov123_020e2048;
    t[idx].h22 = 0;
}
