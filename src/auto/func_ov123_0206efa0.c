/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u32 data_ov123_020df220;
extern u8 data_ov123_020df230[];
void MI_CpuCopy8(void *src, void *dst, s32 n);
void func_ov123_02070104(void *p, s32 a, s32 b, s32 c);
void func_ov123_0206efa0(u8 *p) {
    *(u16 *) (p + 6) = 0x200;
    MI_CpuCopy8(p + 8, p + 0x12, 10);
    MI_CpuCopy8(data_ov123_020df230, p + 8, 6);
    *(u16 *) (p + 0xe)  = (u16) (((u16) (data_ov123_020df220 >> 16) >> 8) | ((u16) (data_ov123_020df220 >> 16) << 8));
    *(u16 *) (p + 0x10) = (u16) (((u16) data_ov123_020df220 >> 8) | ((u16) data_ov123_020df220 << 8));
    MI_CpuCopy8(p + 0x12, p - 0xe, 6);
    MI_CpuCopy8(data_ov123_020df230, p - 8, 6);
    func_ov123_02070104(p - 0xe, 0x2a, 0, 0);
}
