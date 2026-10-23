#include "m2c.h"
void func_ov122_02052e94(u8 *a, u16 *b) {
    s32 i;
    for (i = 0; i < 0x100; i++) {
        u8 t = a[i];
        *b++ = (t & 0xF) | ((t << 4) & 0xF00);
    }
}
