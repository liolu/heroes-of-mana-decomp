#include "m2c.h"
extern u8 *data_ov123_020e47e8;
typedef void *(*Ov123M1)(void *, s32);
typedef s32 (*Ov123M3)(void *);
u16 func_ov123_020d3c98(s32 a) {
    u8 *p = data_ov123_020e47e8 + 0x530;
    void *r;
    p += 0x7000;
    r = (*(Ov123M1 *) (*(u8 **) p + 0x54))(p, a);
    return (u16) ((*(Ov123M3 *) (*(u8 **) r + 0x10))(r) -0x32);
}
