#include "m2c.h"

typedef struct G {
    u8 pad0[0x10];
    u16 f10;
    u16 f12;
    u8 pad14[5];
    u8 b19;
    u8 b1A;
    u8 b1B;
} G;

typedef struct O {
    volatile u16 a;
    volatile u16 b;
    u16 c;
    u16 d;
} O;

extern G *data_ov123_020e46c8;
extern u8 data_ov123_020d8290[];

void func_ov123_020c1e24(u32 arg0, O *out) {
    out->a = data_ov123_020e46c8->f10;
    out->c = out->a + 12;
    switch (arg0) {
        case 0:
            break;
        case 1:
            out->b = data_ov123_020e46c8->f12 + data_ov123_020e46c8->b1A;
            out->d = out->b + data_ov123_020d8290[data_ov123_020e46c8->b1B];
            break;
        case 2:
            out->b = data_ov123_020e46c8->f12 - 13;
            out->d = data_ov123_020e46c8->f12;
            break;
        case 3:
            out->b = data_ov123_020e46c8->f12 + data_ov123_020e46c8->b19;
            out->d = out->b + 13;
            break;
        case 4:
            out->b = data_ov123_020e46c8->f12;
            out->d = out->b + data_ov123_020e46c8->b19;
            break;
    }
}
