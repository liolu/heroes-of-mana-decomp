#include "m2c.h"

void func_ov122_020552b4(s32, s32, s32, s32, s32, s32, s32, s32);

void func_ov122_02055268(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    if (a1 <= 0x18) {
        return;
    }
    if (a1 > 0xC0) {
        return;
    }
    func_ov122_020552b4(a0, a1, a2, a3, a4, a5, a6, a7);
}
