#include "m2c.h"
extern u8 *func_ov123_020913d8(s32);
void func_ov123_02093600(u32 n) {
    u8 *p;
    s32 bit;
    p = func_ov123_020913d8(0x10);
    p = p + 0xD00;
    if (n > 0xD) {
        n = 0xD;
    }
    bit                 = (s32) n - 1;
    *(u16 *) (p + 0x16) = *(u16 *) (p + 0x16) | (1 << bit);
}
