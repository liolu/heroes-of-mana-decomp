/* compiler: 1.2/sp3 */
#include "m2c.h"
void func_ov123_0207aaf4(s32, s8 *, s32);
extern s8 data_ov123_020d4f10[];
extern s8 data_ov123_020d4f14[];
extern s8 data_ov123_020d4f18[];

void func_ov123_0207a9b8(s32 src, s8 *out, s32 len, s32 mode) {
    s8 *tbl;
    s8 *start = out;
    s32 rem   = len;
    s8 *lim;
    s32 n;
    s8 c;
    switch (mode) {
        case 1:
            tbl = data_ov123_020d4f10;
            break;
        case 2:
            tbl = data_ov123_020d4f14;
            break;
        default:
            tbl = data_ov123_020d4f18;
            break;
    }
    if (len > 0) {
        do {
            func_ov123_0207aaf4(src, out, len >= 3 ? 3 : len);
            rem -= 3;
            out += 4;
            src += 3;
        } while (rem > 0);
    }
    n   = len % 3;
    lim = out;
    if (n == 1) {
        lim = out - 2;
    } else if (n == 2) {
        lim = out - 1;
    }
    *out = 0;
    if (out <= start) {
        return;
    }
    do {
        out--;
        if (out >= lim) {
            *out = tbl[2];
        } else {
            c = *out;
            if (c <= 0x19) {
                *out = c + 0x41;
            } else if (c <= 0x33) {
                *out = c + 0x47;
            } else if (c <= 0x3d) {
                *out = c - 4;
            } else if (c == 0x3e) {
                *out = tbl[0];
            } else if (c == 0x3f) {
                *out = tbl[1];
            }
        }
    } while (out > start);
}
