#include "m2c.h"
extern s32 func_ov116_020e5158(s32, s32, s32, s32, s32, s32, s32);
extern void func_ov116_020e4660(s32, s32, s32, s32, s32, s32);

void func_ov116_020e3358(s32 a, s32 b, s32 c, s32 d, s32 e) {
    func_ov116_020e5158(c, a, b, 2, 0, 0, 0x1c0);
    func_ov116_020e4660(a + 2, b, 0x22, 0, 0, 0);
    func_ov116_020e5158(d, a + 3, b, 2, 0, 0, 0x1c0);
    func_ov116_020e4660(a + 5, b, 0x22, 0, 0, 0);
    func_ov116_020e5158(e, a + 6, b, 2, 0, 0, 0x1c0);
}
