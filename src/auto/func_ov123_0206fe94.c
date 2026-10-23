/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_ov123_020df228;
extern volatile u32 data_ov123_020df22c;
extern u8 data_ov123_020d9858[];
extern volatile u32 data_ov123_020df1f8;
extern volatile u32 data_ov123_020df200;

void MI_CpuCopy8(void *, void *, u32);

void func_ov123_0206fe94(void *a, void *b, u8 *pkt, u32 len, void *extra, u32 elen) {
    u32 total;
    u32 n;
    u32 nh;

    if (data_ov123_020df228 == 0) {
        return;
    }
    if (data_ov123_020df22c == 0) {
        return;
    }
    total = len + elen;
    if (total < 8) {
        return;
    }
    if (total > 0x5e4) {
        return;
    }
    if (pkt[0] != data_ov123_020d9858[0]) {
        return;
    }
    if (pkt[1] != data_ov123_020d9858[1]) {
        return;
    }
    if (pkt[2] != data_ov123_020d9858[2]) {
        return;
    }
    if (pkt[6] != 8) {
        return;
    }
    if (pkt[7] != 0 && pkt[7] != 6) {
        return;
    }
    n  = (u16) ((total + 9) & ~1);
    nh = data_ov123_020df1f8 + n;
    if (data_ov123_020df1f8 < data_ov123_020df200) {
        if (data_ov123_020df200 <= nh) {
            return;
        }
    }
    if (nh == data_ov123_020df22c) {
        nh = 0;
        if (data_ov123_020df200 == 0) {
            return;
        }
    } else if (nh > data_ov123_020df22c) {
        nh = n;
        if (data_ov123_020df200 <= n) {
            return;
        }
    }
    if (data_ov123_020df1f8 + n > data_ov123_020df22c) {
        if (data_ov123_020df22c - data_ov123_020df1f8 >= 2) {
            *(u16 *) (data_ov123_020df228 + data_ov123_020df1f8) = 0;
        }
        data_ov123_020df1f8 = 0;
    }
    *(u16 *) (data_ov123_020df228 + data_ov123_020df1f8) = n;
    MI_CpuCopy8(b, data_ov123_020df228 + data_ov123_020df1f8 + 2, 6);
    MI_CpuCopy8(a, data_ov123_020df228 + data_ov123_020df1f8 + 8, 6);
    MI_CpuCopy8(pkt + 6, data_ov123_020df228 + data_ov123_020df1f8 + 0xe, len - 6);
    if (extra != 0 && elen != 0) {
        MI_CpuCopy8(extra, data_ov123_020df228 + data_ov123_020df1f8 + 8 + len, elen);
    }
    data_ov123_020df1f8 = nh;
}
