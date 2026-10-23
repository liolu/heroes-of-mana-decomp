/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct P {
    u8 pad0[0x1d4];
    u32 w1d4;
    u8 pad1[0x2e4 - 0x1d8];
    u8 buf[8];
    u8 pad2[0x454 - 0x2ec];
    u8 b454;
    u8 state;
    u8 b456;
    u8 pad3[0x824 - 0x457];
    u8 *w824;
    s32 w828;
    s32 w82c;
} P;
extern void (*data_ov123_020df210)(u8 *);
s32 func_ov123_020759f0(P *, u8 *);
void func_ov123_020764b8(P *, u8 *);
void func_ov123_02075f04(P *, u8 *);
void func_ov123_020766fc(P *, u8 *);
void func_ov123_020767c4(P *, u8 *);
void func_ov123_02075c6c(P *, u8 *);
void func_ov123_0207572c(P *, u8 *, s32);
void MI_CpuFill8(void *, s32, s32);

void func_ov123_020754d0(P *p, u8 *q) {
    u8 *r;
    s32 t;
    u32 len;
    s32 k;
    s32 sub;
    if (p->state == 9) {
        data_ov123_020df210(q);
        return;
    }
    len = (q[3] << 8) + q[4] + 5;
    t   = q[0];
    if (((u8) (p->state + 249) <= 1 && t != 0x15) || (t == 0x15 && len > 7)) {
        len = func_ov123_020759f0(p, q);
    }
    r = q + 5;
    len -= 5;
    switch (t) {
        case 0x14:
            if (p->w1d4 == 0) {
                p->state = 9;
            } else {
                MI_CpuFill8(p->buf, 0, 8);
                p->state = 7;
            }
            break;
        case 0x15:
            if (r[0] == 2) {
                p->state = 9;
            }
            break;
        case 0x16:
            do {
                k   = r[0];
                sub = (r[1] << 16) + (r[2] << 8) + r[3];
                r += 4;
                switch (k) {
                    case 1:
                        if (p->b454 != 0 && p->state == 0) {
                            func_ov123_020764b8(p, r);
                        }
                        break;
                    case 16:
                        func_ov123_02075f04(p, r);
                        break;
                    case 2:
                        func_ov123_020766fc(p, r);
                        break;
                    case 11:
                        func_ov123_020767c4(p, r);
                        break;
                    case 14:
                        p->state = 4;
                        break;
                    case 20:
                        func_ov123_02075c6c(p, r);
                        break;
                    default:
                        p->state = 9;
                        break;
                }
                func_ov123_0207572c(p, r - 4, sub + 4);
                r += sub;
                len -= sub + 4;
                if (len == 0) {
                    break;
                }
            } while (p->state != 9);
            break;
        case 0x17:
            p->w824 = q;
            p->w82c = 5;
            p->w828 = len + 5;
            p->b456 = 1;
            return;
        default:
            p->state = 9;
            break;
    }
    data_ov123_020df210(q);
}
