/* compiler: 1.2/sp3 -O2,p */
#include "m2c.h"

s32 func_ov123_020ca510(s32, s32);
void MIi_CpuClearFast(s32, void *, s32);
s32 func_ov123_020c94ec(s32, void *, s32);
s32 func_ov123_020cb6ac(s32, void *, s32, s32);
s32 func_ov123_020caf1c(void);
extern u8 *data_ov123_020e4750;

void func_ov123_020caf6c(void) {
    s32 r;
    s32 k;
    s32 off;
    data_ov123_020e4750 = (u8 *) func_ov123_020ca510(0x80C, 4);
    MIi_CpuClearFast(0x200, data_ov123_020e4750, 0x800);
    k   = 0;
    off = 0;
    do {
        r                                              = func_ov123_020c94ec(0x40, data_ov123_020e4750 + off, 8);
        *(s32 *) (data_ov123_020e4750 + k * 4 + 0x800) = r;
        k += 1;
        off += 0x400;
    } while (k < 2);
    r                                      = func_ov123_020cb6ac(1, (void *) func_ov123_020caf1c, 0, 0xC8);
    *(s32 *) (data_ov123_020e4750 + 0x808) = r;
}
