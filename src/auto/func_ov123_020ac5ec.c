/* compiler: 1.2/sp2p3 -thumb */
/* near start: 10 diffs with profile "1.2/sp2p3 -thumb" */
#include "m2c.h"

extern void memset(void *, s32, u32);
extern void func_02021318(void *, void *, u32);

void *func_ov123_020ac5ec(u8 *out, u32 a, void *src, u32 c) {
    u32 size;
    u32 v;

    out[0]             = 0;
    out[1]             = 0;
    out[2]             = 0;
    out[3]             = 0;
    v                  = ((u16) a >> 8) & 0xFF;
    *(u16 *) out       = v | (((u16) a << 8) & 0xFF00);
    size               = ((c + 0xB) & ~7) - 4;
    v                  = ((u16) c >> 8) & 0xFF;
    *(u16 *) (out + 2) = v | (((u16) c << 8) & 0xFF00);
    out                = (u8 *) ((s32) out + 4);
    memset(out, 0, size);
    func_02021318(out, src, c);
    return out + size;
}
