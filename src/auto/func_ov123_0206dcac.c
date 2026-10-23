/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct S {
    u8 pad[0xC];
    u8 b0;
    u8 b1;
} S;

s32 func_ov123_0206de00(s32, S *);
s32 func_ov123_0206de48(s32, S *, s32);
s32 func_ov123_0206df48(s32, S *, s32);
s32 func_ov123_0206e270(s32, S *, s32);
s32 func_ov123_0206e384(s32, S *, s32);
s32 func_ov123_0206e608(s32, S *, s32, s32);
s32 func_ov123_020702fc(S *, s32, s32, s32);

s32 func_ov123_0206dcac(s32 a, S *s, s32 n) {
    s32 r;
    s32 t;
    s32 k;
    r = func_ov123_020702fc(s, n, a, 6);
    if (r != 0) {
        return r;
    }
    t = s->b0 & 0xF0;
    k = s->b1 & 0x17;
    n = n - t / 4;
    switch (k) {
        case 2:
            r = s->b1 & 0x28;
            if (r != 0) {
                return r;
            }
            return func_ov123_0206e384(a, s, n);
        case 18:
            r = s->b1 & 0x28;
            if (r != 0) {
                return r;
            }
            return func_ov123_0206e270(a, s, n);
        case 17:
        case 16:
            return func_ov123_0206df48(a, s, n);
        case 1:
            return func_ov123_0206de48(a, s, n);
        default:
            if (s->b1 & 4) {
                return func_ov123_0206de00(a, s);
            }
            return func_ov123_0206e608(a, s, n, 0);
    }
}
