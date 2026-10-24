/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 (*data_ov123_020df218)(void);

s32 func_ov123_0206c804(u8 *, s32);
u64 func_0200f510(void);
s32 func_ov123_0206c770(void);
void func_ov123_02070830(void);
u8 *func_ov123_0206ce0c(u32 *);
u8 *func_ov123_0206b830(u8 *);
void MI_CpuCopy8(void *, void *, s32);
void func_ov123_0206cd00(u32);

s32 func_ov123_0206b578(u8 *name, u32 type, s32 id, u8 *out, u32 maxlen) {
    s32 nn;
    u32 len;
    s32 result;
    u32 start;
    u16 rdlen;
    u8 *p;
    u8 *wp;
    u32 now;
    u8 *lenpos;
    s32 rcode;
    u8 *pkt;
    u16 rtype;
    u8 *q2;
    u16 hi;
    u8 *end;
    u64 tk;
    u16 qd;
    u8 q[0x3c];
    u8 c;
    u8 *q1;
    u16 lo;
    *(u16 *) &q[0] = (id >> 8) | (id << 8);
    if (type != 0x20) {
        *(u16 *) &q[2] = 1;
    } else {
        *(u16 *) &q[2] = 0x1001;
    }
    *(u16 *) &q[4]  = 0x100;
    *(u16 *) &q[6]  = 0;
    *(u16 *) &q[8]  = 0;
    *(u16 *) &q[10] = 0;
    lenpos          = &q[12];
    len             = 0;
    wp              = lenpos + 1;
    c               = *name++;
    while (c != 0) {
        if (c != '.') {
            if (wp - q >= 0x3c) {
                return -1;
            }
            *wp++ = c;
            len++;
        } else {
            *lenpos = len;
            lenpos  = wp;
            len     = 0;
            wp++;
        }
        c = *name++;
    }
    *lenpos = len;
    *wp     = 0;
    wp[1]   = type >> 8;
    wp[2]   = type;
    wp[3]   = 0;
    wp[4]   = 1;
    func_ov123_0206c804(q, wp + 5 - q);
    result = 0;
    tk     = func_0200f510();
    start  = (u32) (tk >> 16);
    while (data_ov123_020df218() != 0 && result == 0 &&
           (tk = func_0200f510(), now = (u32) tk >> 16 | (u32) (tk >> 32) << 16, (s32) (now - start) < 15)) {
        if (func_ov123_0206c770() == 0) {
            func_ov123_02070830();
        } else {
            pkt = func_ov123_0206ce0c(&len);
            if (len > 0xc && id == (u16) ((*(u16 *) pkt >> 8) | (*(u16 *) pkt << 8))) {
                rcode = pkt[3] & 0xf;
                if (rcode == 3) {
                    result = -1;
                } else if (rcode == 0) {
                    end = pkt + len;
                    qd  = (pkt[4] << 8) | pkt[5];
                    p   = pkt + 0xc;
                    nn  = qd - 1;
                    if (qd != 0) {
                        do {
                            p = func_ov123_0206b830(p) + 4;
                        } while (nn-- != 0);
                    }
                    while (p < end) {
                        p     = func_ov123_0206b830(p);
                        rtype = (p[0] << 8) | p[1];
                        rdlen = (p[8] << 8) | p[9];
                        if (type == rtype) {
                            if (type != 0xc) {
                                q1     = p + 6;
                                q2     = p + 8;
                                hi     = (q1[rdlen] << 8) | (q1 + rdlen)[1];
                                lo     = (q2[rdlen] << 8) | (q2 + rdlen)[1];
                                result = (hi << 16) | lo;
                            } else {
                                if (rdlen <= maxlen) {
                                    MI_CpuCopy8(p + 10, out, rdlen);
                                    result = 1;
                                } else {
                                    result = 2;
                                }
                            }
                            break;
                        }
                        p += rdlen + 10;
                    }
                }
            }
            func_ov123_0206cd00(len);
        }
    }
    return result;
}
