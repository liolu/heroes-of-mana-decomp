/* compiler: 1.2/sp3 */
#include "m2c.h"

extern u8 data_ov123_020d9be0[];

void func_0202373c(s32, void *, u8);

void func_ov123_0207a978(u8 *arg0, s32 arg1) {
    u32 i;
    s32 off;

    i   = 0;
    off = 0;
    do {
        func_0202373c(arg1 + off, data_ov123_020d9be0, arg0[i]);
        i += 1;
        off += 2;
    } while (i < 0x10);
}
