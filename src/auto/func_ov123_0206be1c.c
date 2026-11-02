/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_ov123_020df53c[];
extern u32 data_ov123_020df204;
extern u32 data_ov123_020df1f0;
u8 *func_ov123_0206c040(u8 *, s32, s32 *);
s32 func_ov123_0206c000(s32, u32, u8 *, u32);
u32 func_ov123_0206c804(u8 *, u32);

s32 func_ov123_0206be1c(s32 arg0) {
    u8 *r4;
    s32 sp0;
    u8 *ip;
    s32 t;

    r4 = data_ov123_020df53c + 0x2a;
    ip = func_ov123_0206c040(r4, 3, &sp0);
    if (arg0 == 0) {
        ip[0]  = 0x32;
        ip[1]  = 4;
        ip[2]  = (u8) ((u16) (data_ov123_020df204 >> 16) >> 8);
        ip[3]  = (u8) (data_ov123_020df204 >> 16);
        ip[4]  = (u8) ((u16) data_ov123_020df204 >> 8);
        ip[5]  = (u8) data_ov123_020df204;
        ip[6]  = 0x36;
        ip[7]  = 4;
        ip[8]  = (u8) ((u16) (data_ov123_020df1f0 >> 16) >> 8);
        ip[9]  = (u8) (data_ov123_020df1f0 >> 16);
        ip[10] = (u8) ((u16) data_ov123_020df1f0 >> 8);
        ip[11] = (u8) data_ov123_020df1f0;
        ip     = ip + 0xc;
    }
    ip[0] = 0xff;
    t     = func_ov123_0206c000(0, 0x12c, ip + 1, (u32) (ip + 1) - (u32) r4);
    func_ov123_0206c804(r4, (u32) t - (u32) r4);
    return sp0;
}
