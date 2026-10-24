/* compiler: 1.2/sp3 */
#include "m2c.h"

extern s8 *data_ov123_020dc690;
void MI_CpuFill8(void *, u8, u32);
void MI_CpuCopy8(void *, void *, u32);

s32 func_ov123_02099370(u8 *src, u32 len, s8 *dst, u32 cap) {
    s32 n;
    s32 cnt;
    u8 *end;
    u8 buf[3];
    u32 need;
    s8 *out;

    need = ((len % 3) != 0 ? 4 : 0) + (len / 3) * 4;
    if (dst == NULL) {
        return need;
    }
    if (cap < need) {
        return -1;
    }
    end = src + len;
    out = dst;
    if (src != end) {
        do {
            n   = end - src;
            cnt = (n * 8) / 6 + (((n * 8) % 6) != 0 ? 1 : 0);
            if (n >= 3) {
                n = 3;
            }
            MI_CpuFill8(buf, 0, 3);
            MI_CpuCopy8(src, buf, n);
            out[0] = data_ov123_020dc690[buf[0] >> 2];
            if (cnt < 2) {
                out[1] = 42;
            } else {
                out[1] = data_ov123_020dc690[((buf[0] << 4) & 0x3f) | (buf[1] >> 4)];
            }
            if (cnt < 3) {
                out[2] = 42;
            } else {
                out[2] = data_ov123_020dc690[((buf[1] << 2) & 0x3f) | (buf[2] >> 6)];
            }
            if (cnt < 4) {
                out[3] = 42;
            } else {
                out[3] = data_ov123_020dc690[buf[2] & 0x3f];
            }
            src += n;
            out += 4;
        } while (src != end);
    }
    return out - dst;
}
