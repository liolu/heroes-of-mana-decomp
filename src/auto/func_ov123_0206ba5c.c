/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u64 func_0200f510(void);
s32 func_ov123_0206c770(void);
void func_ov123_02070830(void);
u8 *func_ov123_0206ce0c(u32 *len);
s32 func_ov123_02070174(void *a, void *b);
void func_ov123_0206cd00(u32 len);

extern s32 (*data_ov123_020df218)(void);
extern s32 data_ov123_020df1ec;
extern s32 data_ov123_020df1f0;
extern s32 data_ov123_020df1fc;
extern s32 data_ov123_020df204;
extern s32 data_ov123_020df21c;
extern s32 data_ov123_020df220;
extern u8 data_ov123_020df230;
extern s32 data_ov123_020df238[2];

s32 func_ov123_0206ba5c(u32 arg0, s32 arg1) {
    u32 len;
    u32 start;
    s32 limit;
    s32 res;
    u8 *p;
    u8 *q;
    u8 *end;
    u32 id;
    u32 hdr;
    s32 c;
    u16 a;
    u16 b;

    limit = (arg1 + 1) * 0xF;
    start = (u32) (func_0200f510() >> 16);
    res   = 0;
    while (data_ov123_020df218() != 0 && res == 0 && (s32) ((u32) (func_0200f510() >> 16) - start) < limit) {
        if (func_ov123_0206c770() == 0) {
            func_ov123_02070830();
            continue;
        }
        p = func_ov123_0206ce0c(&len);
        if (len > 0xF0 && p[0] == 2) {
            a  = *(u16 *) (p + 4);
            b  = *(u16 *) (p + 6);
            id = ((u32) (u16) ((a >> 8) | (a << 8)) << 16) | (u16) ((b >> 8) | (b << 8));
            if (arg0 == id && func_ov123_02070174(p + 0x1C, &data_ov123_020df230) == 0) {
                hdr = ((u32) (u16) (p[0x10] << 8 | p[0x11]) << 16) | (u16) (p[0x12] << 8 | p[0x13]);
                res = 3;
                end = p + len;
                if (p[0xEC] == 0x63 && p[0xED] == 0x82 && p[0xEE] == 0x53 && (q = p + 0xF0, p[0xEF] == 0x63)) {
                    while (q < end && (c = *q++) != 0xFF) {
                        if (c == 0) {
                            continue;
                        }
                        switch (c) {
                            case 1:
                                data_ov123_020df1ec = ((u32) (u16) (q[1] << 8 | q[2]) << 16) | (u16) (q[3] << 8 | q[4]);
                                break;
                            case 3:
                                data_ov123_020df1fc = ((u32) (u16) (q[1] << 8 | q[2]) << 16) | (u16) (q[3] << 8 | q[4]);
                                break;
                            case 6:
                                if (q[0] < 8) {
                                    data_ov123_020df238[1] = 0;
                                } else {
                                    data_ov123_020df238[1] = ((u32) (u16) (q[5] << 8 | q[6]) << 16) | (u16) (q[7] << 8 | q[8]);
                                }
                                data_ov123_020df238[0] = ((u32) (u16) (q[1] << 8 | q[2]) << 16) | (u16) (q[3] << 8 | q[4]);
                                break;
                            case 0x33:
                                data_ov123_020df21c = ((u32) (u16) (q[1] << 8 | q[2]) << 16) | (u16) (q[3] << 8 | q[4]);
                                break;
                            case 0x35:
                                switch (q[1]) {
                                    case 2:
                                        res                 = 1;
                                        data_ov123_020df204 = hdr;
                                        break;
                                    case 5:
                                        res                 = 2;
                                        data_ov123_020df220 = hdr;
                                        break;
                                }
                                break;
                            case 0x36:
                                data_ov123_020df1f0 = ((u32) (u16) (q[1] << 8 | q[2]) << 16) | (u16) (q[3] << 8 | q[4]);
                                break;
                        }
                        q += q[0] + 1;
                    }
                }
            }
        }
        func_ov123_0206cd00(len);
    }
    return res;
}
