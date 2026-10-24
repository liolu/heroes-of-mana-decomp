/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u8 pad[0x454];
    u8 a;
    u8 st;
} S;
typedef struct {
    u8 pad[0xC];
    S *s;
} O;

extern u8 *func_ov123_0206ce94(u32 *, O *);
extern void func_ov123_0206cd54(s32, O *);
extern s32 func_ov123_0207575c(void *, u32, O *);
extern void func_ov123_0207655c(S *, void *);
extern void func_ov123_0207572c(S *, void *, u32);
extern void func_ov123_020754d0(S *, void *);
extern void *(*data_ov123_020df1e4)(u32);
extern void (*data_ov123_020df210)(void *);

u8 func_ov123_02075310(O *o) {
    S *s;
    u32 n;
    u8 *p;
    u8 *buf;

    s = o->s;
    do {
        p = func_ov123_0206ce94(&n, o);
        if (n == 0) {
            s->st = 9;
            return 9;
        }
    } while (n < 5);
    if (p[0] == 0x80) {
        if (s->a != 0 && s->st == 0) {
            n = p[1];
            func_ov123_0206cd54(2, o);
            buf = data_ov123_020df1e4(n);
            if (buf == 0) {
                s->st = 9;
                return 9;
            }
            if (func_ov123_0207575c(buf, n, o) == 0 && buf[0] == 1) {
                func_ov123_0207655c(s, buf + 1);
            } else {
                s->st = 9;
            }
            func_ov123_0207572c(s, buf, n);
            data_ov123_020df210(buf);
        } else {
            s->st = 9;
        }
    } else {
        n = (p[3] << 8) + p[4] + 5;
        if (n > 0x4805) {
            s->st = 9;
            return 9;
        }
        buf = data_ov123_020df1e4(n);
        if (buf == 0) {
            s->st = 9;
            return 9;
        }
        if (func_ov123_0207575c(buf, n, o) != 0) {
            data_ov123_020df210(buf);
            s->st = 9;
            return 9;
        }
        func_ov123_020754d0(s, buf);
    }
    return s->st;
}
