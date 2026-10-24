/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 MATH_CalcCRC32(void *, void *, s32);
void MATHi_CRC32InitTableRev(void *, u32);
void MI_CpuFill8(void *, s32, s32);
void func_ov123_020946d0(void *);
void func_ov123_02094a0c(void *, s32);

void func_ov123_02094794(u8 *arg0, s32 arg1) {
    u32 tbl[0x101];
    MI_CpuFill8(arg0, 0, 0x40);
    *(s32 *) (arg0 + 0)    = 0x40;
    *(s32 *) (arg0 + 0x1C) = 0;
    *(s32 *) (arg0 + 0x24) = arg1;
    func_ov123_020946d0(arg0 + 4);
    func_ov123_02094a0c(arg0 + 0x10, 0);
    MATHi_CRC32InitTableRev(tbl, 0xEDB88320);
    *(s32 *) (arg0 + 0x3C) = MATH_CalcCRC32(tbl, arg0, 0x3C);
    *(s32 *) (arg0 + 0x20) = *(s32 *) (arg0 + 0x20) | 1;
}
