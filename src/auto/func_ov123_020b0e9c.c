/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct O {
    u32 a : 10;
    u32 b : 2;
    u32 c : 20;
    u16 d0 : 12;
    u16 d : 4;
} O;

typedef struct G {
    u8 pad0[0x10];
    u8 padx[0x28];
    O *t1[2];
    void *t2[4];
} G;

extern G *data_ov123_020e45c0;
extern u8 data_ov123_020d7ce4[];
extern u8 data_ov123_020d7cd8[];
extern void func_ov123_020c8e38(void *, s32, s32, s32);

void func_ov123_020b0e9c(s32 i, s32 j) {
    O *o;
    s32 k;
    if (i < 0) {
        return;
    }
    if (i < 0xa) {
        o                       = ((O **) ((u8 *) data_ov123_020e45c0 + 0x10))[i];
        o->b                    = 0;
        *(u16 *) ((u8 *) o + 4) = (*(u16 *) ((u8 *) o + 4) & ~0xf000) | (data_ov123_020d7ce4[j] << 12);
    } else if ((k = i - 0xa) < 2) {
        o                       = data_ov123_020e45c0->t1[k];
        o->b                    = 0;
        *(u16 *) ((u8 *) o + 4) = (*(u16 *) ((u8 *) o + 4) & ~0xf000) | (data_ov123_020d7ce4[j] << 12);
    } else {
        k = i - 0xc;
        func_ov123_020c8e38(data_ov123_020e45c0->t2[k], -1, 0, data_ov123_020d7cd8[j]);
    }
}
