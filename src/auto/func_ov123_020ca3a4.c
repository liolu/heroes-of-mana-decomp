#include "m2c.h"
void func_ov123_020ca3a4(s32 arg0, s32 arg1) {
    if (arg0 == 1) {
        u32 m                          = ~arg1;
        u32 a                          = ((*(volatile u32 *) 0x04001000) & 0x1F00) >> 8;
        (*(volatile u32 *) 0x04001000) = ((*(volatile u32 *) 0x04001000) & ~0x1F00) | ((m & a) << 8);
    } else {
        u32 m                          = ~arg1;
        u32 a                          = ((*(volatile u32 *) 0x04000000) & 0x1F00) >> 8;
        (*(volatile u32 *) 0x04000000) = ((*(volatile u32 *) 0x04000000) & ~0x1F00) | ((m & a) << 8);
    }
}
