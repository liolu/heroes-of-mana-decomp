/* compiler: 1.2/sp3 */
#include "m2c.h"

void func_ov123_020a4f04(s32);
void MATHi_CRC16InitTableRev(u8 *, u16);
s32 func_ov123_020a5130(s32, s32, u8 *);
void func_0200fddc(void);
void MI_CpuCopy8(void *, u8 *, s32);
u16 MATH_CalcCRC16(u8 *, u8 *, s32);
void func_ov123_020a50b4(s32, s32, u8 *);
s32 func_ov123_020a5068(u8 *, s32, s32, u8 *);
s32 func_ov123_020a4ffc(void);
extern s32 data_ov123_020e2054;
extern u8 data_ov123_020e2058[];

s32 func_ov123_020a59b4(s32 arg0, u8 *buf) {
    s32 i;
    s32 addr = data_ov123_020e2054;
    func_ov123_020a4f04(arg0);
    MATHi_CRC16InitTableRev(buf + 0x200, 0xa001);
    i = 0;
    do {
        if (func_ov123_020a5130(addr, 0x100, buf) == 0) {
            func_0200fddc();
            return 0;
        }
        MI_CpuCopy8(data_ov123_020e2058, buf + 0xf0, 0xe);
        *(u16 *) (buf + 0xfe) = MATH_CalcCRC16(buf + 0x200, buf, 0xfe);
        do {
            func_ov123_020a50b4(addr, 0x100, buf);
        } while (func_ov123_020a5068(buf, addr, 0x100, buf + 0x100) == 0);
        i++;
        addr += 0x100;
    } while (i < 2);
    if (func_ov123_020a4ffc() != 0) {
        return 1;
    }
    return 0;
}
