/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
void func_020083e0(void *);
void G2x_SetBGyAffine_(void *, void *, s32, s32, s32, s32);
void AreaMapRoll(void) {
    u8 m[16];
    func_020083e0(m);
    G2x_SetBGyAffine_((void *) 0x4001030, m, 0, 0, 0, 0);
}
