/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov123_0206ce0c(void *out);
void func_0200e0a4(s32 a);
s32 func_ov123_02071ea4(void *s, void *dst, s32 n, s32 a, s32 b);
void func_ov123_0206cd00(s32 a);
void func_ov123_02071bc0(void *s);
void MI_CpuCopy8(s32 src, void *dst, s32 n);

s32 func_ov123_02071c68(u8 *p) {
    s32 buf;
    s32 cnt;
    u8 *s;
    u8 *t;
    void *dst;
    s32 a8;
    s32 a12;
    s32 m;
    s32 ret;
    s32 r4;
    s32 sv;
    s32 r1v;

    s   = *(u8 **) (p + 0x4);
    dst = *(void **) (p + 0x10);
    t   = *(u8 **) (s + 0x64);
    a8  = *(s32 *) (p + 0x18);
    cnt = *(s32 *) (p + 0x14);
    a12 = *(s32 *) (p + 0x1c);
    m   = *(s32 *) (t + 0xf8);

    r4 = 10;
    for (;;) {
        ret = func_ov123_0206ce0c(&buf);
        if (ret == 0) {
            break;
        }
        if (buf - m > 0) {
            break;
        }
        sv  = *(s8 *) (s + 0x73);
        r1v = 1;
        if (sv != 0) {
            if (sv != 4) {
                r1v = 0;
            }
        }
        if (r1v != 0) {
            if (*(u8 *) (s + 0x8) != 4) {
                ret = 0;
                break;
            }
        }
        func_0200e0a4(r4);
    }

    sv = *(s8 *) (s + 0x73);
    if (sv == 4) {
        if (ret == 0) {
            return 0;
        }
        if ((u32) cnt > (u32) buf) {
            cnt = buf;
        }
        MI_CpuCopy8(ret, dst, cnt);
        func_ov123_0206cd00(cnt);
        return cnt;
    }

    if (ret == 0) {
        r4 = 0;
    } else {
        r4 = func_ov123_02071ea4(s, dst, cnt, a8, a12);
    }

    if (r4 <= 0) {
        return r4;
    }
    if (*(s32 *) (t + 0xf8) >= (s32) * (u16 *) (t + 0xfc)) {
        func_ov123_02071bc0(s);
    }
    return r4;
}
