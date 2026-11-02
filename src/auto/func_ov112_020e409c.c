#include "m2c.h"

void func_ov112_020e40e8(s32, s32, s32, s32, s32, s32, s32, s32);

void func_ov112_020e409c(s32 a0, s32 a1, s32 a2, s32 a3, s32 s4, s32 s5, s32 s6, s32 s7) {
    if (a1 <= 0x18) {
        return;
    }
    if (a1 > 0xA0) {
        return;
    }
    func_ov112_020e40e8(a0, a1, a2, a3, s4, s5, s6, s7);
}
