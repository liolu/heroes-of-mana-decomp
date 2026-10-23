#include "m2c.h"
extern void func_ov122_020583c0(s32, s32, s32, s32, s32, s32, s32);
void func_ov122_0205852c(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g) {
    if (b > 0x18 && b <= 0xC0) {
        func_ov122_020583c0(a, b, c, d, e, f, g);
    }
}
