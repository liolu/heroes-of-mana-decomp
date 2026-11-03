/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u16 data_ov123_020df1d4;
extern u32 data_ov123_020df220;
s32 func_ov123_0206f6ec(u8 *, u32, u8 *, u32, u32, u32);

s32 func_ov123_0206f4d0(u8 *obj, u32 a1, u8 *a2, u32 a3, u32 a4, u8 a5) {
    u32 r5;
    u32 r7;
    u32 r9;
    u32 t;
    s32 ts;
    u8 *p;
    u8 *q;

    obj[-0x14] = 0x45;
    r5         = 0;
    obj[-0x13] = 0;
    data_ov123_020df1d4 += 1;
    *(u16 *) (obj - 0x10) = (u16) ((data_ov123_020df1d4 >> 8) | (data_ov123_020df1d4 << 8));
    obj[-0xC]             = 0x80;
    obj[-0xB]             = a5;
    ts                    = (u16) (data_ov123_020df220 >> 0x10);
    *(u16 *) (obj - 8)    = (u16) ((ts >> 8) | (ts << 8));
    ts                    = (u16) data_ov123_020df220;
    *(u16 *) (obj - 6)    = (u16) ((ts >> 8) | (ts << 8));
    ts                    = (u16) (a4 >> 0x10);
    *(u16 *) (obj - 4)    = (u16) ((ts >> 8) | (ts << 8));
    ts                    = (u16) a4;
    *(u16 *) (obj - 2)    = (u16) ((ts >> 8) | (ts << 8));
    r9                    = a1;
    q                     = a2;
    r7                    = a3;
    if (r9 > 0x5C8) {
        p = obj;
        if (r9 > 0x5C8) {
            do {
                func_ov123_0206f6ec(obj, 0, p, 0x5C8, a4, r5 | 0x2000);
                r9 -= 0x5C8;
                p += 0x5C8;
                r5 = (u16) (r5 + 0xB9);
            } while (r9 > 0x5C8);
        }
        if (r9 != 0) {
            if (r7 != 0) {
                func_ov123_0206f6ec(obj, 0, p, r9, a4, r5 | 0x2000);
            } else {
                func_ov123_0206f6ec(obj, 0, p, r9, a4, r5);
            }
            r5 = (u16) (r5 + (r9 >> 3));
            r9 = 0;
        }
    }
    if ((r9 + r7) > 0x5C8) {
        do {
            t = 0x5C8 - r9;
            func_ov123_0206f6ec(obj, r9, q, t, a4, r5 | 0x2000);
            r7 -= t;
            r9 = 0;
            q += t;
            r5 = (u16) (r5 + 0xB9);
        } while (r7 > 0x5C8);
    }
    t = r9 + r7;
    if (t == 0) {
        return t;
    }
    return func_ov123_0206f6ec(obj, r9, q, r7, a4, r5);
}
