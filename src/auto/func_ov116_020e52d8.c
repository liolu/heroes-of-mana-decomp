#include "m2c.h"
u16 *func_ov116_020e5158(s32, s32, s32, s32, s32, s32, s32);
void func_ov116_020e52d8(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g) {
    u16 *p  = func_ov116_020e5158(a, b, c, d, e, f, g);
    p[0]    = 0xC1D5;
    p[0x20] = 0xC1F5;
}
