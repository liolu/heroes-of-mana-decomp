/* near start: 2 diffs with profile "2.0/sp1p5" */
#include "m2c.h"
void func_ov004_020bc30c(s32 a, s32 flag, s32 v) {
    volatile u16 *reg = (volatile u16 *) 0x4000060;
    s32 f             = (flag == 1);
    s32 w             = v >> 3;
    if (f) {
        *reg                                  = (*reg & ~0x3000) | 4;
        *(volatile u16 *) (0x4000060 + 0x2e0) = w;
    } else {
        *reg = *reg & 0xcffb;
    }
}
