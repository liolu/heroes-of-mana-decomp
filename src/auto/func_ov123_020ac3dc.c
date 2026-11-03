/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

extern u8 data_ov123_020dd58c[];
extern u8 *data_ov123_020dd570;
extern s32 data_ov123_020e3080;
extern u8 data_ov123_020e30b4[];
extern u8 data_ov123_020e3564[];
extern u8 *func_ov123_020ac5ec(u8 *, u32, u8 *, u32);
extern void func_ov123_020ac654(u8 *, u32, u8 *, u32, s32);

void func_ov123_020ac3dc(u8 *a0) {
    u8 buf[12];
    u8 *p;
    u8 *q;
    u8 *src;
    u8 *dst;
    u32 k;

    *(u16 *) buf = 0x100;
    src          = data_ov123_020dd58c;
    dst          = buf + 2;
    k            = 7;
    do {
        u8 byte = *src;
        src++;
        *dst = byte;
        dst++;
        k = k - 1;
    } while (k != 0);
    p = func_ov123_020ac5ec(data_ov123_020dd570, 1, buf, 2);
    p = func_ov123_020ac5ec(p, 2, buf, 2);
    if (data_ov123_020e3080 != 0) {
        p = func_ov123_020ac5ec(p, 5, buf, 2);
    }
    q = func_ov123_020ac5ec(p, 3, buf + 2, 7);
    if (data_ov123_020e3080 != 0) {
        q = func_ov123_020ac5ec(q, 4, data_ov123_020e30b4, 6);
    }
    func_ov123_020ac654(a0, 2, data_ov123_020e3564, (u32) (q - data_ov123_020dd570) + 8, 0);
}
