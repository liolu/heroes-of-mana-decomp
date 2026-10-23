#include "m2c.h"
void func_ov004_020bc2c0(s32 a, s32 b) {
    u16 *r = (u16 *) 0x4000060;
    s32 t  = (b == 1) ? 1 : 0;
    if (t) {
        *r = (*r & ~0x3000) | 8;
    } else {
        *r = *r & 0xcff7;
    }
}
