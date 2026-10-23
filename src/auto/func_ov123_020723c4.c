/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct {
    u8 p0[0x20];
    u16 f20;
    u8 p22[2];
    u16 f24;
    u16 f26;
    s32 f28;
} A;
typedef struct {
    u8 p0[0x48];
    s32 f48;
    s32 f4c;
    u8 p50[0x68 - 0x50];
    u8 *f68;
    u8 p6c[4];
    s16 f70;
    u8 p72;
    s8 f73;
} B;
typedef struct {
    A p0;
} Dummy;
void OS_WakeupThread(void *);
s32 func_ov123_0206c804(s32, s32);
void func_ov123_0206d34c(u16, u16, s32);
s32 func_ov123_02072264(s32, s32, void *);
s32 func_ov123_02072308(s32);

s32 func_ov123_020723c4(u8 *arg0) {
    s32 p9;
    B *b = *(B **) (arg0 + 4);
    u8 *t;
    s32 p5;
    s32 r = 0;
    A *a  = (A *) arg0;
    s32 f1;
    s32 f2;
    s32 f3;
    s32 off;
    s32 n;
    s32 x;
    s8 c1, c2, c3;
    t  = b->f68;
    c1 = b->f73;
    f1 = 1;
    if (c1 != 0 && c1 != 4) {
        f1 = 0;
    }
    if (f1 == 0 || (b->f70 & 4)) {
        off = a->f28;
        if (off != 0) {
            func_ov123_0206d34c(a->f24, a->f26, off);
        }
        c2 = b->f73;
        f2 = 1;
        if (c2 != 0 && c2 != 4) {
            f2 = 0;
        }
        if (f2 != 0) {
            off = 0x36;
        } else {
            off = 0x2a;
        }
        p5 = b->f4c + off;
        if (c2 == 0 || c2 == 4) {
            p9 = func_ov123_02072308(b->f48 - off);
        } else {
            p9 = b->f48 - off;
        }
        while (1) {
            n = func_ov123_02072264(p5, p9, a);
            if (n <= 0) {
                break;
            }
            n = func_ov123_0206c804(p5, n);
            if (n <= 0) {
                c3 = b->f73;
                f3 = 1;
                if (c3 != 0 && c3 != 4) {
                    f3 = 0;
                }
                r = -0x4c;
                if (f3 != 0) {
                    b->f70 &= ~0xe;
                }
                break;
            }
            r += n;
        }
    } else {
        r = -0x4c;
    }
    *(u16 *) (t + 0x102) = a->f20;
    OS_WakeupThread(t + 0x104);
    return r;
}
