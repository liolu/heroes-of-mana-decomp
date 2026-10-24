#include "m2c.h"

u16 *func_0200a7ec(void);

void func_ov120_020ef0f8(s32 x, s32 y, s32 n, s32 pal) {
    u16 *p = func_0200a7ec() + (x + y * 32);
    s32 i;
    for (i = 0; i < n; i++) {
        p[i]      = (p[i] & 0xFFF) + (pal << 12);
        p[i + 32] = (p[i + 32] & 0xFFF) + (pal << 12);
    }
}
