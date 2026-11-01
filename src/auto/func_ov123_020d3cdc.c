#include "m2c.h"

extern u8 *data_ov123_020e47e8;

typedef void *(*Ov123M1)(void *, s32);
typedef void (*Ov123M2)(void *);

void func_ov123_020d3cdc(s32 a) {
    u8 *p = data_ov123_020e47e8 + 0x530;
    void *r;
    p += 0x7000;
    r = (*(Ov123M1 *) (*(u8 **) p + 0x54))(p, a);
    (*(Ov123M2 *) (*(u8 **) r + 0x18))(r);
}
