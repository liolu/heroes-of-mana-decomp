/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_0202373c(s8 *, M2C_UNK *, s8 *, s32);  /* extern */
s32 func_02024c28(s8 *);                            /* extern */
M2C_UNK func_ov123_0208ea78(M2C_UNK, s8 *, s8 *);   /* extern */
s32 func_ov123_02090ed8(s8 *, s32);                 /* extern */
extern M2C_UNK data_ov123_020dbd68;

void func_ov123_0208e588(M2C_UNK arg0, s8 *arg1, s32 arg2) {
    u16 cnt;
    s8 buf[134];
    u8 *cp;
    u8 b0;
    u8 b1;
    s8 *s;
    s8 *p;
    s8 *q;
    s8 *name;
    s32 len;
    s32 i;
    s32 n;
    s32 k;
    s32 r;
    s32 j;

    p   = arg1;
    len = arg2;
    while (*p != 0) {
        r = func_ov123_02090ed8(p, len);
        if (r < 0) {
            return;
        }
        q = p;
        len -= r;
        p += r;
        r = func_ov123_02090ed8(p, len);
        if (r < 0) {
            return;
        }
        s = p;
        p += r;
        len -= r;
        func_ov123_0208ea78(arg0, q, s);
    }
    p++;
    len--;
    for (i = 0; i < 2; i++) {
        if (len < 2) {
            return;
        }
        b0 = ((u8 *) p)[0];
        b1 = ((u8 *) p)[1];
        p += 2;
        cp    = (u8 *) &cnt;
        cp[0] = b0;
        cp[1] = b1;
        name  = p;
        n     = 0;
        cnt   = (u8) (cnt >> 8) | ((cnt << 8) & 0xFF00);
        len -= 2;
        while (*p != 0) {
            r = func_ov123_02090ed8(p, len);
            if (r < 0) {
                return;
            }
            if (r > 0x64) {
                return;
            }
            p += r;
            len -= r;
            n++;
        }
        p++;
        len--;
        for (k = 0; k < cnt; k++) {
            q = name;
            for (j = 0; j < n; j++) {
                r = func_ov123_02090ed8(p, len);
                if (r < 0) {
                    return;
                }
                func_0202373c(buf, &data_ov123_020dbd68, q, k);
                func_ov123_0208ea78(arg0, buf, p);
                p += r;
                len -= r;
                q += func_02024c28(q) + 1;
            }
        }
    }
}
