#include "m2c.h"
void func_ov123_0208db1c(u8 *arg0) {
    s32 v;
    s32 i;
    arg0[0x100] = 1;
    arg0[0x101] = 3;
    arg0[0x102] = 5;
    arg0[0x103] = 7;
    arg0[0x104] = 0xB;
    i           = 0;
    v           = 0xFF;
    do {
        arg0[i] = v;
        i += 1;
        v -= 1;
    } while (i < 0x100);
}
