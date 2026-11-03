/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

typedef struct {
    u32 pad[4];
    u32 bitpos;
    u32 bytes;
    u8 buf[0x40];
} BitSt;

extern void func_ov123_020a9f04(u8 *, u8 *, u32);
extern void func_ov123_020a9f80(BitSt *, u8 *);

void func_ov123_020aa838(BitSt *s, u8 *data, u32 len) {
    u32 t;
    u32 r4;
    u32 bits;

    t         = (s->bitpos >> 3) & 0x3F;
    bits      = len << 3;
    s->bitpos = s->bitpos + bits;
    if (s->bitpos < bits) {
        s->bytes = s->bytes + 1;
    }
    s->bytes = s->bytes + (len >> 0x1D);
    r4       = 0x40 - t;
    if (len >= r4) {
        func_ov123_020a9f04(s->buf + t, data, r4);
        func_ov123_020a9f80(s, s->buf);
        while (r4 + 0x3F < len) {
            func_ov123_020a9f80(s, data + r4);
            r4 = r4 + 0x40;
        }
        t = 0;
    } else {
        r4 = 0;
    }
    func_ov123_020a9f04(s->buf + t, data + r4, len - r4);
}
