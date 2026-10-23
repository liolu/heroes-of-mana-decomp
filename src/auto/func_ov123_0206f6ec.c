/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern s32 data_ov123_020df220;
extern u8 data_ov123_020d9858;
extern u8 data_ov123_020df230;
s32 func_ov123_02070358(u8 *, s32);
void func_ov123_0206f824(u8 *, s32, s32, s32, s32, s32);
s32 func_ov123_02070228(s32);
void MI_CpuCopy8(void *, void *, s32);
s32 func_0200fa98(void);
void func_0200faac(s32);
void func_ov123_0206fe94(void *, void *, void *, s32, s32, s32);
void func_ov123_0206f6ec(u8 *buf, s32 p1, s32 a2, s32 len, s32 ip, s32 x) {
    u16 a = p1 + 0x14 + len;
    u16 b = x;
    s32 chk;
    s32 s;
    *(u16 *) (buf - 0x12) = (a >> 8) | (a << 8);
    *(u16 *) (buf - 0xE)  = (b >> 8) | (b << 8);
    *(u16 *) (buf - 0xA)  = 0;
    chk                   = func_ov123_02070358(buf - 0x14, 0x14);
    *(u16 *) (buf - 0xA)  = (chk >> 8) | (chk << 8);
    if (ip != 0x7F000001 && ip != data_ov123_020df220) {
        func_ov123_0206f824(buf - 0x14, p1 + 0x14, a2, len, ip, 0x800);
    }
    if (ip != 0x7F000001 && ip != data_ov123_020df220) {
        if (func_ov123_02070228(ip) == 0) {
            return;
        }
    }
    MI_CpuCopy8(&data_ov123_020d9858, buf - 0x1C, 8);
    s = func_0200fa98();
    func_ov123_0206fe94(&data_ov123_020df230, &data_ov123_020df230, buf - 0x1C, p1 + 0x1C, a2, len);
    func_0200faac(s);
}
