#include "m2c.h"

extern void func_ov004_020caa00(u8 *o);
extern void func_ov004_020ca980(u8 *o, s32 a);
void func_ov004_020ca704(u8 *o) {
    s32 x40;
    s32 x3c;
    s32 sum;
    volatile s32 tmp[2];
    if (o[0x6C] & 4) {
        func_ov004_020caa00(o);
        o[0x6C] = o[0x6C] & ~4;
    }
    x40    = *(s32 *) (o + 0x40);
    x3c    = *(s32 *) (o + 0x3C);
    sum    = x3c + x40;
    tmp[0] = x40;
    tmp[1] = sum;
    func_ov004_020ca980(o, sum);
    if ((*(s32 *) (o + 0x3C) >> 16) != (x3c >> 16)) {
        o[0x6C] = o[0x6C] | 4;
    }
}
