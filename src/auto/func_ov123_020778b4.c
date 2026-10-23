/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct C {
    u8 pad[0x10];
    u32 lo;
    u32 hi;
    u8 buf[0x40];
} C;
void MI_CpuCopy8(void *, void *, u32);
void func_ov123_020779c0(C *, void *);
void func_ov123_020778b4(C *c, u8 *data, u32 len) {
    u32 i;
    u32 idx;
    u32 old;
    old   = c->lo;
    idx   = (old >> 3) & 0x3f;
    c->lo = old + (len << 3);
    if (c->lo < (len << 3)) {
        c->hi++;
    }
    c->hi += len >> 29;
    i = 64 - idx;
    if (len >= i) {
        MI_CpuCopy8(data, c->buf + idx, i);
        idx = 0;
        func_ov123_020779c0(c, c->buf);
        for (; i + 63 < len; i += 64) {
            func_ov123_020779c0(c, data + i);
        }
    } else {
        i = 0;
    }
    MI_CpuCopy8(data + i, c->buf + idx, len - i);
}
