/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct Sess {
    u8 pad[0xc];
    s32 kind;
} Sess;

typedef struct Ctx {
    u8 pad[0x20];
    s32 f20;
    u8 pad2[8];
    s32 f2c;
} Ctx;

extern u8 data_ov123_020db544[];
Sess *func_ov123_0208ae00(Ctx *, s32, s32);
s32 func_ov123_02087728(Ctx *, Sess *, s32, s32, s32, u8 *, s32, s32);
s32 func_020213f0(const void *, const void *, s32);
s32 func_ov123_02087630(Ctx *, s32, s32, u8 *, s32, s32 *);
s32 func_ov123_020889a0(Ctx *, s32, s32);
s32 func_ov123_020884f0(Ctx *, Sess **, s32, s32);
s32 func_ov123_020889ec(Sess *);
s32 func_ov123_0208a2f8(Sess *, u8 *, s32);
s32 func_ov123_0208a4c8(Sess *);
s32 func_ov123_02089944(Sess *, s32, u8 *, s32);
s32 func_ov123_02089638(Sess *, s32, u8 *, s32);

s32 func_ov123_02089378(Ctx *c, u8 *buf, s32 len, s32 a, s32 b) {
    Sess *sess;
    s32 flag;
    Sess *s2;
    s32 tmp;
    s32 r;
    s32 c0;
    sess = func_ov123_0208ae00(c, a, b);
    if (c->f2c != 0) {
        if (func_ov123_02087728(c, sess, a, b, 0, buf, len, 0) == 0) {
            return 0;
        }
    }
    if (len > 2 && func_020213f0(buf, data_ov123_020db544, 2) == 0) {
        flag = 1;
    } else {
        flag = 0;
    }
    if (sess == 0) {
        if (func_ov123_02087630(c, a, b, buf, len, &tmp) == 0) {
            return 0;
        }
        if (tmp != 0) {
            return 1;
        }
        if (flag == 0 || buf[2] != 1) {
            if (flag == 0 || buf[2] != 0x68) {
                if (func_ov123_020889a0(c, a, b) == 0) {
                    return 0;
                }
            }
            return 1;
        } else {
            if (c->f20 == 0) {
                return 1;
            }
            r = func_ov123_020884f0(c, &sess, a, b);
            if (r != 0) {
                if (r != 5) {
                    if (func_ov123_020889a0(c, a, b) == 0) {
                        return 0;
                    }
                }
                return 1;
            }
        }
    }
    s2 = sess;
    if (s2->kind == 7) {
        if (flag == 0 || buf[2] != 0x68) {
            if (func_ov123_020889ec(s2) == 0) {
                return 0;
            }
        }
        return 1;
    }
    if (flag != 0 && len >= 4) {
        if (func_020213f0(buf + 2, data_ov123_020db544, 2) == 0) {
            buf += 2;
            len -= 2;
            flag = 0;
        }
    }
    if (flag == 0) {
        return func_ov123_0208a2f8(s2, buf, len) != 0;
    }
    c0 = buf[2];
    if (c0 < 0) {
        return func_ov123_0208a4c8(s2) != 0;
    }
    if (c0 < 8) {
        return func_ov123_02089944(s2, c0, buf, len) != 0;
    }
    return func_ov123_02089638(s2, c0, buf, len) != 0;
}
