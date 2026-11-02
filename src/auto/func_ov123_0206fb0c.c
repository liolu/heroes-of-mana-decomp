/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u32 data_ov123_020df220;
extern u8 data_ov123_020df230;

void MI_CpuFill8(void *, s32, s32);
void MI_CpuCopy8(void *, void *, s32);
s32 func_ov123_02070104(u8 *, s32, s32, s32);

void func_ov123_0206fb0c(u32 x) {
    u8 buf[0x2a];
    u32 d;
    s32 hi;
    s32 lo;
    s32 dlo;
    s32 dhi;

    MI_CpuFill8(buf, 0, 0x2a);
    MI_CpuFill8(buf, 0xff, 6);
    MI_CpuCopy8(&data_ov123_020df230, buf + 6, 6);
    *(u16 *) (buf + 0xc)  = 0x608;
    buf[0xf]              = 1;
    buf[0x15]             = 1;
    buf[0x10]             = 8;
    *(u16 *) (buf + 0x12) = 0x406;
    MI_CpuCopy8(&data_ov123_020df230, buf + 0x16, 6);
    d                     = data_ov123_020df220;
    dhi                   = (u16) (d >> 16);
    dlo                   = (u16) d;
    hi                    = (u16) (x >> 16);
    lo                    = (u16) x;
    *(u16 *) (buf + 0x1c) = (u16) ((dhi >> 8) | (dhi << 8));
    *(u16 *) (buf + 0x1e) = (u16) ((dlo >> 8) | (dlo << 8));
    *(u16 *) (buf + 0x26) = (u16) ((hi >> 8) | (hi << 8));
    *(u16 *) (buf + 0x28) = (u16) ((lo >> 8) | (lo << 8));
    func_ov123_02070104(buf, 0x2a, 0, 0);
}
