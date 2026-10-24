#include "m2c.h"
extern u16 *func_0200a7ec(void);
void func_ov117_020e74e0(s32 a, s32 b, s32 n, s32 pal) {
    u16 *p = func_0200a7ec() + (a + (b << 5));
    s32 i;
    for (i = 0; i < n; i++) {
        p[i]      = (p[i] & 0xfff) + (pal << 12);
        p[i + 32] = (p[i + 32] & 0xfff) + (pal << 12);
    }
}
