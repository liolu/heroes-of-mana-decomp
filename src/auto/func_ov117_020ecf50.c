#include "m2c.h"
u16 *func_ov117_020ecdbc(s32, s32, s32, s32, s32, s32, s32);
void func_ov117_020ecf50(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    u16 *p                     = func_ov117_020ecdbc(a0, a1, a2, a3, a4, a5, a6);
    p[0]                       = 0xC395;
    *(u16 *) ((u8 *) p + 0x40) = 0xC3B5;
}
