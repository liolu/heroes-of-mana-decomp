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
    u8 pad0[0x30];
    u8 padx[0xbc];
    O *t1[4];
    void *t2[4];
} G;

extern G *data_ov123_020e45bc;
extern u8 data_ov123_020d7a0c[];
extern u8 data_ov123_020d7a10[];
extern void func_ov123_020c8e38(void *, s32, s32, s32);

void func_ov123_020af480(s32 i, s32 j) {
    O *o;
    s32 k;
    if (i < 0) {
        return;
    }
    if (i < 0x2f) {
        o                       = ((O **) ((u8 *) data_ov123_020e45bc + 0x30))[i];
        o->b                    = 0;
        *(u16 *) ((u8 *) o + 4) = (*(u16 *) ((u8 *) o + 4) & ~0xf000) | (data_ov123_020d7a0c[j] << 12);
    } else if ((k = i - 0x2f) < 4) {
        o                       = data_ov123_020e45bc->t1[k];
        o->b                    = 0;
        *(u16 *) ((u8 *) o + 4) = (*(u16 *) ((u8 *) o + 4) & ~0xf000) | (data_ov123_020d7a0c[j] << 12);
    } else {
        k = i - 0x33;
        func_ov123_020c8e38(data_ov123_020e45bc->t2[k], -1, 0, data_ov123_020d7a10[j]);
    }
}
